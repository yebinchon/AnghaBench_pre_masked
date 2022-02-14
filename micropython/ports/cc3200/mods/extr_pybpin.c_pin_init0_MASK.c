
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
typedef int pin_obj_t ;
struct TYPE_5__ {int used; TYPE_1__* table; } ;
typedef TYPE_2__ mp_map_t ;
struct TYPE_6__ {TYPE_2__ map; } ;
struct TYPE_4__ {scalar_t__ value; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(void) {




    const mp_map_t *VAR_1 = &VAR_0.map;
    for (uint VAR_2 = 0; VAR_2 < VAR_1->used - 1; VAR_2++) {
        pin_obj_t * VAR_3 = (pin_obj_t *)VAR_1->table[VAR_2].value;
        FUNC_0 (VAR_3);
    }

}
