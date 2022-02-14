
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_obj_t ;
typedef int mp_int_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;

mp_obj_t FUNC_3(mp_int_t VAR_2) {
    if (FUNC_1(VAR_2)) {
        return FUNC_0(VAR_2);
    }
    FUNC_2(&VAR_1, "small int overflow");
    return VAR_0;
}
