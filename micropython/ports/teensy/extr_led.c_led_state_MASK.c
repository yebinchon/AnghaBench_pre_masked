
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pyb_led_t ;
typedef int pin_obj_t ;
struct TYPE_2__ {int * led_pin; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_2(pyb_led_t VAR_2, int VAR_3) {
    if (VAR_2 < 1 || VAR_2 > VAR_0) {
        return;
    }
    const pin_obj_t *VAR_4 = VAR_1[VAR_2 - 1].led_pin;

    if (VAR_3 == 0) {

        FUNC_0(VAR_4);
    } else {

        FUNC_1(VAR_4);
    }
}
