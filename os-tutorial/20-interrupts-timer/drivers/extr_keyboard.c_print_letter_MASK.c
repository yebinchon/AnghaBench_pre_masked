
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*) ;

void FUNC_1(u8 VAR_0) {
    switch (VAR_0) {
        case 0x0:
            FUNC_0("ERROR");
            break;
        case 0x1:
            FUNC_0("ESC");
            break;
        case 0x2:
            FUNC_0("1");
            break;
        case 0x3:
            FUNC_0("2");
            break;
        case 0x4:
            FUNC_0("3");
            break;
        case 0x5:
            FUNC_0("4");
            break;
        case 0x6:
            FUNC_0("5");
            break;
        case 0x7:
            FUNC_0("6");
            break;
        case 0x8:
            FUNC_0("7");
            break;
        case 0x9:
            FUNC_0("8");
            break;
        case 0x0A:
            FUNC_0("9");
            break;
        case 0x0B:
            FUNC_0("0");
            break;
        case 0x0C:
            FUNC_0("-");
            break;
        case 0x0D:
            FUNC_0("+");
            break;
        case 0x0E:
            FUNC_0("Backspace");
            break;
        case 0x0F:
            FUNC_0("Tab");
            break;
        case 0x10:
            FUNC_0("Q");
            break;
        case 0x11:
            FUNC_0("W");
            break;
        case 0x12:
            FUNC_0("E");
            break;
        case 0x13:
            FUNC_0("R");
            break;
        case 0x14:
            FUNC_0("T");
            break;
        case 0x15:
            FUNC_0("Y");
            break;
        case 0x16:
            FUNC_0("U");
            break;
        case 0x17:
            FUNC_0("I");
            break;
        case 0x18:
            FUNC_0("O");
            break;
        case 0x19:
            FUNC_0("P");
            break;
  case 0x1A:
   FUNC_0("[");
   break;
  case 0x1B:
   FUNC_0("]");
   break;
  case 0x1C:
   FUNC_0("ENTER");
   break;
  case 0x1D:
   FUNC_0("LCtrl");
   break;
  case 0x1E:
   FUNC_0("A");
   break;
  case 0x1F:
   FUNC_0("S");
   break;
        case 0x20:
            FUNC_0("D");
            break;
        case 0x21:
            FUNC_0("F");
            break;
        case 0x22:
            FUNC_0("G");
            break;
        case 0x23:
            FUNC_0("H");
            break;
        case 0x24:
            FUNC_0("J");
            break;
        case 0x25:
            FUNC_0("K");
            break;
        case 0x26:
            FUNC_0("L");
            break;
        case 0x27:
            FUNC_0(";");
            break;
        case 0x28:
            FUNC_0("'");
            break;
        case 0x29:
            FUNC_0("`");
            break;
  case 0x2A:
   FUNC_0("LShift");
   break;
  case 0x2B:
   FUNC_0("\\");
   break;
  case 0x2C:
   FUNC_0("Z");
   break;
  case 0x2D:
   FUNC_0("X");
   break;
  case 0x2E:
   FUNC_0("C");
   break;
  case 0x2F:
   FUNC_0("V");
   break;
        case 0x30:
            FUNC_0("B");
            break;
        case 0x31:
            FUNC_0("N");
            break;
        case 0x32:
            FUNC_0("M");
            break;
        case 0x33:
            FUNC_0(",");
            break;
        case 0x34:
            FUNC_0(".");
            break;
        case 0x35:
            FUNC_0("/");
            break;
        case 0x36:
            FUNC_0("Rshift");
            break;
        case 0x37:
            FUNC_0("Keypad *");
            break;
        case 0x38:
            FUNC_0("LAlt");
            break;
        case 0x39:
            FUNC_0("Spc");
            break;
        default:



            if (VAR_0 <= 0x7f) {
                FUNC_0("Unknown key down");
            } else if (VAR_0 <= 0x39 + 0x80) {
                FUNC_0("key up ");
                FUNC_1(VAR_0 - 0x80);
            } else FUNC_0("Unknown key up");
            break;
    }
}
