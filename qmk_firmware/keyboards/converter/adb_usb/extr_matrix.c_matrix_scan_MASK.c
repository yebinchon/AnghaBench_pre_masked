
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int) ;

uint8_t FUNC_9(void)
{






    static volatile uint16_t VAR_2 = 0xFFFF;
    uint16_t VAR_3;
    uint8_t VAR_4, VAR_5;


    static uint16_t VAR_6;

    VAR_3 = VAR_2;
    VAR_2 = 0xFFFF;

    if ( VAR_3 == 0xFFFF )
    {

        if (FUNC_6(VAR_6) < 12) return 0;
        VAR_6 = FUNC_7();

        VAR_3 = FUNC_0();
    }

    VAR_4 = VAR_3>>8;
    VAR_5 = VAR_3&0xFF;

    if (VAR_0 && VAR_3) {
        FUNC_4("adb_host_kbd_recv: "); FUNC_3(VAR_3); FUNC_4("\n");
    }

    if (VAR_3 == 0) {
        return 0;
    } else if (VAR_3 == 0x7F7F) {
        FUNC_5(0x7F);
    } else if (VAR_3 == 0xFFFF) {
        FUNC_5(0xFF);
    } else if (VAR_4 == 0xFF) {
        FUNC_8("adb_host_kbd_recv: ERROR(%d)\n", VAR_3);

        FUNC_1();
        return VAR_5;
    } else {
        if (VAR_1) {
            if ((VAR_4 & 0x7F) == 0x32) {
                VAR_4 = (VAR_4 & 0x80) | 0x0A;
            } else if ((VAR_4 & 0x7F) == 0x0A) {
                VAR_4 = (VAR_4 & 0x80) | 0x32;
            }
        }
        FUNC_5(VAR_4);
        if (VAR_5 != 0xFF)
            VAR_2 = VAR_5<<8 | 0xFF;
    }

    FUNC_2();
    return 1;
}
