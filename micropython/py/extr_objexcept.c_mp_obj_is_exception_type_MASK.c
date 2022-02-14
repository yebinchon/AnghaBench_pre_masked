
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ make_new; } ;
typedef TYPE_1__ mp_obj_type_t ;
typedef int mp_obj_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_4(mp_obj_t VAR_3) {
    if (FUNC_3(VAR_3, &VAR_2)) {

        mp_obj_type_t *VAR_4 = FUNC_1(VAR_3);
        if (VAR_4->make_new == VAR_0) {
            return 1;
        }
    }
    return FUNC_2(VAR_3, FUNC_0(&VAR_1));
}
