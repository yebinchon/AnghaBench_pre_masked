
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qstr ;
typedef scalar_t__ mp_obj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static inline mp_obj_t FUNC_4(mp_obj_t VAR_1, qstr VAR_2, mp_obj_t VAR_3) {
    mp_obj_t VAR_4[2];

    ((VAR_3 == VAR_0) ? FUNC_0 : FUNC_1)(VAR_1, VAR_2, VAR_4);
    if (VAR_4[0] == VAR_0) {
        return VAR_3;
    } else if (VAR_4[1] == VAR_0) {

        return VAR_4[0];
    } else {

        return FUNC_2(VAR_4[0], VAR_4[1]);
    }
}
