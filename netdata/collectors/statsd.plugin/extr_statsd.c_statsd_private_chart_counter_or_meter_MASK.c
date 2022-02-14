
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int update_every; } ;
struct TYPE_6__ {int options; scalar_t__ st; int events; void* rd_count; int last; void* rd_value; int name; } ;
typedef TYPE_1__ STATSD_METRIC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 void* FUNC_1 (scalar_t__,char const*,int *,int,int,int ) ;
 int FUNC_2 (scalar_t__,void*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ,char*,char const*,int ) ;
 TYPE_5__ VAR_6 ;
 int FUNC_6 (TYPE_1__*,char*,char*,char const*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char*,char*,int *,char const*,char*,char*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline void FUNC_9(STATSD_METRIC *VAR_7, const char *VAR_8, const char *VAR_9) {
    FUNC_0(VAR_0, "updating private chart for %s metric '%s'", VAR_8, VAR_7->name);

    if(FUNC_8(!VAR_7->st)) {
        char VAR_10[VAR_4 + 1], VAR_11[VAR_4 + 1];
        FUNC_6(VAR_7, VAR_10, VAR_11, VAR_8, VAR_4);

        char VAR_12[VAR_4 + 1];
        FUNC_5(VAR_12, VAR_4, "statsd_%s.%s", VAR_8, VAR_7->name);

        char VAR_13[VAR_4 + 1];
        FUNC_5(VAR_13, VAR_4, "statsd private chart for %s %s", VAR_8, VAR_7->name);

        VAR_7->st = FUNC_7(
                VAR_7
                , VAR_10
                , VAR_11
                , ((void*)0)
                , VAR_9
                , VAR_12
                , VAR_13
                , "events/s"
                , VAR_1
                , VAR_6.update_every
                , VAR_2
        );

        VAR_7->rd_value = FUNC_1(VAR_7->st, VAR_8, ((void*)0), 1, 1, VAR_3);

        if(VAR_7->options & VAR_5)
            VAR_7->rd_count = FUNC_1(VAR_7->st, "events", ((void*)0), 1, 1, VAR_3);
    }
    else FUNC_4(VAR_7->st);

    FUNC_2(VAR_7->st, VAR_7->rd_value, VAR_7->last);

    if(VAR_7->rd_count)
        FUNC_2(VAR_7->st, VAR_7->rd_count, VAR_7->events);

    FUNC_3(VAR_7->st);
}
