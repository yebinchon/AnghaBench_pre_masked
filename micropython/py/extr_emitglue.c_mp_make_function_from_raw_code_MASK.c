
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; int scope_flags; int const_table; int fun_data; int type_sig; int n_pos_args; } ;
typedef TYPE_1__ mp_raw_code_t ;
typedef scalar_t__ mp_obj_t ;
struct TYPE_7__ {TYPE_1__ const* rc; } ;
typedef TYPE_2__ mp_obj_fun_bc_t ;
struct TYPE_8__ {int * type; } ;
typedef TYPE_3__ mp_obj_base_t ;


 int FUNC_0 (char*,TYPE_1__ const*) ;
 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

mp_obj_t FUNC_7(const mp_raw_code_t *VAR_7, mp_obj_t VAR_8, mp_obj_t VAR_9) {
    FUNC_0("make_function_from_raw_code %p\n", VAR_7);
    FUNC_2(VAR_7 != ((void*)0));


    FUNC_2(VAR_8 == VAR_1 || FUNC_3(VAR_8, &VAR_6));


    FUNC_2(VAR_9 == VAR_1 || FUNC_3(VAR_9, &VAR_3));


    mp_obj_t VAR_10;
    switch (VAR_7->kind) {
        default:

            FUNC_2(VAR_7->kind == VAR_0);
            VAR_10 = FUNC_5(VAR_8, VAR_9, VAR_7->fun_data, VAR_7->const_table);

            if ((VAR_7->scope_flags & VAR_2) != 0) {
                ((mp_obj_base_t*)FUNC_1(VAR_10))->type = &VAR_4;
            }






            break;
    }

    return VAR_10;
}
