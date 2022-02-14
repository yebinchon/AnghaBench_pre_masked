
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_5__ {unsigned long long tv_sec; int tv_usec; } ;
struct TYPE_4__ {unsigned long long tv_sec; int tv_usec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;
struct mountinfo {int flags; struct mountinfo* next; } ;
typedef int heartbeat_t ;
struct TYPE_6__ {int rrd_update_every; } ;
typedef int RRDSET ;
typedef int RRDDIM ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 struct mountinfo* VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct mountinfo*,int) ;
 int FUNC_4 (int ,struct rusage*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 TYPE_3__* VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int ) ;
 int VAR_18 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,void*) ;
 int * FUNC_11 (int *,char*,int *,int,int,int ) ;
 int FUNC_12 (int *,int *,int) ;
 int * FUNC_13 (char*,char*,int *,char*,int *,char*,char*,int ,int *,int,int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;

void *FUNC_17(void *VAR_19) {
    FUNC_10(VAR_15, VAR_19);

    int VAR_20 = FUNC_0("plugin:proc", "netdata server resources", 1);

    VAR_12 = FUNC_0(VAR_0, "remove charts of unmounted disks" , VAR_12);

    int VAR_21 = (int)FUNC_1(VAR_0, "update every", VAR_16->rrd_update_every);
    if(VAR_21 < VAR_16->rrd_update_every)
        VAR_21 = VAR_16->rrd_update_every;

    VAR_11 = (int)FUNC_1(VAR_0, "check for new mount points every", VAR_11);
    if(VAR_11 < VAR_21)
        VAR_11 = VAR_21;

    struct rusage VAR_22;

    usec_t VAR_23 = 0;
    usec_t VAR_24 = VAR_21 * VAR_10;
    heartbeat_t VAR_25;
    FUNC_5(&VAR_25);
    while(!VAR_18) {
        VAR_23 = FUNC_6(&VAR_25);
                             FUNC_7(&VAR_25, VAR_24);

        if(FUNC_16(VAR_18)) break;





        FUNC_8(0);





        struct mountinfo *VAR_26;
        for(VAR_26 = VAR_14; VAR_26; VAR_26 = VAR_26->next) {

            if(FUNC_16(VAR_26->flags & (VAR_2 | VAR_1)))
                continue;

            FUNC_3(VAR_26, VAR_21);
            if(FUNC_16(VAR_18)) break;
        }

        if(FUNC_16(VAR_18)) break;

        if(VAR_13)
            FUNC_2(VAR_13, VAR_17, ((void*)0));

        if(VAR_20) {
            static RRDSET *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);
            static RRDDIM *VAR_29 = ((void*)0), *VAR_30 = ((void*)0), *VAR_31 = ((void*)0);



            FUNC_4(VAR_9, &VAR_22);

            if(FUNC_16(!VAR_27)) {
                VAR_27 = FUNC_13(
                        "netdata"
                        , "plugin_diskspace"
                        , ((void*)0)
                        , "diskspace"
                        , ((void*)0)
                        , "NetData Disk Space Plugin CPU usage"
                        , "milliseconds/s"
                        , VAR_4
                        , ((void*)0)
                        , VAR_3
                        , VAR_21
                        , VAR_6
                );

                VAR_29 = FUNC_11(VAR_27, "user", ((void*)0), 1, 1000, VAR_8);
                VAR_30 = FUNC_11(VAR_27, "system", ((void*)0), 1, 1000, VAR_8);
            }
            else
                FUNC_15(VAR_27);

            FUNC_12(VAR_27, VAR_29, VAR_22.ru_utime.tv_sec * 1000000ULL + VAR_22.ru_utime.tv_usec);
            FUNC_12(VAR_27, VAR_30, VAR_22.ru_stime.tv_sec * 1000000ULL + VAR_22.ru_stime.tv_usec);
            FUNC_14(VAR_27);



            if(FUNC_16(!VAR_28)) {
                VAR_28 = FUNC_13(
                        "netdata"
                        , "plugin_diskspace_dt"
                        , ((void*)0)
                        , "diskspace"
                        , ((void*)0)
                        , "NetData Disk Space Plugin Duration"
                        , "milliseconds/run"
                        , VAR_4
                        , ((void*)0)
                        , 132021
                        , VAR_21
                        , VAR_5
                );

                VAR_31 = FUNC_11(VAR_28, "duration", ((void*)0), 1, 1000, VAR_7);
            }
            else
                FUNC_15(VAR_28);

            FUNC_12(VAR_28, VAR_31, VAR_23);
            FUNC_14(VAR_28);



            if(FUNC_16(VAR_18)) break;
        }
    }

    FUNC_9(1);
    return ((void*)0);
}
