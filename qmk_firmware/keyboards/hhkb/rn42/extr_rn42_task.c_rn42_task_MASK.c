
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_2__ {int nkro; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (char*,scalar_t__,...) ;
 int VAR_4 ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int VAR_8 ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,int) ;

void FUNC_15(void)
{
    int16_t VAR_9;

    while ((VAR_9 = FUNC_7()) != -1) {


        static enum {LED_INIT, LED_FE, LED_02, LED_01} VAR_10 = LED_INIT;
        switch (VAR_10) {
            case LED_INIT:
                if (VAR_9 == 0xFE) VAR_10 = LED_FE;
                else {
                    if (0x0 <= VAR_9 && VAR_9 <= 0x7f) FUNC_14("%c", VAR_9);
                    else FUNC_14(" %02X", VAR_9);
                }
                break;
            case LED_FE:
                if (VAR_9 == 0x02) VAR_10 = LED_02;
                else VAR_10 = LED_INIT;
                break;
            case LED_02:
                if (VAR_9 == 0x01) VAR_10 = LED_01;
                else VAR_10 = LED_INIT;
                break;
            case LED_01:
                FUNC_4("LED status: %02X\n", VAR_9);
                FUNC_10(VAR_9);
                VAR_10 = LED_INIT;
                break;
            default:
                VAR_10 = LED_INIT;
        }
    }


    if (!VAR_3) {
        if (!VAR_4 && !FUNC_9()) {
            if (FUNC_5() != &VAR_7) {
                FUNC_3();




                FUNC_6(&VAR_7);
            }
        } else {
            if (FUNC_5() != &VAR_6) {
                FUNC_3();



                FUNC_6(&VAR_6);
            }
        }
    }


    static uint16_t VAR_11 = 0;
    uint16_t VAR_12 = FUNC_12(VAR_11);
    if (VAR_12 > 1000) {

        VAR_11 += VAR_12/1000*1000;


        uint8_t VAR_13 = FUNC_1();
        if (VAR_13 == VAR_2) {
            FUNC_0(VAR_1);
        } else {
            FUNC_0(VAR_0);
        }


        uint32_t VAR_14 = FUNC_13()/1000;
        if (VAR_14%60 == 0) {
            uint16_t VAR_15 = FUNC_2();
            uint8_t VAR_16 = VAR_14/3600;
            uint8_t VAR_17 = VAR_14%3600/60;
            uint8_t VAR_18 = VAR_14%60;
            FUNC_4("%02u:%02u:%02u\t%umV\n", VAR_16, VAR_17, VAR_18, VAR_15);



        }
    }



    if (!FUNC_9() && FUNC_8()) {
        FUNC_11(1);
    } else {
        FUNC_11(0);
    }
}
