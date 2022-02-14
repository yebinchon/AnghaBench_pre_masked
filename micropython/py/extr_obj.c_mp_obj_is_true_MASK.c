
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* unary_op ) (int ,scalar_t__) ;} ;
typedef TYPE_1__ mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

bool FUNC_5(mp_obj_t VAR_5) {
    if (VAR_5 == VAR_2) {
        return 0;
    } else if (VAR_5 == VAR_4) {
        return 1;
    } else if (VAR_5 == VAR_3) {
        return 0;
    } else if (FUNC_2(VAR_5)) {
        if (VAR_5 == FUNC_0(0)) {
            return 0;
        } else {
            return 1;
        }
    } else {
        mp_obj_type_t *VAR_6 = FUNC_1(VAR_5);
        if (VAR_6->unary_op != ((void*)0)) {
            mp_obj_t VAR_7 = VAR_6->unary_op(VAR_1, VAR_5);
            if (VAR_7 != VAR_0) {
                return VAR_7 == VAR_4;
            }
        }

        mp_obj_t VAR_8 = FUNC_3(VAR_5);
        if (VAR_8 != VAR_0) {

            return VAR_8 != FUNC_0(0);
        } else {

            return 1;
        }
    }
}
