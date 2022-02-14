
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t mp_int_t ;
typedef int microbit_image_obj_t ;
struct TYPE_3__ {int** image_buffer; size_t brightnesses; } ;
typedef TYPE_1__ microbit_display_obj_t ;


 int FUNC_0 (int *,size_t,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ,int) ;

void FUNC_4(microbit_display_obj_t *VAR_0, microbit_image_obj_t *VAR_1) {
    mp_int_t VAR_2 = FUNC_3(FUNC_2(VAR_1), 5);
    mp_int_t VAR_3 = FUNC_3(FUNC_1(VAR_1), 5);
    mp_int_t VAR_4 = 0;
    mp_int_t VAR_5 = 0;
    for (; VAR_4 < VAR_2; ++VAR_4) {
        mp_int_t VAR_6 = 0;
        for (; VAR_6 < VAR_3; ++VAR_6) {
            uint8_t VAR_7 = FUNC_0(VAR_1, VAR_4, VAR_6);
            VAR_0->image_buffer[VAR_4][VAR_6] = VAR_7;
            VAR_5 |= (1 << VAR_7);
        }
        for (; VAR_6 < 5; ++VAR_6) {
            VAR_0->image_buffer[VAR_4][VAR_6] = 0;
        }
    }
    for (; VAR_4 < 5; ++VAR_4) {
        for (mp_int_t VAR_8 = 0; VAR_8 < 5; ++VAR_8) {
            VAR_0->image_buffer[VAR_4][VAR_8] = 0;
        }
    }
    VAR_0->brightnesses = VAR_5;
}
