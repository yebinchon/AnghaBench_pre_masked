
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_int_t ;
struct TYPE_3__ {int** image_buffer; } ;
typedef TYPE_1__ microbit_display_obj_t ;


 int FUNC_0 (char*) ;

mp_int_t FUNC_1(microbit_display_obj_t *VAR_0, mp_int_t VAR_1, mp_int_t VAR_2) {
    if (VAR_1 < 0 || VAR_2 < 0 || VAR_1 > 4 || VAR_2 > 4) {
        FUNC_0("index out of bounds.");
    }
    return VAR_0->image_buffer[VAR_1][VAR_2];
}
