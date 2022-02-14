
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* subscr ) (scalar_t__,scalar_t__,scalar_t__) ;} ;
typedef TYPE_1__ mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,scalar_t__) ;

mp_obj_t FUNC_6(mp_obj_t VAR_5, mp_obj_t VAR_6, mp_obj_t VAR_7) {
    mp_obj_type_t *VAR_8 = FUNC_0(VAR_5);
    if (VAR_8->subscr != ((void*)0)) {
        mp_obj_t VAR_9 = VAR_8->subscr(VAR_5, VAR_6, VAR_7);
        if (VAR_9 != VAR_2) {
            return VAR_9;
        }

    }
    if (VAR_7 == VAR_2) {
        if (VAR_0 == VAR_1) {
            FUNC_3("object doesn't support item deletion");
        } else {
            FUNC_4(FUNC_2(&VAR_4,
                "'%s' object doesn't support item deletion", FUNC_1(VAR_5)));
        }
    } else if (VAR_7 == VAR_3) {
        if (VAR_0 == VAR_1) {
            FUNC_3("object isn't subscriptable");
        } else {
            FUNC_4(FUNC_2(&VAR_4,
                "'%s' object isn't subscriptable", FUNC_1(VAR_5)));
        }
    } else {
        if (VAR_0 == VAR_1) {
            FUNC_3("object doesn't support item assignment");
        } else {
            FUNC_4(FUNC_2(&VAR_4,
                "'%s' object doesn't support item assignment", FUNC_1(VAR_5)));
        }
    }
}
