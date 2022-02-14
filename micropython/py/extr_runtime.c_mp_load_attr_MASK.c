
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qstr ;
typedef scalar_t__ mp_obj_t ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;

mp_obj_t FUNC_4(mp_obj_t VAR_1, qstr VAR_2) {
    FUNC_0("load attr %p.%s\n", VAR_1, FUNC_3(VAR_2));

    mp_obj_t VAR_3[2];
    FUNC_1(VAR_1, VAR_2, VAR_3);
    if (VAR_3[1] == VAR_0) {

        return VAR_3[0];
    } else {

        return FUNC_2(VAR_3[0], VAR_3[1]);
    }
}
