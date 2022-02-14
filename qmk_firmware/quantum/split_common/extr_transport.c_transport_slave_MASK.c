
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int matrix_row_t ;
struct TYPE_4__ {int backlight_level; } ;
struct TYPE_3__ {scalar_t__ encoder_state; int * smatrix; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 () ;

void FUNC_3(matrix_row_t VAR_3[]) {
    FUNC_2();

    for (int VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        VAR_2.smatrix[VAR_4] = VAR_3[VAR_4];
    }







}
