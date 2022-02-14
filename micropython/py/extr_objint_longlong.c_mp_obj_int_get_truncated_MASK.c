
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int val; } ;
typedef TYPE_1__ mp_obj_int_t ;
typedef int mp_int_t ;
typedef TYPE_1__* mp_const_obj_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

mp_int_t FUNC_2(mp_const_obj_t VAR_0) {
    if (FUNC_1(VAR_0)) {
        return FUNC_0(VAR_0);
    } else {
        const mp_obj_int_t *VAR_1 = VAR_0;
        return VAR_1->val;
    }
}
