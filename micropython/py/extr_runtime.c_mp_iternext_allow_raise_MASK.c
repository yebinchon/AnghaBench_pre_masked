
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* iternext ) (scalar_t__) ;} ;
typedef TYPE_1__ mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__*) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

mp_obj_t FUNC_8(mp_obj_t VAR_5) {
    mp_obj_type_t *VAR_6 = FUNC_2(VAR_5);
    if (VAR_6->iternext != ((void*)0)) {
        return VAR_6->iternext(VAR_5);
    } else {

        mp_obj_t VAR_7[2];
        FUNC_1(VAR_5, VAR_3, VAR_7);
        if (VAR_7[0] != VAR_2) {

            return FUNC_0(0, 0, VAR_7);
        } else {
            if (VAR_0 == VAR_1) {
                FUNC_5("object not an iterator");
            } else {
                FUNC_6(FUNC_4(&VAR_4,
                    "'%s' object isn't an iterator", FUNC_3(VAR_5)));
            }
        }
    }
}
