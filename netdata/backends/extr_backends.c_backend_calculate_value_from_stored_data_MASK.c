
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int time_t ;
struct rrddim_query_handle {int dummy; } ;
typedef int storage_number ;
typedef int calculated_number ;
struct TYPE_15__ {int id; TYPE_2__* state; } ;
struct TYPE_14__ {int hostname; } ;
struct TYPE_13__ {int update_every; int id; TYPE_4__* rrdhost; } ;
struct TYPE_11__ {int (* oldest_time ) (TYPE_5__*) ;int (* latest_time ) (TYPE_5__*) ;int (* finalize ) (struct rrddim_query_handle*) ;int (* next_metric ) (struct rrddim_query_handle*,int*) ;int (* is_finished ) (struct rrddim_query_handle*) ;int (* init ) (TYPE_5__*,struct rrddim_query_handle*,int,int) ;} ;
struct TYPE_12__ {TYPE_1__ query_ops; } ;
typedef TYPE_3__ RRDSET ;
typedef TYPE_4__ RRDHOST ;
typedef TYPE_5__ RRDDIM ;
typedef int BACKEND_OPTIONS ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int ,unsigned long,unsigned long,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,struct rrddim_query_handle*,int,int) ;
 int FUNC_6 (struct rrddim_query_handle*) ;
 int FUNC_7 (struct rrddim_query_handle*,int*) ;
 int FUNC_8 (struct rrddim_query_handle*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ) ;

calculated_number FUNC_11(
          RRDSET *VAR_3
        , RRDDIM *VAR_4
        , time_t VAR_5
        , time_t VAR_6
        , BACKEND_OPTIONS VAR_7
        , time_t *VAR_8
        , time_t *VAR_9
) {
    RRDHOST *VAR_10 = VAR_3->rrdhost;
    (void)VAR_10;


    time_t VAR_11 = VAR_4->state->query_ops.oldest_time(VAR_4);
    time_t VAR_12 = VAR_4->state->query_ops.latest_time(VAR_4);
    time_t VAR_13 = VAR_3->update_every;
    struct rrddim_query_handle VAR_14;
    storage_number VAR_15;



    VAR_5 -= VAR_13 * 2;
    VAR_6 -= VAR_13 * 2;


    VAR_5 = VAR_5 - (VAR_5 % VAR_13);
    VAR_6 = VAR_6 - (VAR_6 % VAR_13);



    VAR_6 -= VAR_13;

    if(FUNC_9(VAR_5 > VAR_6))

        VAR_5 = VAR_6;

    if(FUNC_9(VAR_5 < VAR_11))
        VAR_5 = VAR_11;

    if(FUNC_9(VAR_6 > VAR_12))
        VAR_6 = VAR_12;

    if(FUNC_9(VAR_6 < VAR_11 || VAR_5 > VAR_12)) {

        FUNC_1(VAR_1, "BACKEND: %s.%s.%s: aligned timeframe %lu to %lu is outside the chart's database range %lu to %lu",
              VAR_10->hostname, VAR_3->id, VAR_4->id,
              (unsigned long)VAR_5, (unsigned long)VAR_6,
              (unsigned long)VAR_11, (unsigned long)VAR_12
        );
        return VAR_2;
    }

    *VAR_8 = VAR_5;
    *VAR_9 = VAR_6;

    size_t VAR_16 = 0;
    calculated_number VAR_17 = 0;
    for(VAR_4->state->query_ops.init(VAR_4, &VAR_14, VAR_5, VAR_6) ; !VAR_4->state->query_ops.is_finished(&VAR_14) ; ) {
        time_t VAR_18;
        VAR_15 = VAR_4->state->query_ops.next_metric(&VAR_14, &VAR_18);

        if(FUNC_9(!FUNC_2(VAR_15))) {

            continue;
        }

        calculated_number VAR_19 = FUNC_10(VAR_15);
        VAR_17 += VAR_19;

        VAR_16++;
    }
    VAR_4->state->query_ops.finalize(&VAR_14);
    if(FUNC_9(!VAR_16)) {
        FUNC_1(VAR_1, "BACKEND: %s.%s.%s: no values stored in database for range %lu to %lu",
              VAR_10->hostname, VAR_3->id, VAR_4->id,
              (unsigned long)VAR_5, (unsigned long)VAR_6
        );
        return VAR_2;
    }

    if(FUNC_9(FUNC_0(VAR_7) == VAR_0))
        return VAR_17;

    return VAR_17 / (calculated_number)VAR_16;
}
