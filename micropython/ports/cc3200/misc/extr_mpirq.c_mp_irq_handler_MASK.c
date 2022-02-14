
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ret_val; } ;
typedef TYPE_2__ nlr_buf_t ;
typedef TYPE_3__* mp_obj_t ;
struct TYPE_10__ {scalar_t__ handler; int parent; TYPE_1__* methods; } ;
typedef TYPE_3__ mp_irq_obj_t ;
struct TYPE_8__ {int (* disable ) (int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;

void FUNC_9 (mp_obj_t VAR_2) {
    mp_irq_obj_t *VAR_3 = VAR_2;
    if (VAR_3 && VAR_3->handler != VAR_0) {


        FUNC_0();
        nlr_buf_t VAR_4;
        if (FUNC_6(&VAR_4) == 0) {
            FUNC_2(VAR_3->handler, VAR_3->parent);
            FUNC_5();
        }
        else {

            VAR_3->methods->disable (VAR_3->parent);
            VAR_3->handler = VAR_0;


            FUNC_7("Uncaught exception in callback handler\n");
            FUNC_3(&VAR_1, (mp_obj_t)VAR_4.ret_val);
            FUNC_4();
        }
        FUNC_1();
    }
}
