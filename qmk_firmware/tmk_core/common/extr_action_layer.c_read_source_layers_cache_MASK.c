
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
 unsigned int** VAR_2 ;

uint8_t FUNC_0(keypos_t VAR_3) {
    const uint8_t VAR_4 = VAR_3.col + (VAR_3.row * VAR_0);
    const uint8_t VAR_5 = VAR_4 / 8;
    const uint8_t VAR_6 = VAR_4 % 8;
    uint8_t VAR_7 = 0;

    for (uint8_t VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        VAR_7 |= ((VAR_2[VAR_5][VAR_8] & (1U << VAR_6)) != 0) << VAR_8;
    }

    return VAR_7;
}
