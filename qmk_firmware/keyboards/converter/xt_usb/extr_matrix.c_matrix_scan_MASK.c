
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 () ;

uint8_t FUNC_6(void)
{
    static enum {
        XT_STATE_INIT,
        XT_STATE_E0,

        XT_STATE_E1,
        XT_STATE_E1_1D,
        XT_STATE_E1_9D,
    } VAR_0 = XT_STATE_INIT;

    uint8_t VAR_1 = FUNC_5();
    if (!VAR_1) return 0;
    FUNC_4("%02X ", VAR_1);
    switch (VAR_0) {
        case XT_STATE_INIT:
            switch (VAR_1) {
                case 0xE0:
                    VAR_0 = XT_STATE_E0;
                    break;
                case 0xE1:
                    VAR_0 = XT_STATE_E1;
                    break;
                default:
                    if (VAR_1 < 0x80)
                        FUNC_1(VAR_1);
                    else
                        FUNC_0(VAR_1 & 0x7F);
                    break;
            }
            break;
        case XT_STATE_E0:
            switch (VAR_1) {
                case 0x2A:
                case 0xAA:
                case 0x36:
                case 0xB6:

                    VAR_0 = XT_STATE_INIT;
                    break;
                default:
                    if (VAR_1 < 0x80)
                        FUNC_1(FUNC_3(VAR_1));
                    else
                        FUNC_0(FUNC_3(VAR_1 & 0x7F));
                    VAR_0 = XT_STATE_INIT;
                    break;
            }
            break;
        case XT_STATE_E1:
            switch (VAR_1) {
                case 0x1D:
                    VAR_0 = XT_STATE_E1_1D;
                    break;
                case 0x9D:
                    VAR_0 = XT_STATE_E1_9D;
                    break;
                default:
                    VAR_0 = XT_STATE_INIT;
                    break;
            }
            break;
        case XT_STATE_E1_1D:
            switch (VAR_1) {
                case 0x45:
                    FUNC_1(0x55);
                    break;
                default:
                    VAR_0 = XT_STATE_INIT;
                    break;
            }
            break;
        case XT_STATE_E1_9D:
            switch (VAR_1) {
                case 0x45:
                    FUNC_0(0x55);
                    break;
                default:
                    VAR_0 = XT_STATE_INIT;
                    break;
            }
            break;
        default:
            VAR_0 = XT_STATE_INIT;
    }
    FUNC_2();
    return 1;
}
