
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_obj_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

mp_obj_t FUNC_5(mp_obj_t VAR_4) {
    mp_obj_t VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 == VAR_2) {
        if (VAR_0 == VAR_1) {
            FUNC_3("object has no len");
        } else {
            FUNC_4(FUNC_2(&VAR_3,
                "object of type '%s' has no len()", FUNC_0(VAR_4)));
        }
    } else {
        return VAR_5;
    }
}
