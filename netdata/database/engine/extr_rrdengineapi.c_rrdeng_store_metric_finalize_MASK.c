
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rrdengine_instance {int dummy; } ;
struct rrdeng_collect_handle {scalar_t__ prev_descr; struct rrdengine_instance* ctx; } ;
struct TYPE_8__ {TYPE_2__* state; } ;
struct TYPE_6__ {struct rrdeng_collect_handle rrdeng; } ;
struct TYPE_7__ {TYPE_1__ handle; } ;
typedef TYPE_3__ RRDDIM ;


 int FUNC_0 (struct rrdengine_instance*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(RRDDIM *VAR_0)
{
    struct rrdeng_collect_handle *VAR_1;
    struct rrdengine_instance *VAR_2;

    VAR_1 = &VAR_0->state->handle.rrdeng;
    VAR_2 = VAR_1->ctx;
    FUNC_1(VAR_0);
    if (VAR_1->prev_descr) {

        FUNC_0(VAR_2, VAR_1->prev_descr);
    }
}
