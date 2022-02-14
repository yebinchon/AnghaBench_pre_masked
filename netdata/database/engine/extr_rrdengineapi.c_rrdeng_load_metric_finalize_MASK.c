
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int metric_API_consumers; } ;
struct rrdengine_instance {TYPE_1__ stats; } ;
struct rrdeng_query_handle {struct rrdeng_page_descr* descr; struct rrdengine_instance* ctx; } ;
struct rrdeng_page_descr {int dummy; } ;
struct rrddim_query_handle {struct rrdeng_query_handle rrdeng; } ;


 int FUNC_0 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct rrddim_query_handle *VAR_0)
{
    struct rrdeng_query_handle *VAR_1;
    struct rrdengine_instance *VAR_2;
    struct rrdeng_page_descr *VAR_3;

    VAR_1 = &VAR_0->rrdeng;
    VAR_2 = VAR_1->ctx;
    VAR_3 = VAR_1->descr;
    if (VAR_3) {



        FUNC_0(VAR_2, VAR_3);
    }
}
