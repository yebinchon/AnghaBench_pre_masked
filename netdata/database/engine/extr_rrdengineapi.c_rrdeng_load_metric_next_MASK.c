
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
typedef unsigned int uint64_t ;
typedef int uint32_t ;
typedef int time_t ;
struct TYPE_4__ {int metric_API_consumers; } ;
struct rrdengine_instance {TYPE_1__ stats; } ;
struct rrdeng_query_handle {int next_page_time; int position; int now; struct rrdeng_page_descr* descr; TYPE_3__* page_index; struct rrdengine_instance* ctx; } ;
struct rrdeng_page_descr {int start_time; TYPE_2__* pg_cache_descr; } ;
struct rrddim_query_handle {int end_time; struct rrdeng_query_handle rrdeng; } ;
typedef int storage_number ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int * page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rrdeng_page_descr*,int*,int*) ;
 struct rrdeng_page_descr* FUNC_1 (struct rrdengine_instance*,TYPE_3__*,int *,int,int) ;
 int FUNC_2 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int) ;

storage_number FUNC_5(struct rrddim_query_handle *VAR_3, time_t *VAR_4)
{
    struct rrdeng_query_handle *VAR_5;
    struct rrdengine_instance *VAR_6;
    struct rrdeng_page_descr *VAR_7;
    storage_number *VAR_8, VAR_9;
    unsigned VAR_10, VAR_11;
    usec_t VAR_12, VAR_13, VAR_14;
    uint32_t VAR_15;

    VAR_5 = &VAR_3->rrdeng;
    if (FUNC_4(VAR_0 == VAR_5->next_page_time)) {
        return VAR_1;
    }
    VAR_6 = VAR_5->ctx;
    if (FUNC_4(((void*)0) == (VAR_7 = VAR_5->descr))) {

        VAR_12 = VAR_5->next_page_time * VAR_2;
    } else {
        FUNC_0(VAR_7, &VAR_14, &VAR_15);
    }
    VAR_10 = VAR_5->position + 1;

    if (FUNC_4(((void*)0) == VAR_7 ||
                 VAR_10 >= (VAR_15 / sizeof(storage_number)))) {

        if (VAR_7) {

            VAR_5->next_page_time = (VAR_14 / VAR_2) + 1;
            if (FUNC_4(VAR_5->next_page_time > VAR_3->end_time)) {
                goto no_more_metrics;
            }
            VAR_12 = VAR_5->next_page_time * VAR_2;



            FUNC_2(VAR_6, VAR_7);
            VAR_5->descr = ((void*)0);
        }
        VAR_7 = FUNC_1(VAR_6, VAR_5->page_index, &VAR_5->page_index->id,
                                     VAR_12, VAR_3->end_time * VAR_2);
        if (((void*)0) == VAR_7) {
            goto no_more_metrics;
        }



        VAR_5->descr = VAR_7;
        FUNC_0(VAR_7, &VAR_14, &VAR_15);
        if (FUNC_4(VAR_0 == VAR_7->start_time ||
                     VAR_0 == VAR_14)) {
            goto no_more_metrics;
        }
        if (FUNC_4(VAR_7->start_time != VAR_14 && VAR_12 > VAR_7->start_time)) {

            VAR_11 = VAR_15 / sizeof(storage_number);
            VAR_10 = ((uint64_t)(VAR_12 - VAR_7->start_time)) * (VAR_11 - 1) /
                       (VAR_14 - VAR_7->start_time);
        } else {
            VAR_10 = 0;
        }
    }
    VAR_8 = VAR_7->pg_cache_descr->page;
    VAR_9 = VAR_8[VAR_10];
    VAR_11 = VAR_15 / sizeof(storage_number);
    if (VAR_11 > 1) {
        usec_t VAR_16;

        VAR_16 = (VAR_14 - VAR_7->start_time) / (VAR_11 - 1);
        VAR_13 = VAR_7->start_time + VAR_10 * VAR_16;
    } else {
        VAR_13 = VAR_7->start_time;
    }
    VAR_5->position = VAR_10;
    VAR_5->now = VAR_13 / VAR_2;


    if (FUNC_4(VAR_5->now >= VAR_3->end_time)) {

        VAR_5->next_page_time = VAR_0;
    }
    *VAR_4 = VAR_5->now;
    return VAR_9;

no_more_metrics:
    VAR_5->next_page_time = VAR_0;
    return VAR_1;
}
