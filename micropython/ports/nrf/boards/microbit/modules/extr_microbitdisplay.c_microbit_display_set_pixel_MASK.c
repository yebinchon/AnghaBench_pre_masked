
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_int_t ;
struct TYPE_3__ {int** image_buffer; int brightnesses; } ;
typedef TYPE_1__ microbit_display_obj_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

void FUNC_1(microbit_display_obj_t *VAR_1, mp_int_t VAR_2, mp_int_t VAR_3, mp_int_t VAR_4) {
    if (VAR_2 < 0 || VAR_3 < 0 || VAR_2 > 4 || VAR_3 > 4) {
        FUNC_0("index out of bounds.");
    }
    if (VAR_4 < 0 || VAR_4 > VAR_0) {
        FUNC_0("brightness out of bounds.");
    }
    VAR_1->image_buffer[VAR_2][VAR_3] = VAR_4;
    VAR_1->brightnesses |= (1 << VAR_4);
}
