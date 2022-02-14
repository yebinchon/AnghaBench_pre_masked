
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* parent; } ;
typedef TYPE_1__ mp_obj_type_t ;
struct TYPE_7__ {int len; int * items; } ;
typedef TYPE_2__ mp_obj_tuple_t ;
typedef int mp_obj_t ;
struct TYPE_8__ {int * type; } ;
typedef TYPE_3__ mp_obj_base_t ;
typedef int mp_const_obj_t ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_3(mp_const_obj_t VAR_2, mp_const_obj_t VAR_3) {
    for (;;) {
        if (VAR_2 == VAR_3) {
            return 1;
        }




        if (!FUNC_2(VAR_2, &VAR_1)) {
            return 0;
        }

        const mp_obj_type_t *VAR_4 = FUNC_1(VAR_2);

        if (VAR_4->parent == ((void*)0)) {

            return 0;
        } else {

            VAR_2 = FUNC_0(VAR_4->parent);
        }
    }
}
