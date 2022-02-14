
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int** VAR_0 ;
 int VAR_1 ;

void FUNC_0(uint8_t VAR_2, bool VAR_3) {



    uint8_t VAR_4 = VAR_2 * 2;

    uint8_t VAR_5 = VAR_4 / 8;
    uint8_t VAR_6 = VAR_4 % 8;

    if (VAR_3) {
        VAR_0[0][VAR_5] |= (1 << VAR_6);
    } else {
        VAR_0[0][VAR_5] &= ~(1 << VAR_6);
    }

    VAR_1 = 1;
}
