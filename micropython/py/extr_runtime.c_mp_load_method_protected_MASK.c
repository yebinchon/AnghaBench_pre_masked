
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qstr ;
struct TYPE_4__ {int * ret_val; } ;
typedef TYPE_1__ nlr_buf_t ;
typedef int mp_obj_t ;
struct TYPE_5__ {int * type; } ;
typedef TYPE_2__ mp_obj_base_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

void FUNC_6(mp_obj_t VAR_1, qstr VAR_2, mp_obj_t *VAR_3, bool VAR_4) {
    nlr_buf_t VAR_5;
    if (FUNC_4(&VAR_5) == 0) {
        FUNC_1(VAR_1, VAR_2, VAR_3);
        FUNC_3();
    } else {
        if (!VAR_4
            && !FUNC_2(FUNC_0(((mp_obj_base_t*)VAR_5.ret_val)->type),
                FUNC_0(&VAR_0))) {

            FUNC_5(FUNC_0(VAR_5.ret_val));
        }
    }
}
