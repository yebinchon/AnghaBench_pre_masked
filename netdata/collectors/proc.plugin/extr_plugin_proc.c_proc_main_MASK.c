
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usec_t ;
struct proc_module {char* name; int enabled; unsigned long long duration; int * rd; int dim; int (* func ) (int,int) ;} ;
typedef int heartbeat_t ;
struct TYPE_2__ {int rrd_update_every; } ;
typedef int RRDSET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,void*) ;
 int VAR_8 ;
 struct proc_module* VAR_9 ;
 int FUNC_8 () ;
 int * FUNC_9 (int *,int ,int *,int,int,int ) ;
 int FUNC_10 (int *,int *,int) ;
 int * FUNC_11 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int,int,int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (char*,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,int) ;
 scalar_t__ FUNC_16 (int) ;

void *FUNC_17(void *VAR_10) {
    FUNC_7(VAR_8, VAR_10);

    int VAR_11 = FUNC_0("plugin:proc", "netdata server resources", VAR_1);

    FUNC_0("plugin:proc", "/proc/pagetypeinfo", VAR_0);


    int VAR_12;
    for(VAR_12 = 0 ; VAR_9[VAR_12].name ;VAR_12++) {
        struct proc_module *VAR_13 = &VAR_9[VAR_12];

        VAR_13->enabled = FUNC_0("plugin:proc", VAR_13->name, VAR_1);
        VAR_13->duration = 0ULL;
        VAR_13->rd = ((void*)0);
    }

    usec_t VAR_14 = VAR_6->rrd_update_every * VAR_5;
    heartbeat_t VAR_15;
    FUNC_3(&VAR_15);
    size_t VAR_16 = 0;

    while(!VAR_7) {
        VAR_16++;
        (void)VAR_16;

        usec_t VAR_17 = FUNC_5(&VAR_15, VAR_14);
        usec_t VAR_18 = 0ULL;

        if(FUNC_16(VAR_7)) break;



        for(VAR_12 = 0 ; VAR_9[VAR_12].name ;VAR_12++) {
            struct proc_module *VAR_19 = &VAR_9[VAR_12];
            if(FUNC_16(!VAR_19->enabled)) continue;

            FUNC_1(VAR_2, "PROC calling %s.", VAR_19->name);





            VAR_19->enabled = !VAR_19->func(VAR_6->rrd_update_every, VAR_17);
            VAR_19->duration = FUNC_4(&VAR_15) - VAR_18;
            VAR_18 += VAR_19->duration;






            if(FUNC_16(VAR_7)) break;
        }





        if(VAR_11) {
            static RRDSET *VAR_20 = ((void*)0);

            if(FUNC_16(!VAR_20)) {
                VAR_20 = FUNC_13("netdata", "plugin_proc_modules");

                if(!VAR_20) {
                    VAR_20 = FUNC_11(
                            "netdata"
                            , "plugin_proc_modules"
                            , ((void*)0)
                            , "proc"
                            , ((void*)0)
                            , "NetData Proc Plugin Modules Durations"
                            , "milliseconds/run"
                            , "netdata"
                            , "stats"
                            , 132001
                            , VAR_6->rrd_update_every
                            , VAR_3
                    );

                    for(VAR_12 = 0 ; VAR_9[VAR_12].name ;VAR_12++) {
                        struct proc_module *VAR_21 = &VAR_9[VAR_12];
                        if(FUNC_16(!VAR_21->enabled)) continue;

                        VAR_21->rd = FUNC_9(VAR_20, VAR_21->dim, ((void*)0), 1, 1000, VAR_4);
                    }
                }
            }
            else FUNC_14(VAR_20);

            for(VAR_12 = 0 ; VAR_9[VAR_12].name ;VAR_12++) {
                struct proc_module *VAR_22 = &VAR_9[VAR_12];
                if(FUNC_16(!VAR_22->enabled)) continue;

                FUNC_10(VAR_20, VAR_22->rd, VAR_22->duration);
            }
            FUNC_12(VAR_20);

            FUNC_2();
            FUNC_8();
        }
    }

    FUNC_6(1);
    return ((void*)0);
}
