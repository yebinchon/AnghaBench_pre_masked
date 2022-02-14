
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_7 ;

int8_t FUNC_2(int8_t VAR_8, int8_t VAR_9, int8_t VAR_10, int8_t VAR_11, uint8_t VAR_12) {
    uint8_t VAR_13, VAR_14;

    if (!FUNC_1()) return -1;
    if (VAR_8 == -128) VAR_8 = -127;
    if (VAR_9 == -128) VAR_9 = -127;
    if (VAR_10 == -128) VAR_10 = -127;
    if (VAR_11 == -128) VAR_11 = -127;
    VAR_13 = VAR_2;
    FUNC_0();
    VAR_6 = VAR_0;
    VAR_14 = VAR_3 + 50;
    while (1) {

        if (VAR_5 & (1 << VAR_1)) break;
        VAR_2 = VAR_13;

        if (!FUNC_1()) return -1;

        if (VAR_3 == VAR_14) return -1;

        VAR_13 = VAR_2;
        FUNC_0();
        VAR_6 = VAR_0;
    }
    VAR_4 = VAR_12;
    VAR_4 = VAR_8;
    VAR_4 = VAR_9;
    if (VAR_7) {
        VAR_4 = VAR_10;
        VAR_4 = VAR_11;
    }

    VAR_5 = 0x3A;
    VAR_2 = VAR_13;
    return 0;
}
