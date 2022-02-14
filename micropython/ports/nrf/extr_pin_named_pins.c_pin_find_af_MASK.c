
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {scalar_t__ num_af; TYPE_2__* af; } ;
typedef TYPE_1__ pin_obj_t ;
struct TYPE_6__ {scalar_t__ fn; scalar_t__ unit; } ;
typedef TYPE_2__ pin_af_obj_t ;
typedef scalar_t__ mp_uint_t ;



const pin_af_obj_t *FUNC_0(const pin_obj_t *VAR_0, uint8_t VAR_1, uint8_t VAR_2) {
    const pin_af_obj_t *VAR_3 = VAR_0->af;
    for (mp_uint_t VAR_4 = 0; VAR_4 < VAR_0->num_af; VAR_4++, VAR_3++) {
        if (VAR_3->fn == VAR_1 && VAR_3->unit == VAR_2) {
            return VAR_3;
        }
    }
    return ((void*)0);
}
