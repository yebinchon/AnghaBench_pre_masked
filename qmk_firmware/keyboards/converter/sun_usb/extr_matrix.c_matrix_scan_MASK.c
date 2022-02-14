
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int* VAR_1 ;
 scalar_t__ FUNC_7 (size_t,int) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int) ;

uint8_t FUNC_12(void)
{
    uint8_t VAR_2;
    VAR_2 = FUNC_10();
    if (!VAR_2) return 0;

    FUNC_4(VAR_2); FUNC_3(" ");

    switch (VAR_2) {
        case 0xFF:
            FUNC_9("reset: ");
            FUNC_2(500);
            VAR_2 = FUNC_10();
            FUNC_11("%02X\n", VAR_2);
            if (VAR_2 == 0x04) {

                FUNC_6(FUNC_5());
            }
            return 0;
        case 0xFE:
            FUNC_9("layout: ");
            FUNC_2(500);
            FUNC_11("%02X\n", FUNC_10());
            return 0;
        case 0x7E:
            FUNC_9("reset fail: ");
            FUNC_2(500);
            FUNC_11("%02X\n", FUNC_10());
            return 0;
        case 0x7F:

            for (uint8_t VAR_3=0; VAR_3 < VAR_0; VAR_3++) VAR_1[VAR_3] = 0x00;
            return 0;
    }

    if (VAR_2&0x80) {

        if (FUNC_7(FUNC_1(VAR_2), FUNC_0(VAR_2))) {
            VAR_1[FUNC_1(VAR_2)] &= ~(1<<FUNC_0(VAR_2));
        }
    } else {

        if (!FUNC_7(FUNC_1(VAR_2), FUNC_0(VAR_2))) {
            VAR_1[FUNC_1(VAR_2)] |= (1<<FUNC_0(VAR_2));
        }
    }

    FUNC_8();
    return VAR_2;
}
