
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_4__ {unsigned long long tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {unsigned long long tv_sec; scalar_t__ tv_usec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;
typedef int heartbeat_t ;
typedef int RRDSET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct rusage*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,char*,int *,int,int,int ) ;
 int FUNC_10 (int *,char*,scalar_t__) ;
 int * FUNC_11 (char*,char*,int *,char*,int *,char*,char*,int ,char*,int,scalar_t__,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (scalar_t__) ;

void *FUNC_16(void *VAR_11) {
    FUNC_6(VAR_6, VAR_11);

    struct rusage VAR_12;


    int VAR_13 = FUNC_0("plugin:cgroups", "cgroups plugin resource charts", 1);

    FUNC_8();

    RRDSET *VAR_14 = ((void*)0);

    heartbeat_t VAR_15;
    FUNC_3(&VAR_15);
    usec_t VAR_16 = VAR_8 * VAR_4;
    usec_t VAR_17 = VAR_5 * VAR_4, VAR_18 = 0;

    while(!VAR_10) {
        usec_t VAR_19 = FUNC_4(&VAR_15, VAR_16);
        if(FUNC_14(VAR_10)) break;



        VAR_18 += VAR_19;
        if(FUNC_14(VAR_18 >= VAR_17 || VAR_9)) {
            FUNC_1();
            VAR_18 = 0;
            VAR_9 = 0;
        }

        FUNC_7(VAR_7);
        FUNC_15(VAR_8);





        if(VAR_13) {
            FUNC_2(VAR_3, &VAR_12);

            if(FUNC_14(!VAR_14)) {

                VAR_14 = FUNC_11(
                        "netdata"
                        , "plugin_cgroups_cpu"
                        , ((void*)0)
                        , "cgroups"
                        , ((void*)0)
                        , "NetData CGroups Plugin CPU usage"
                        , "milliseconds/s"
                        , VAR_0
                        , "stats"
                        , 132000
                        , VAR_8
                        , VAR_1
                );

                FUNC_9(VAR_14, "user", ((void*)0), 1, 1000, VAR_2);
                FUNC_9(VAR_14, "system", ((void*)0), 1, 1000, VAR_2);
            }
            else
                FUNC_13(VAR_14);

            FUNC_10(VAR_14, "user" , VAR_12.ru_utime.tv_sec * 1000000ULL + VAR_12.ru_utime.tv_usec);
            FUNC_10(VAR_14, "system", VAR_12.ru_stime.tv_sec * 1000000ULL + VAR_12.ru_stime.tv_usec);
            FUNC_12(VAR_14);
        }
    }

    FUNC_5(1);
    return ((void*)0);
}
