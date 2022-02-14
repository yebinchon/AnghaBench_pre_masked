
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;
typedef int mp_obj_t ;
typedef scalar_t__ mp_int_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

mp_obj_t FUNC_4(mp_obj_t VAR_0) {
    mp_int_t VAR_1 = (mp_int_t)VAR_0;
    if (!FUNC_1(VAR_0)) {
        return FUNC_2(VAR_1);
    } else if (VAR_1 >= 0) {




        return FUNC_0(VAR_1);
    } else {



        return FUNC_3((mp_uint_t)VAR_1);
    }
}
