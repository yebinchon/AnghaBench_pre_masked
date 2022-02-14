
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 () ;

int8_t FUNC_2(uint8_t VAR_8) {
    static uint8_t VAR_9 = 0;
    uint8_t VAR_10, VAR_11;


    if (!FUNC_1()) return -1;



    VAR_11 = VAR_2;
    FUNC_0();
    VAR_6 = VAR_0;

    if (VAR_9) {
        if (!(VAR_5 & (1 << VAR_1))) {
            VAR_2 = VAR_11;
            return -1;
        }
        VAR_9 = 0;
    }

    VAR_10 = VAR_3 + 4;
    while (1) {

        if (VAR_5 & (1 << VAR_1)) break;
        VAR_2 = VAR_11;

        if (VAR_3 == VAR_10) {
            VAR_9 = 1;
            return -1;
        }

        if (!FUNC_1()) return -1;

        VAR_11 = VAR_2;
        FUNC_0();
        VAR_6 = VAR_0;
    }

    VAR_4 = VAR_8;

    if (!(VAR_5 & (1 << VAR_1))) {
        VAR_5 = 0x3A;
        VAR_7 = 0;
    } else {
        VAR_7 = 2;
    }
    VAR_2 = VAR_11;
    return 0;
}
