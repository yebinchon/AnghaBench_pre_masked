
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ret_val; } ;
typedef TYPE_2__ nlr_buf_t ;
struct TYPE_8__ {scalar_t__ handler; int parent; TYPE_1__* methods; scalar_t__ ishard; } ;
typedef TYPE_3__ mp_irq_obj_t ;
struct TYPE_6__ {int (* trigger ) (int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(mp_irq_obj_t *VAR_2) {
    if (VAR_2->handler != VAR_0) {
        if (VAR_2->ishard) {


            FUNC_1();
            nlr_buf_t VAR_3;
            if (FUNC_7(&VAR_3) == 0) {
                FUNC_3(VAR_2->handler, VAR_2->parent);
                FUNC_6();
            } else {

                VAR_2->methods->trigger(VAR_2->parent, 0);
                VAR_2->handler = VAR_0;
                FUNC_8("Uncaught exception in IRQ callback handler\n");
                FUNC_4(&VAR_1, FUNC_0(VAR_3.ret_val));
            }
            FUNC_2();
        } else {

            FUNC_5(VAR_2->handler, VAR_2->parent);
        }
    }
}
