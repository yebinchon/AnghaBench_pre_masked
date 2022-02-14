
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_obj_t ;
typedef int mp_int_t ;
typedef scalar_t__ mp_const_obj_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

mp_int_t FUNC_5(mp_const_obj_t VAR_4) {



    if (VAR_4 == VAR_1) {
        return 0;
    } else if (VAR_4 == VAR_2) {
        return 1;
    } else if (FUNC_2(VAR_4)) {
        return FUNC_0(VAR_4);
    } else if (FUNC_3(VAR_4, &VAR_3)) {
        return FUNC_1(VAR_4);
    } else {
        mp_obj_t VAR_5 = FUNC_4(VAR_0, (mp_obj_t)VAR_4);
        return FUNC_1(VAR_5);
    }
}
