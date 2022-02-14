
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
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

int8_t FUNC_2(uint8_t VAR_7, uint16_t VAR_8) {
    uint8_t VAR_9, VAR_10;

    if (!FUNC_1()) return -1;
    VAR_9 = VAR_2;
    FUNC_0();
    VAR_6 = VAR_0;
    VAR_10 = VAR_3 + 50;
    while (1) {

        if (VAR_5 & (1 << VAR_1)) break;
        VAR_2 = VAR_9;

        if (!FUNC_1()) return -1;

        if (VAR_3 == VAR_10) return -1;

        VAR_9 = VAR_2;
        FUNC_0();
        VAR_6 = VAR_0;
    }

    VAR_4 = VAR_7;
    VAR_4 = VAR_8 & 0xFF;
    VAR_4 = (VAR_8 >> 8) & 0xFF;

    VAR_5 = 0x3A;
    VAR_2 = VAR_9;
    return 0;
}
