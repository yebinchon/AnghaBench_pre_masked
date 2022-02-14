
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int * items; } ;
typedef TYPE_1__ mp_obj_tuple_t ;
typedef int mp_obj_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(mp_obj_t VAR_0, size_t *VAR_1, mp_obj_t **VAR_2) {
    FUNC_1(FUNC_2(VAR_0));
    mp_obj_tuple_t *VAR_3 = FUNC_0(VAR_0);
    *VAR_1 = VAR_3->len;
    *VAR_2 = &VAR_3->items[0];
}
