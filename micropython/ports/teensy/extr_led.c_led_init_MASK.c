
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int gpio; int pin_mask; } ;
typedef TYPE_1__ pin_obj_t ;
struct TYPE_8__ {TYPE_1__* led_pin; } ;
struct TYPE_7__ {int Pin; int Pull; int Mode; int Speed; } ;
typedef TYPE_2__ GPIO_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;

void FUNC_2(void) {

    GPIO_InitTypeDef VAR_5;


    VAR_5.Speed = VAR_1;
    VAR_5.Mode = VAR_2;
    VAR_5.Pull = VAR_0;


    for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        const pin_obj_t *VAR_7 = VAR_4[VAR_6].led_pin;
        FUNC_1(VAR_7);
        VAR_5.Pin = VAR_7->pin_mask;
        FUNC_0(VAR_7->gpio, &VAR_5);
    }
}
