
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* mp_obj_t ;
struct TYPE_6__ {scalar_t__ val; } ;
typedef TYPE_1__ mp_obj_int_t ;
typedef scalar_t__ mp_longint_impl_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

int FUNC_2(mp_obj_t VAR_0) {
    mp_longint_impl_t VAR_1;
    if (FUNC_1(VAR_0)) {
        VAR_1 = FUNC_0(VAR_0);
    } else {
        mp_obj_int_t *VAR_2 = VAR_0;
        VAR_1 = VAR_2->val;
    }
    if (VAR_1 < 0) {
        return -1;
    } else if (VAR_1 > 0) {
        return 1;
    } else {
        return 0;
    }
}
