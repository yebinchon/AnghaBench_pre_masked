
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int decimal_detail; int update_every; } ;
struct TYPE_6__ {int options; scalar_t__ st; int events; void* rd_count; int last; void* rd_value; int name; } ;
typedef TYPE_1__ STATSD_METRIC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;
 void* FUNC_1 (scalar_t__,char*,int *,int,int,int ) ;
 int FUNC_2 (scalar_t__,void*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ,char*,int ) ;
 TYPE_5__ VAR_7 ;
 int FUNC_6 (TYPE_1__*,char*,char*,char*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char*,char*,int *,char*,char*,char*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline void FUNC_9(STATSD_METRIC *VAR_8) {
    FUNC_0(VAR_0, "updating private chart for gauge metric '%s'", VAR_8->name);

    if(FUNC_8(!VAR_8->st)) {
        char VAR_9[VAR_5 + 1], VAR_10[VAR_5 + 1];
        FUNC_6(VAR_8, VAR_9, VAR_10, "gauge", VAR_5);

        char VAR_11[VAR_5 + 1];
        FUNC_5(VAR_11, VAR_5, "statsd_gauge.%s", VAR_8->name);

        char VAR_12[VAR_5 + 1];
        FUNC_5(VAR_12, VAR_5, "statsd private chart for gauge %s", VAR_8->name);

        VAR_8->st = FUNC_7(
                VAR_8
                , VAR_9
                , VAR_10
                , ((void*)0)
                , "gauges"
                , VAR_11
                , VAR_12
                , "value"
                , VAR_1
                , VAR_7.update_every
                , VAR_2
        );

        VAR_8->rd_value = FUNC_1(VAR_8->st, "gauge", ((void*)0), 1, VAR_7.decimal_detail, VAR_3);

        if(VAR_8->options & VAR_6)
            VAR_8->rd_count = FUNC_1(VAR_8->st, "events", ((void*)0), 1, 1, VAR_4);
    }
    else FUNC_4(VAR_8->st);

    FUNC_2(VAR_8->st, VAR_8->rd_value, VAR_8->last);

    if(VAR_8->rd_count)
        FUNC_2(VAR_8->st, VAR_8->rd_count, VAR_8->events);

    FUNC_3(VAR_8->st);
}
