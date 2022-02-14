
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int col; int row; } ;
typedef TYPE_1__ keypos_t ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;

void FUNC_0(keypos_t VAR_3, uint8_t VAR_4) {
    const uint8_t VAR_5 = VAR_3.col + (VAR_3.row * VAR_0);
    const uint8_t VAR_6 = VAR_5 / 8;
    const uint8_t VAR_7 = VAR_5 % 8;

    for (uint8_t VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        VAR_2[VAR_6][VAR_8] ^= (-((VAR_4 & (1U << VAR_8)) != 0) ^ VAR_2[VAR_6][VAR_8]) & (1U << VAR_7);
    }
}
