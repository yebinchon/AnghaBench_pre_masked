
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int pin; TYPE_1__* gpio; } ;
typedef TYPE_2__ pin_obj_t ;
struct TYPE_4__ {int* AFR; } ;



uint32_t FUNC_0(const pin_obj_t *VAR_0) {
    return (VAR_0->gpio->AFR[VAR_0->pin >> 3] >> ((VAR_0->pin & 7) * 4)) & 0xf;
}
