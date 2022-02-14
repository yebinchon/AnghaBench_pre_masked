
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
 int FUNC_3 (int *,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int *,int *) ;

mp_int_t FUNC_5(mp_const_obj_t VAR_1) {
    if (FUNC_2(VAR_1)) {
        return FUNC_0(VAR_1);
    } else {
        const mp_obj_int_t *VAR_2 = FUNC_1(VAR_1);
        mp_int_t VAR_3;
        if (FUNC_4(&VAR_2->mpz, &VAR_3)) {
            return VAR_3;
        } else {

            FUNC_3(&VAR_0, "overflow converting long int to machine word");
        }
    }
}
