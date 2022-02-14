
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mp_obj_t ;


 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

bool FUNC_4(mp_obj_t VAR_6, mp_obj_t VAR_7) {
    if (FUNC_3(VAR_6) && FUNC_3(VAR_7)) {
        return VAR_6 == VAR_7;
    } else {
        FUNC_1(VAR_6, VAR_2);
        FUNC_1(VAR_7, VAR_3);

        if (VAR_2 != 0 && VAR_3 != 0 && VAR_2 != VAR_3) {
            return 0;
        }
        FUNC_0(VAR_6, VAR_0, VAR_4);
        FUNC_0(VAR_7, VAR_1, VAR_5);
        if (VAR_4 != VAR_5) {
            return 0;
        }
        return FUNC_2(VAR_0, VAR_1, VAR_4) == 0;
    }
}
