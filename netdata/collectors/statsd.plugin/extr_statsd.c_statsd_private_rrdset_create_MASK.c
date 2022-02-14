
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long private_charts_rrd_history_entries; scalar_t__ private_charts; scalar_t__ max_private_charts; scalar_t__ private_charts_hidden; int private_charts_memory_mode; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ STATSD_METRIC ;
typedef int RRD_MEMORY_MODE ;
typedef int RRDSET_TYPE ;
typedef int RRDSET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int VAR_5 ;
 int * FUNC_2 (int ,char const*,char const*,char const*,char const*,char const*,char const*,char const*,int ,char*,long,int,int ,int ,long) ;
 int FUNC_3 (int *,int ) ;
 TYPE_3__ VAR_6 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline RRDSET *FUNC_5(
        STATSD_METRIC *VAR_7
        , const char *VAR_8
        , const char *VAR_9
        , const char *VAR_10
        , const char *VAR_11
        , const char *VAR_12
        , const char *VAR_13
        , const char *VAR_14
        , long VAR_15
        , int VAR_16
        , RRDSET_TYPE VAR_17
) {
    RRD_MEMORY_MODE VAR_18 = VAR_6.private_charts_memory_mode;
    long VAR_19 = VAR_6.private_charts_rrd_history_entries;

    if(FUNC_4(VAR_6.private_charts >= VAR_6.max_private_charts)) {
        FUNC_0(VAR_0, "STATSD: metric '%s' will be charted with memory mode = none, because the maximum number of charts has been reached.", VAR_7->name);
        FUNC_1("STATSD: metric '%s' will be charted with memory mode = none, because the maximum number of charts (%zu) has been reached. Increase the number of charts by editing netdata.conf, [statsd] section.", VAR_7->name, VAR_6.max_private_charts);
        VAR_18 = VAR_4;
        VAR_19 = 5;
    }

    VAR_6.private_charts++;
    RRDSET *VAR_20 = FUNC_2(
            VAR_5
            , VAR_8
            , VAR_9
            , VAR_10
            , VAR_11
            , VAR_12
            , VAR_13
            , VAR_14
            , VAR_1
            , "private_chart"
            , VAR_15
            , VAR_16
            , VAR_17
            , VAR_18
            , VAR_19
    );
    FUNC_3(VAR_20, VAR_3);

    if(VAR_6.private_charts_hidden)
        FUNC_3(VAR_20, VAR_2);


    return VAR_20;
}
