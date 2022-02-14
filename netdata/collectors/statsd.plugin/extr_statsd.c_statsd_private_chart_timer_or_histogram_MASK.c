
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int decimal_detail; char* histogram_percentile_str; int update_every; } ;
struct TYPE_9__ {TYPE_1__* ext; } ;
struct TYPE_10__ {int options; scalar_t__ st; int events; void* rd_count; int last; void* rd_value; TYPE_2__ histogram; int name; } ;
struct TYPE_8__ {int last_sum; void* rd_sum; int last_stddev; void* rd_stddev; int last_median; void* rd_median; int last_percentile; void* rd_percentile; int last_max; void* rd_max; int last_min; void* rd_min; } ;
typedef TYPE_3__ STATSD_METRIC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 void* FUNC_1 (scalar_t__,char*,int *,int,int,int ) ;
 int FUNC_2 (scalar_t__,void*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ,char*,char const*,int ) ;
 TYPE_7__ VAR_7 ;
 int FUNC_6 (TYPE_3__*,char*,char*,char const*,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char*,char*,int *,char const*,char*,char*,char const*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline void FUNC_9(STATSD_METRIC *VAR_8, const char *VAR_9, const char *VAR_10, const char *VAR_11) {
    FUNC_0(VAR_0, "updating private chart for %s metric '%s'", VAR_9, VAR_8->name);

    if(FUNC_8(!VAR_8->st)) {
        char VAR_12[VAR_5 + 1], VAR_13[VAR_5 + 1];
        FUNC_6(VAR_8, VAR_12, VAR_13, VAR_9, VAR_5);

        char VAR_14[VAR_5 + 1];
        FUNC_5(VAR_14, VAR_5, "statsd_%s.%s", VAR_9, VAR_8->name);

        char VAR_15[VAR_5 + 1];
        FUNC_5(VAR_15, VAR_5, "statsd private chart for %s %s", VAR_9, VAR_8->name);

        VAR_8->st = FUNC_7(
                VAR_8
                , VAR_12
                , VAR_13
                , ((void*)0)
                , VAR_10
                , VAR_14
                , VAR_15
                , VAR_11
                , VAR_1
                , VAR_7.update_every
                , VAR_2
        );

        VAR_8->histogram.ext->rd_min = FUNC_1(VAR_8->st, "min", ((void*)0), 1, VAR_7.decimal_detail, VAR_3);
        VAR_8->histogram.ext->rd_max = FUNC_1(VAR_8->st, "max", ((void*)0), 1, VAR_7.decimal_detail, VAR_3);
        VAR_8->rd_value = FUNC_1(VAR_8->st, "average", ((void*)0), 1, VAR_7.decimal_detail, VAR_3);
        VAR_8->histogram.ext->rd_percentile = FUNC_1(VAR_8->st, VAR_7.histogram_percentile_str, ((void*)0), 1, VAR_7.decimal_detail, VAR_3);
        VAR_8->histogram.ext->rd_median = FUNC_1(VAR_8->st, "median", ((void*)0), 1, VAR_7.decimal_detail, VAR_3);
        VAR_8->histogram.ext->rd_stddev = FUNC_1(VAR_8->st, "stddev", ((void*)0), 1, VAR_7.decimal_detail, VAR_3);
        VAR_8->histogram.ext->rd_sum = FUNC_1(VAR_8->st, "sum", ((void*)0), 1, VAR_7.decimal_detail, VAR_3);

        if(VAR_8->options & VAR_6)
            VAR_8->rd_count = FUNC_1(VAR_8->st, "events", ((void*)0), 1, 1, VAR_4);
    }
    else FUNC_4(VAR_8->st);

    FUNC_2(VAR_8->st, VAR_8->histogram.ext->rd_min, VAR_8->histogram.ext->last_min);
    FUNC_2(VAR_8->st, VAR_8->histogram.ext->rd_max, VAR_8->histogram.ext->last_max);
    FUNC_2(VAR_8->st, VAR_8->histogram.ext->rd_percentile, VAR_8->histogram.ext->last_percentile);
    FUNC_2(VAR_8->st, VAR_8->histogram.ext->rd_median, VAR_8->histogram.ext->last_median);
    FUNC_2(VAR_8->st, VAR_8->histogram.ext->rd_stddev, VAR_8->histogram.ext->last_stddev);
    FUNC_2(VAR_8->st, VAR_8->histogram.ext->rd_sum, VAR_8->histogram.ext->last_sum);
    FUNC_2(VAR_8->st, VAR_8->rd_value, VAR_8->last);

    if(VAR_8->rd_count)
        FUNC_2(VAR_8->st, VAR_8->rd_count, VAR_8->events);

    FUNC_3(VAR_8->st);
}
