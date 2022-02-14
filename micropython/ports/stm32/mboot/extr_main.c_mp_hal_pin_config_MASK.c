
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mp_hal_pin_obj_t ;
struct TYPE_4__ {int AHBxENR; } ;
struct TYPE_3__ {int MODER; int OTYPER; int OSPEEDR; int PUPDR; int* AFR; } ;
typedef TYPE_1__ GPIO_TypeDef ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_0(mp_hal_pin_obj_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7) {
    GPIO_TypeDef *VAR_8 = (GPIO_TypeDef*)(VAR_4 & ~0xf);


    uint32_t VAR_9 = ((uintptr_t)VAR_8 - VAR_1) / (VAR_2 - VAR_1);
    VAR_3->AHBxENR |= 1 << (VAR_0 + VAR_9);
    volatile uint32_t VAR_10 = VAR_3->AHBxENR;
    (void)VAR_10;


    uint32_t VAR_11 = VAR_4 & 0xf;
    VAR_8->MODER = (VAR_8->MODER & ~(3 << (2 * VAR_11))) | ((VAR_5 & 3) << (2 * VAR_11));
    VAR_8->OTYPER = (VAR_8->OTYPER & ~(1 << VAR_11)) | ((VAR_5 >> 2) << VAR_11);
    VAR_8->OSPEEDR = (VAR_8->OSPEEDR & ~(3 << (2 * VAR_11))) | (2 << (2 * VAR_11));
    VAR_8->PUPDR = (VAR_8->PUPDR & ~(3 << (2 * VAR_11))) | (VAR_6 << (2 * VAR_11));
    VAR_8->AFR[VAR_11 >> 3] = (VAR_8->AFR[VAR_11 >> 3] & ~(15 << (4 * (VAR_11 & 7)))) | (VAR_7 << (4 * (VAR_11 & 7)));
}
