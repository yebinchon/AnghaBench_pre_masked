
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* binary_op ) (int ,scalar_t__,scalar_t__) ;} ;
typedef TYPE_1__ mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,scalar_t__) ;

bool FUNC_9(mp_obj_t VAR_7, mp_obj_t VAR_8) {


    if (VAR_7 == VAR_8






        ) {
        return 1;
    }
    if (VAR_7 == VAR_3 || VAR_8 == VAR_3) {
        return 0;
    }


    if (FUNC_3(VAR_7)) {
        if (FUNC_3(VAR_8)) {

            return 0;
        } else {
            mp_obj_t VAR_9 = VAR_8; VAR_8 = VAR_7; VAR_7 = VAR_9;


        }
    }


    if (FUNC_4(VAR_7)) {
        if (FUNC_4(VAR_8)) {

            return FUNC_6(VAR_7, VAR_8);
        } else {

            goto str_cmp_err;
        }
    } else if (FUNC_4(VAR_8)) {

    str_cmp_err:





        return 0;
    }


    mp_obj_type_t *VAR_10 = FUNC_1(VAR_7);
    if (VAR_10->binary_op != ((void*)0)) {
        mp_obj_t VAR_11 = VAR_10->binary_op(VAR_1, VAR_7, VAR_8);
        if (VAR_11 != VAR_2) {
            return VAR_11 == VAR_4 ? 1 : 0;
        }
    }



    return 0;
}
