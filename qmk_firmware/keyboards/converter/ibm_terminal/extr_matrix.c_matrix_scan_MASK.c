
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

uint8_t FUNC_6(void)
{


    static enum {
        RESET,
        RESET_RESPONSE,
        KBD_ID0,
        KBD_ID1,
        CONFIG,
        READY,
        F0,
    } VAR_0 = RESET;

    uint8_t VAR_1;
    if ((VAR_1 = FUNC_4())) {
        FUNC_0("r"); FUNC_1(VAR_1); FUNC_0(" ");
    }

    switch (VAR_0) {
        case RESET:
            FUNC_0("wFF ");
            if (FUNC_5(0xFF) == 0xFA) {
                FUNC_0("[ack]\nRESET_RESPONSE: ");
                VAR_0 = RESET_RESPONSE;
            }
            break;
        case RESET_RESPONSE:
            if (VAR_1 == 0xAA) {
                FUNC_0("[ok]\nKBD_ID: ");
                VAR_0 = KBD_ID0;
            } else if (VAR_1) {
                FUNC_0("err\nRESET: ");
                VAR_0 = RESET;
            }
            break;

        case KBD_ID0:
            if (VAR_1) {
                VAR_0 = KBD_ID1;
            }
            break;
        case KBD_ID1:
            if (VAR_1) {
                FUNC_0("\nCONFIG: ");
                VAR_0 = CONFIG;
            }
            break;
        case CONFIG:
            FUNC_0("wF8 ");
            if (FUNC_5(0xF8) == 0xFA) {
                FUNC_0("[ack]\nREADY\n");
                VAR_0 = READY;
            }
            break;
        case READY:
            switch (VAR_1) {
                case 0x00:
                    break;
                case 0xF0:
                    VAR_0 = F0;
                    FUNC_0(" ");
                    break;
                default:
                    if (VAR_1 < 0x88) {
                        FUNC_3(VAR_1);
                    } else {
                        FUNC_0("unexpected scan code at READY: "); FUNC_1(VAR_1); FUNC_0("\n");
                    }
                    VAR_0 = READY;
                    FUNC_0("\n");
            }
            break;
        case F0:
            switch (VAR_1) {
                case 0x00:
                    break;
                default:
                    if (VAR_1 < 0x88) {
                        FUNC_2(VAR_1);
                    } else {
                        FUNC_0("unexpected scan code at F0: "); FUNC_1(VAR_1); FUNC_0("\n");
                    }
                    VAR_0 = READY;
                    FUNC_0("\n");
            }
            break;
    }
    return 1;
}
