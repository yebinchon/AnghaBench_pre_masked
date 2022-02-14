
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;
typedef int mp_obj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int VAR_2 ;

mp_obj_t FUNC_2(mp_uint_t VAR_3) {


    if ((VAR_3 & ~VAR_0) == 0) {
        return FUNC_0(VAR_3);
    }
    FUNC_1(&VAR_2, "small int overflow");
    return VAR_1;
}
