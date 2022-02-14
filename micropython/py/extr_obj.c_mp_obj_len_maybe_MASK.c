
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* unary_op ) (int ,int ) ;} ;
typedef TYPE_1__ mp_obj_type_t ;
typedef int mp_obj_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;

mp_obj_t FUNC_6(mp_obj_t VAR_4) {
    if (


        FUNC_3(VAR_4) ||

        FUNC_4(VAR_4, &VAR_3)) {
        FUNC_0(VAR_4, VAR_2);
        return FUNC_1(VAR_2);
    } else {
        mp_obj_type_t *VAR_5 = FUNC_2(VAR_4);
        if (VAR_5->unary_op != ((void*)0)) {
            return VAR_5->unary_op(VAR_1, VAR_4);
        } else {
            return VAR_0;
        }
    }
}
