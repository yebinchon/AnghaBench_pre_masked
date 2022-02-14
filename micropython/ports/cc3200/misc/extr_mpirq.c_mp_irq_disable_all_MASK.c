
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mp_uint_t ;
struct TYPE_5__ {int parent; TYPE_1__* methods; } ;
typedef TYPE_2__ mp_irq_obj_t ;
struct TYPE_6__ {size_t len; scalar_t__* items; } ;
struct TYPE_4__ {int (* disable ) (int ) ;} ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2 (void) {

    for (mp_uint_t VAR_1 = 0; VAR_1 < FUNC_0(VAR_0).len; VAR_1++) {
        mp_irq_obj_t *VAR_2 = ((mp_irq_obj_t *)(FUNC_0(VAR_0).items[VAR_1]));
        VAR_2->methods->disable(VAR_2->parent);
    }
}
