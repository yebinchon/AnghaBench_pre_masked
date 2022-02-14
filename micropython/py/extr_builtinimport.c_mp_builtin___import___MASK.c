
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qstr ;
typedef scalar_t__ mp_obj_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (scalar_t__ const) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char*) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

mp_obj_t FUNC_10(size_t VAR_4, const mp_obj_t *VAR_5) {

    if (VAR_4 >= 5 && FUNC_0(VAR_5[4]) != 0) {
        FUNC_6("relative import");
    }


    qstr VAR_6 = FUNC_5(VAR_5[0]);
    mp_obj_t VAR_7 = FUNC_2(VAR_6);
    if (VAR_7 != VAR_2) {
        return VAR_7;
    }
    if (VAR_0 == VAR_1) {
        FUNC_7(&VAR_3, "module not found");
    } else {
        FUNC_8(FUNC_4(&VAR_3,
            "no module named '%q'", VAR_6));
    }
}
