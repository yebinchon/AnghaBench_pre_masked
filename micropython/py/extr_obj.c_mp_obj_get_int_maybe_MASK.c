
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int_t ;
typedef scalar_t__ mp_const_obj_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int VAR_2 ;

bool FUNC_4(mp_const_obj_t VAR_3, mp_int_t *VAR_4) {
    if (VAR_3 == VAR_0) {
        *VAR_4 = 0;
    } else if (VAR_3 == VAR_1) {
        *VAR_4 = 1;
    } else if (FUNC_2(VAR_3)) {
        *VAR_4 = FUNC_0(VAR_3);
    } else if (FUNC_3(VAR_3, &VAR_2)) {
        *VAR_4 = FUNC_1(VAR_3);
    } else {
        return 0;
    }
    return 1;
}
