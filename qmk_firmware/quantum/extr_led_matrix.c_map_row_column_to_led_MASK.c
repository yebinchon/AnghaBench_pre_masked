
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_4__ {size_t row; size_t col; } ;
struct TYPE_5__ {TYPE_1__ matrix_co; } ;
typedef TYPE_2__ led_matrix ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(uint8_t VAR_2, uint8_t VAR_3, uint8_t *VAR_4, uint8_t *VAR_5) {
    led_matrix VAR_6;
    *VAR_5 = 0;

    for (uint8_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {

        VAR_6 = VAR_1[VAR_7];
        if (VAR_2 == VAR_6.matrix_co.row && VAR_3 == VAR_6.matrix_co.col) {
            VAR_4[*VAR_5] = VAR_7;
            (*VAR_5)++;
        }
    }
}
