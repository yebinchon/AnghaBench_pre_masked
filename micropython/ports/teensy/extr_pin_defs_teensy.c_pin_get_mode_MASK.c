
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int pin; TYPE_3__* gpio; } ;
typedef TYPE_1__ pin_obj_t ;
struct TYPE_5__ {int PDDR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_0 (TYPE_3__*,int) ;
 int VAR_6 ;
 int VAR_7 ;

uint32_t FUNC_1(const pin_obj_t *VAR_8) {
    if (VAR_8->gpio == ((void*)0)) {

        return VAR_2;
    }
    volatile uint32_t *VAR_9 = FUNC_0(VAR_8->gpio, VAR_8->pin);
    uint32_t VAR_10 = *VAR_9;
    uint32_t VAR_11 = (VAR_10 & VAR_6) >> 8;
    if (VAR_11 == 0) {
        return VAR_2;
    }
    if (VAR_11 == 1) {
        if (VAR_8->gpio->PDDR & (1 << VAR_8->pin)) {
            if (VAR_10 & VAR_7) {
                return VAR_4;
            }
            return VAR_5;
        }
        return VAR_3;
    }

    if (VAR_10 & VAR_7) {
        return VAR_0;
    }
    return VAR_1;
}
