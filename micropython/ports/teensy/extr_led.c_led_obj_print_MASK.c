
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int led_id; } ;
typedef TYPE_1__ pyb_led_obj_t ;
typedef int mp_print_t ;
typedef int mp_print_kind_t ;
typedef TYPE_1__* mp_obj_t ;


 int FUNC_0 (int const*,char*,int ) ;

void FUNC_1(const mp_print_t *VAR_0, mp_obj_t VAR_1, mp_print_kind_t VAR_2) {
    pyb_led_obj_t *VAR_3 = VAR_1;
    (void)VAR_2;
    FUNC_0(VAR_0, "<LED %lu>", VAR_3->led_id);
}
