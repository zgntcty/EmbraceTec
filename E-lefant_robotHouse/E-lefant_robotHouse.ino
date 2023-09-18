#define RPin 9
#define GPin 6
#define BPin 5
#define servoPin 11
const byte interruptPin = 2;//for all buttons
const int buzzer = 10;
volatile byte state = LOW;
int functionNumber = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), buttonPressed, CHANGE);
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
}

void loop() {
  // put your main code here, to run repeatedly:
switch (var) {
  case 1:
    //When button not pressed
    break;
  case 2:
    //When button pressed.
    functionNumber = 1;
    break;
  default:
    // if nothing else matches, do the default
    // default is optional
    Serial.println("Unknown state");
    break;
}
}

void buttonPressed() {
    functionNumber = 2;
}