
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_obj_t ;
typedef scalar_t__ mp_binary_op_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int VAR_4 ;
 int VAR_5 ;

mp_obj_t FUNC_4(mp_binary_op_t VAR_6, mp_obj_t VAR_7, mp_obj_t VAR_8) {
    if (VAR_8 == VAR_2) {

        return FUNC_1(VAR_6, VAR_7, FUNC_0(0));
    } else if (VAR_8 == VAR_3) {

        return FUNC_1(VAR_6, VAR_7, FUNC_0(1));
    } else if (VAR_6 == VAR_0) {
        if (FUNC_2(VAR_8) || FUNC_3(VAR_8, &VAR_5) || FUNC_3(VAR_8, &VAR_4)) {

            return FUNC_1(VAR_6, VAR_8, VAR_7);
        }
    }
    return VAR_1;
}
