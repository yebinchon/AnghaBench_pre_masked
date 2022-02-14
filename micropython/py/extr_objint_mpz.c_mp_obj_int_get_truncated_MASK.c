
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mpz; } ;
typedef TYPE_1__ mp_obj_int_t ;
typedef int mp_int_t ;
typedef int mp_const_obj_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

mp_int_t FUNC_4(mp_const_obj_t VAR_0) {
    if (FUNC_2(VAR_0)) {
        return FUNC_0(VAR_0);
    } else {
        const mp_obj_int_t *VAR_1 = FUNC_1(VAR_0);

        return FUNC_3(&VAR_1->mpz);
    }
}
