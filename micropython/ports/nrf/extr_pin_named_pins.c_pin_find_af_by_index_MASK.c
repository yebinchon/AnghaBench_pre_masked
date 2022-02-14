
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_af; TYPE_2__* af; } ;
typedef TYPE_1__ pin_obj_t ;
struct TYPE_6__ {scalar_t__ idx; } ;
typedef TYPE_2__ pin_af_obj_t ;
typedef scalar_t__ mp_uint_t ;



const pin_af_obj_t *FUNC_0(const pin_obj_t *VAR_0, mp_uint_t VAR_1) {
    const pin_af_obj_t *VAR_2 = VAR_0->af;
    for (mp_uint_t VAR_3 = 0; VAR_3 < VAR_0->num_af; VAR_3++, VAR_2++) {
        if (VAR_2->idx == VAR_1) {
            return VAR_2;
        }
    }
    return ((void*)0);
}
