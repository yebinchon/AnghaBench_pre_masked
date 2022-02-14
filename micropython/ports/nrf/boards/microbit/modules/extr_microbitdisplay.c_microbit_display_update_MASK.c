
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ret_val; } ;
typedef TYPE_1__ nlr_buf_t ;
typedef int mp_obj_t ;
struct TYPE_5__ {int * type; } ;
typedef TYPE_2__ mp_obj_base_t ;
typedef int MP_STATE_VM ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int ** FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int FUNC_10 (int *,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_13(void) {
    VAR_7 += VAR_1;
    if (VAR_7 < VAR_4) {
        return;
    }
    VAR_7 = 0;
    switch (VAR_6) {
        case 129:
        {
            if (FUNC_1(VAR_3)[0] == ((void*)0) || FUNC_1(VAR_3)[1] == ((void*)0)) {
                FUNC_2();
                break;
            }


            mp_obj_t VAR_12;
            nlr_buf_t VAR_13;
            FUNC_4();
            if (FUNC_12(&VAR_13) == 0) {
                VAR_12 = FUNC_7(VAR_5);
                FUNC_11();
                FUNC_5();
            } else {
                FUNC_5();
                if (!FUNC_9(FUNC_0(((mp_obj_base_t*)VAR_13.ret_val)->type),
                    FUNC_0(&VAR_11))) {


                    if (FUNC_8(VAR_13.ret_val) == &VAR_10) {
                        FUNC_10(&VAR_9, "Allocation in interrupt handler");
                    }
                    MP_STATE_VM(VAR_14) = FUNC_0(VAR_13.ret_val);
                }
                VAR_12 = VAR_2;
            }
            FUNC_3(VAR_12);
            break;
        }
        case 128:
            FUNC_6(&VAR_8, VAR_0);
            FUNC_2();
            break;
    }
}
