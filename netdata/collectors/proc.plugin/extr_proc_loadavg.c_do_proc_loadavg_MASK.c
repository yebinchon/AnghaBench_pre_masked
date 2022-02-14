
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int usec_t ;
typedef int procfile ;
typedef unsigned long long collected_number ;
struct TYPE_7__ {int update_every; } ;
typedef TYPE_1__ RRDSET ;
typedef int RRDDIM ;


 int VAR_0 ;
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
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ,char*,int ) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (TYPE_1__*,char*,int *,int,int,int ) ;
 int FUNC_10 (TYPE_1__*,int *,unsigned long long) ;
 TYPE_1__* FUNC_11 (char*,char*,int *,char*,int *,char*,char*,int ,int ,int ,int,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (char*,int ,char*,int ,char*) ;
 unsigned long long FUNC_15 (int ) ;
 double FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int) ;

int FUNC_18(int VAR_12, usec_t VAR_13) {
    static procfile *VAR_14 = ((void*)0);
    static int VAR_15 = -1, VAR_16 = -1;
    static usec_t VAR_17 = 0;

    if(FUNC_17(!VAR_14)) {
        char VAR_18[VAR_1 + 1];
        FUNC_14(VAR_18, VAR_1, "%s%s", VAR_11, "/proc/loadavg");

        VAR_14 = FUNC_7(FUNC_0(VAR_0, "filename to monitor", VAR_18), " \t,:|/", VAR_7);
        if(FUNC_17(!VAR_14))
            return 1;
    }

    VAR_14 = FUNC_8(VAR_14);
    if(FUNC_17(!VAR_14))
        return 0;

    if(FUNC_17(VAR_15 == -1)) {
        VAR_15 = FUNC_1(VAR_0, "enable load average", 1);
        VAR_16 = FUNC_1(VAR_0, "enable total processes", 1);
    }

    if(FUNC_17(FUNC_4(VAR_14) < 1)) {
        FUNC_2("/proc/loadavg has no lines.");
        return 1;
    }
    if(FUNC_17(FUNC_6(VAR_14, 0) < 6)) {
        FUNC_2("/proc/loadavg has less than 6 words in it.");
        return 1;
    }

    double VAR_19 = FUNC_16(FUNC_5(VAR_14, 0, 0), ((void*)0));
    double VAR_20 = FUNC_16(FUNC_5(VAR_14, 0, 1), ((void*)0));
    double VAR_21 = FUNC_16(FUNC_5(VAR_14, 0, 2), ((void*)0));


    unsigned long long VAR_22 = FUNC_15(FUNC_5(VAR_14, 0, 4));





    if(VAR_17 <= VAR_13) {
        if(FUNC_3(VAR_15)) {
            static RRDSET *VAR_23 = ((void*)0);
            static RRDDIM *VAR_24 = ((void*)0), *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);

            if(FUNC_17(!VAR_23)) {
                VAR_23 = FUNC_11(
                        "system"
                        , "load"
                        , ((void*)0)
                        , "load"
                        , ((void*)0)
                        , "System Load Average"
                        , "load"
                        , VAR_6
                        , VAR_5
                        , VAR_4
                        , (VAR_12 < VAR_2) ? VAR_2 : VAR_12
                        , VAR_8
                );

                VAR_24 = FUNC_9(VAR_23, "load1", ((void*)0), 1, 1000, VAR_9);
                VAR_25 = FUNC_9(VAR_23, "load5", ((void*)0), 1, 1000, VAR_9);
                VAR_26 = FUNC_9(VAR_23, "load15", ((void*)0), 1, 1000, VAR_9);
            }
            else
                FUNC_13(VAR_23);

            FUNC_10(VAR_23, VAR_24, (collected_number) (VAR_19 * 1000));
            FUNC_10(VAR_23, VAR_25, (collected_number) (VAR_20 * 1000));
            FUNC_10(VAR_23, VAR_26, (collected_number) (VAR_21 * 1000));
            FUNC_12(VAR_23);

            VAR_17 = VAR_23->update_every * VAR_10;
        }
        else VAR_17 = VAR_2 * VAR_10;
    }
    else VAR_17 -= VAR_13;



    if(FUNC_3(VAR_16)) {
        static RRDSET *VAR_27 = ((void*)0);
        static RRDDIM *VAR_28 = ((void*)0);

        if(FUNC_17(!VAR_27)) {
            VAR_27 = FUNC_11(
                    "system"
                    , "active_processes"
                    , ((void*)0)
                    , "processes"
                    , ((void*)0)
                    , "System Active Processes"
                    , "processes"
                    , VAR_6
                    , VAR_5
                    , VAR_3
                    , VAR_12
                    , VAR_8
            );

            VAR_28 = FUNC_9(VAR_27, "active", ((void*)0), 1, 1, VAR_9);
        }
        else FUNC_13(VAR_27);

        FUNC_10(VAR_27, VAR_28, VAR_22);
        FUNC_12(VAR_27);
    }

    return 0;
}
