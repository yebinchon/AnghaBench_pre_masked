
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ usec_t ;
typedef int uint8_t ;
struct TYPE_18__ {int metric_API_producers; } ;
struct TYPE_15__ {int lock; int latest_corr_id; } ;
struct page_cache {TYPE_3__ committed_page_index; } ;
struct rrdengine_instance {TYPE_6__ stats; struct page_cache pg_cache; } ;
struct rrdeng_page_descr {int page_length; scalar_t__ start_time; TYPE_4__* pg_cache_descr; } ;
struct rrdeng_collect_handle {int unaligned_page; TYPE_10__* page_index; scalar_t__ page_correlation_id; struct rrdeng_page_descr* descr; struct rrdengine_instance* ctx; } ;
typedef int storage_number ;
typedef int number ;
struct TYPE_19__ {TYPE_5__* rrdset; TYPE_2__* state; } ;
struct TYPE_17__ {int rrddim_page_alignment; } ;
struct TYPE_16__ {int * page; } ;
struct TYPE_13__ {struct rrdeng_collect_handle rrdeng; } ;
struct TYPE_14__ {TYPE_1__ handle; } ;
struct TYPE_12__ {int id; } ;
typedef TYPE_7__ RRDDIM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_10__*,struct rrdeng_page_descr*) ;
 int FUNC_3 (struct rrdeng_page_descr*,scalar_t__,int) ;
 int FUNC_4 (struct rrdengine_instance*,TYPE_10__*,struct rrdeng_page_descr*) ;
 int FUNC_5 (struct rrdeng_page_descr*) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 (struct rrdengine_instance*,int *,struct rrdeng_page_descr**) ;
 int FUNC_8 (TYPE_7__*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(RRDDIM *VAR_4, usec_t VAR_5, storage_number VAR_6)
{
    struct rrdeng_collect_handle *VAR_7;
    struct rrdengine_instance *VAR_8;
    struct page_cache *VAR_9;
    struct rrdeng_page_descr *VAR_10;
    storage_number *VAR_11;
    uint8_t VAR_12 = 0, VAR_13 = 0;

    VAR_7 = &VAR_4->state->handle.rrdeng;
    VAR_8 = VAR_7->ctx;
    VAR_9 = &VAR_8->pg_cache;
    VAR_10 = VAR_7->descr;

    if (VAR_10) {


        if (VAR_10->page_length == VAR_4->rrdset->rrddim_page_alignment) {

            VAR_13 = 1;
        }

        if (FUNC_9(VAR_10->page_length + sizeof(VAR_6) < VAR_4->rrdset->rrddim_page_alignment)) {
            VAR_7->unaligned_page = 1;
            FUNC_1(VAR_0, "Metric page is not aligned with chart:");
            if (FUNC_9(VAR_3 & VAR_0))
                FUNC_5(VAR_10);
        }
        if (FUNC_9(VAR_7->unaligned_page &&

                     VAR_4->rrdset->rrddim_page_alignment <= sizeof(VAR_6))) {
            FUNC_1(VAR_0, "Flushing unaligned metric page.");
            VAR_12 = 1;
            VAR_7->unaligned_page = 0;
        }
    }
    if (FUNC_9(((void*)0) == VAR_10 ||
                 VAR_10->page_length + sizeof(VAR_6) > VAR_2 ||
                 VAR_12)) {
        FUNC_8(VAR_4);

        VAR_11 = FUNC_7(VAR_8, &VAR_7->page_index->id, &VAR_10);
        FUNC_0(VAR_11);

        VAR_7->descr = VAR_10;

        FUNC_10(&VAR_9->committed_page_index.lock);
        VAR_7->page_correlation_id = VAR_9->committed_page_index.latest_corr_id++;
        FUNC_11(&VAR_9->committed_page_index.lock);

        if (0 == VAR_4->rrdset->rrddim_page_alignment) {

            VAR_13 = 1;
        }
    }
    VAR_11 = VAR_10->pg_cache_descr->page;
    VAR_11[VAR_10->page_length / sizeof(VAR_6)] = VAR_6;
    FUNC_3(VAR_10, VAR_5, VAR_10->page_length + sizeof(VAR_6));

    if (VAR_13)
        VAR_4->rrdset->rrddim_page_alignment = VAR_10->page_length;
    if (FUNC_9(VAR_1 == VAR_10->start_time)) {
        VAR_10->start_time = VAR_5;

        FUNC_6(&VAR_8->stats.metric_API_producers, 1);
        FUNC_4(VAR_8, VAR_7->page_index, VAR_10);
    } else {
        FUNC_2(VAR_7->page_index, VAR_10);
    }
}
