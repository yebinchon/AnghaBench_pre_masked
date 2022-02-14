
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mp_uint_t ;
typedef scalar_t__ mp_obj_t ;
struct TYPE_4__ {scalar_t__ parent; } ;
typedef TYPE_1__ mp_irq_obj_t ;
struct TYPE_5__ {size_t len; scalar_t__* items; } ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;

mp_irq_obj_t *FUNC_1 (mp_obj_t VAR_1) {
    for (mp_uint_t VAR_2 = 0; VAR_2 < FUNC_0(VAR_0).len; VAR_2++) {
        mp_irq_obj_t *VAR_3 = ((mp_irq_obj_t *)(FUNC_0(VAR_0).items[VAR_2]));
        if (VAR_3->parent == VAR_1) {
            return VAR_3;
        }
    }
    return ((void*)0);
}
