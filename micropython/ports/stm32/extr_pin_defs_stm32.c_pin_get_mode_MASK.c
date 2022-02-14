
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int pin; int pin_mask; TYPE_2__* gpio; } ;
typedef TYPE_1__ pin_obj_t ;
struct TYPE_5__ {int MODER; int OTYPER; } ;
typedef TYPE_2__ GPIO_TypeDef ;


 int VAR_0 ;

uint32_t FUNC_0(const pin_obj_t *VAR_1) {
    GPIO_TypeDef *VAR_2 = VAR_1->gpio;
    uint32_t VAR_3 = (VAR_2->MODER >> (VAR_1->pin * 2)) & 3;
    if (VAR_3 != VAR_0) {
        if (VAR_2->OTYPER & VAR_1->pin_mask) {
            VAR_3 |= 1 << 4;
        }
    }
    return VAR_3;
}
