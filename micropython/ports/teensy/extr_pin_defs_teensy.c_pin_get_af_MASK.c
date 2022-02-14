
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pin; int * gpio; } ;
typedef TYPE_1__ pin_obj_t ;


 int* FUNC_0 (int *,int ) ;
 int volatile VAR_0 ;

uint32_t FUNC_1(const pin_obj_t *VAR_1) {
    if (VAR_1->gpio == ((void*)0)) {

        return 0;
    }
    volatile uint32_t *VAR_2 = FUNC_0(VAR_1->gpio, VAR_1->pin);
    return (*VAR_2 & VAR_0) >> 8;
}
