
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ name; } ;
typedef TYPE_1__ mp_obj_type_t ;
typedef scalar_t__ mp_obj_t ;
struct TYPE_14__ {scalar_t__ fun; } ;
typedef TYPE_2__ mp_obj_static_class_method_t ;
struct TYPE_15__ {TYPE_1__* type; } ;
typedef TYPE_3__ mp_obj_base_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*,scalar_t__) ;
 int VAR_3 ;
 TYPE_1__ const VAR_4 ;
 TYPE_1__ const VAR_5 ;
 TYPE_1__ const VAR_6 ;
 TYPE_1__ const VAR_7 ;
 TYPE_1__ const VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_7(mp_obj_t VAR_11, const mp_obj_type_t *VAR_12, mp_obj_t VAR_13, mp_obj_t *VAR_14) {
    if (FUNC_5(VAR_13, &VAR_9)) {

        VAR_14[0] = ((mp_obj_static_class_method_t*)FUNC_1(VAR_13))->fun;
    } else if (FUNC_5(VAR_13, &VAR_3)) {



        if (VAR_11 != VAR_0) {
            VAR_12 = FUNC_2(VAR_11);
        }
        VAR_14[0] = ((mp_obj_static_class_method_t*)FUNC_1(VAR_13))->fun;
        VAR_14[1] = FUNC_0(VAR_12);
    } else if (FUNC_5(VAR_13, &VAR_10)) {

        VAR_14[0] = VAR_13;
    } else if (FUNC_3(VAR_13)
        || (FUNC_4(VAR_13)
            && (((mp_obj_base_t*)FUNC_1(VAR_13))->type->name == VAR_1
                || ((mp_obj_base_t*)FUNC_1(VAR_13))->type->name == VAR_2))) {
        {

            VAR_14[0] = VAR_13;
            VAR_14[1] = VAR_11;
        }
    } else {

        VAR_14[0] = VAR_13;
    }
}
