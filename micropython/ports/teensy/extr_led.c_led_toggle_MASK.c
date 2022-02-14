
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pyb_led_t ;
struct TYPE_4__ {int pin_mask; TYPE_2__* gpio; } ;
typedef TYPE_1__ pin_obj_t ;
struct TYPE_6__ {TYPE_1__* led_pin; } ;
struct TYPE_5__ {int PDOR; int PCOR; int PSOR; } ;
typedef TYPE_2__ GPIO_TypeDef ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

void FUNC_0(pyb_led_t VAR_2) {
    if (VAR_2 < 1 || VAR_2 > VAR_0) {
        return;
    }
    const pin_obj_t *VAR_3 = VAR_1[VAR_2 - 1].led_pin;
    GPIO_TypeDef *VAR_4 = VAR_3->gpio;



    if (VAR_4->PDOR & VAR_3->pin_mask) {

        VAR_4->PCOR = VAR_3->pin_mask;
    } else {

        VAR_4->PSOR = VAR_3->pin_mask;
    }
}
