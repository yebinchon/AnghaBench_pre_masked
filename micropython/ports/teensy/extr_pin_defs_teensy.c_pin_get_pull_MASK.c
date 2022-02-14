
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pin; int * gpio; } ;
typedef TYPE_1__ pin_obj_t ;


 int VAR_0 ;
 int* FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

uint32_t FUNC_1(const pin_obj_t *VAR_6) {
    if (VAR_6->gpio == ((void*)0)) {

        return VAR_0;
    }
    volatile uint32_t *VAR_7 = FUNC_0(VAR_6->gpio, VAR_6->pin);

    uint32_t VAR_8 = *VAR_7;
    uint32_t VAR_9 = (VAR_8 & VAR_3) >> 8;



    if (VAR_9 > 0 && (VAR_8 & VAR_4) != 0) {
        if (VAR_8 & VAR_5) {
            return VAR_2;
        }
        return VAR_1;
    }
    return VAR_0;
}
