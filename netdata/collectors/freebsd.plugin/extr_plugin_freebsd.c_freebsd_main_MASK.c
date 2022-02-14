
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usec_t ;
struct freebsd_module {char* name; int enabled; unsigned long long duration; int * rd; int dim; int (* func ) (int,int) ;} ;
typedef int heartbeat_t ;
struct TYPE_2__ {int rrd_update_every; } ;
typedef int RRDSET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_4 ;
 struct freebsd_module* VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,void*) ;
 int FUNC_10 () ;
 int * FUNC_11 (int *,int ,int *,int,int,int ) ;
 int FUNC_12 (int *,int *,int) ;
 int * FUNC_13 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int,int,int ) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (char*,char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int,int) ;
 scalar_t__ FUNC_18 (int) ;

void *FUNC_19(void *VAR_8) {
    FUNC_9(VAR_4, VAR_8);

    int VAR_9 = FUNC_0("plugin:freebsd", "netdata server resources", 1);


    if (FUNC_2())
        FUNC_7(1);


    int VAR_10;
    for(VAR_10 = 0 ; VAR_5[VAR_10].name ;VAR_10++) {
        struct freebsd_module *VAR_11 = &VAR_5[VAR_10];

        VAR_11->enabled = FUNC_0("plugin:freebsd", VAR_11->name, VAR_11->enabled);
        VAR_11->duration = 0ULL;
        VAR_11->rd = ((void*)0);
    }

    usec_t VAR_12 = VAR_6->rrd_update_every * VAR_3;
    heartbeat_t VAR_13;
    FUNC_4(&VAR_13);

    while(!VAR_7) {
        usec_t VAR_14 = FUNC_6(&VAR_13, VAR_12);
        usec_t VAR_15 = 0ULL;

        if(FUNC_18(VAR_7)) break;



        for(VAR_10 = 0 ; VAR_5[VAR_10].name ;VAR_10++) {
            struct freebsd_module *VAR_16 = &VAR_5[VAR_10];
            if(FUNC_18(!VAR_16->enabled)) continue;

            FUNC_1(VAR_0, "FREEBSD calling %s.", VAR_16->name);

            VAR_16->enabled = !VAR_16->func(VAR_6->rrd_update_every, VAR_14);
            VAR_16->duration = FUNC_5(&VAR_13) - VAR_15;
            VAR_15 += VAR_16->duration;

            if(FUNC_18(VAR_7)) break;
        }





        if(VAR_9) {
            static RRDSET *VAR_17 = ((void*)0);

            if(FUNC_18(!VAR_17)) {
                VAR_17 = FUNC_15("netdata", "plugin_freebsd_modules");

                if(!VAR_17) {
                    VAR_17 = FUNC_13(
                            "netdata"
                            , "plugin_freebsd_modules"
                            , ((void*)0)
                            , "freebsd"
                            , ((void*)0)
                            , "NetData FreeBSD Plugin Modules Durations"
                            , "milliseconds/run"
                            , "netdata"
                            , "stats"
                            , 132001
                            , VAR_6->rrd_update_every
                            , VAR_1
                    );

                    for(VAR_10 = 0 ; VAR_5[VAR_10].name ;VAR_10++) {
                        struct freebsd_module *VAR_18 = &VAR_5[VAR_10];
                        if(FUNC_18(!VAR_18->enabled)) continue;

                        VAR_18->rd = FUNC_11(VAR_17, VAR_18->dim, ((void*)0), 1, 1000, VAR_2);
                    }
                }
            }
            else FUNC_16(VAR_17);

            for(VAR_10 = 0 ; VAR_5[VAR_10].name ;VAR_10++) {
                struct freebsd_module *VAR_19 = &VAR_5[VAR_10];
                if(FUNC_18(!VAR_19->enabled)) continue;

                FUNC_12(VAR_17, VAR_19->rd, VAR_19->duration);
            }
            FUNC_14(VAR_17);

            FUNC_3();
            FUNC_10();
        }
    }

    FUNC_8(1);
    return ((void*)0);
}
