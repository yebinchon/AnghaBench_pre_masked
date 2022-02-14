
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int metric_API_producers; } ;
struct rrdengine_instance {TYPE_3__ stats; } ;
struct rrdeng_page_descr {TYPE_6__* pg_cache_descr; int page_length; } ;
struct rrdeng_collect_handle {struct rrdeng_page_descr* descr; struct rrdeng_page_descr* prev_descr; int page_correlation_id; struct rrdengine_instance* ctx; } ;
struct TYPE_11__ {struct rrdeng_page_descr* page; } ;
struct TYPE_10__ {TYPE_2__* state; } ;
struct TYPE_7__ {struct rrdeng_collect_handle rrdeng; } ;
struct TYPE_8__ {TYPE_1__ handle; } ;
typedef TYPE_4__ RRDDIM ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct rrdeng_page_descr*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct rrdeng_page_descr*) ;
 int FUNC_5 (struct rrdengine_instance*,struct rrdeng_page_descr*,int) ;
 int FUNC_6 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_7 (struct rrdeng_page_descr*,int ) ;
 int FUNC_8 (struct rrdeng_page_descr*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct rrdengine_instance*,struct rrdeng_page_descr*,int ) ;
 int FUNC_11 (struct rrdengine_instance*,TYPE_6__*) ;
 int FUNC_12 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_13 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 scalar_t__ FUNC_14 (int) ;

void FUNC_15(RRDDIM *VAR_2)
{
    struct rrdeng_collect_handle *VAR_3;
    struct rrdengine_instance *VAR_4;
    struct rrdeng_page_descr *VAR_5;

    VAR_3 = &VAR_2->state->handle.rrdeng;
    VAR_4 = VAR_3->ctx;
    VAR_5 = VAR_3->descr;
    if (FUNC_14(((void*)0) == VAR_5)) {
        return;
    }
    if (FUNC_3(VAR_5->page_length)) {
        int VAR_6, VAR_7;

        FUNC_9(&VAR_4->stats.metric_API_producers, -1);

        if (VAR_3->prev_descr) {

            FUNC_6(VAR_4, VAR_3->prev_descr);
        }
        VAR_7 = FUNC_4(VAR_5);
        if (VAR_7) {
            FUNC_1(VAR_0, "Page has empty metrics only, deleting:");
            if (FUNC_14(VAR_1 & VAR_0))
                FUNC_8(VAR_5);
            FUNC_6(VAR_4, VAR_5);
            FUNC_5(VAR_4, VAR_5, 1);
            VAR_3->prev_descr = ((void*)0);
        } else {

            FUNC_12(VAR_4, VAR_5);
            VAR_6 = FUNC_7(VAR_5, 0);
            FUNC_13(VAR_4, VAR_5);
            FUNC_0 (1 == VAR_6);

            FUNC_10(VAR_4, VAR_5, VAR_3->page_correlation_id);
            VAR_3->prev_descr = VAR_5;
        }
    } else {
        FUNC_2(VAR_5->pg_cache_descr->page);
        FUNC_11(VAR_4, VAR_5->pg_cache_descr);
        FUNC_2(VAR_5);
    }
    VAR_3->descr = ((void*)0);
}
