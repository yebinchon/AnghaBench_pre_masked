
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usec_t ;
typedef int procfile ;
struct TYPE_2__ {int filename; } ;
typedef int RRDSET ;
typedef int RRDDIM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,char*,int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int ,char*,int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int *,int,int,int ) ;
 int FUNC_5 (int *,int *,unsigned long long) ;
 int * FUNC_6 (char*,char*,int *,char*,int *,char*,char*,int ,int ,int ,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,char*,int ,...) ;
 unsigned long long FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 TYPE_1__* VAR_18 ;

int FUNC_13(int VAR_19, usec_t VAR_20) {
    (void)VAR_20;
    static procfile *VAR_21 = ((void*)0), *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0) ;
    static unsigned long VAR_25 = 0;

    if(FUNC_12(VAR_25 == 0))
        VAR_25 = (unsigned long)FUNC_11(VAR_15);

    if(FUNC_12(!VAR_21)) {
        FUNC_9(VAR_18[VAR_5].filename, VAR_1, "%s%s", VAR_16, "/sys/kernel/mm/ksm/pages_shared");
        FUNC_9(VAR_18[VAR_5].filename, VAR_1, "%s", FUNC_0("plugin:proc:/sys/kernel/mm/ksm", "/sys/kernel/mm/ksm/pages_shared", VAR_18[VAR_5].filename));
        VAR_21 = FUNC_2(VAR_18[VAR_5].filename, " \t:", VAR_11);
    }

    if(FUNC_12(!VAR_22)) {
        FUNC_9(VAR_18[VAR_6].filename, VAR_1, "%s%s", VAR_16, "/sys/kernel/mm/ksm/pages_sharing");
        FUNC_9(VAR_18[VAR_6].filename, VAR_1, "%s", FUNC_0("plugin:proc:/sys/kernel/mm/ksm", "/sys/kernel/mm/ksm/pages_sharing", VAR_18[VAR_6].filename));
        VAR_22 = FUNC_2(VAR_18[VAR_6].filename, " \t:", VAR_11);
    }

    if(FUNC_12(!VAR_23)) {
        FUNC_9(VAR_18[VAR_7].filename, VAR_1, "%s%s", VAR_16, "/sys/kernel/mm/ksm/pages_unshared");
        FUNC_9(VAR_18[VAR_7].filename, VAR_1, "%s", FUNC_0("plugin:proc:/sys/kernel/mm/ksm", "/sys/kernel/mm/ksm/pages_unshared", VAR_18[VAR_7].filename));
        VAR_23 = FUNC_2(VAR_18[VAR_7].filename, " \t:", VAR_11);
    }

    if(FUNC_12(!VAR_24)) {
        FUNC_9(VAR_18[VAR_8].filename, VAR_1, "%s%s", VAR_16, "/sys/kernel/mm/ksm/pages_volatile");
        FUNC_9(VAR_18[VAR_8].filename, VAR_1, "%s", FUNC_0("plugin:proc:/sys/kernel/mm/ksm", "/sys/kernel/mm/ksm/pages_volatile", VAR_18[VAR_8].filename));
        VAR_24 = FUNC_2(VAR_18[VAR_8].filename, " \t:", VAR_11);
    }







    if(FUNC_12(!VAR_21 || !VAR_22 || !VAR_23 || !VAR_24 ))
        return 1;

    unsigned long long VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0, VAR_30 = 0, VAR_31 = 0;

    VAR_21 = FUNC_3(VAR_21);
    if(FUNC_12(!VAR_21)) return 0;
    VAR_26 = FUNC_10(FUNC_1(VAR_21, 0, 0));

    VAR_22 = FUNC_3(VAR_22);
    if(FUNC_12(!VAR_22)) return 0;
    VAR_27 = FUNC_10(FUNC_1(VAR_22, 0, 0));

    VAR_23 = FUNC_3(VAR_23);
    if(FUNC_12(!VAR_23)) return 0;
    VAR_28 = FUNC_10(FUNC_1(VAR_23, 0, 0));

    VAR_24 = FUNC_3(VAR_24);
    if(FUNC_12(!VAR_24)) return 0;
    VAR_29 = FUNC_10(FUNC_1(VAR_24, 0, 0));





    VAR_30 = VAR_27 + VAR_26 + VAR_28 + VAR_29;
    VAR_31 = VAR_27;

    if(FUNC_12(!VAR_30 && VAR_17 == VAR_0)) return 0;



    {
        static RRDSET *VAR_32 = ((void*)0);
        static RRDDIM *VAR_33 = ((void*)0), *VAR_34 = ((void*)0), *VAR_35 = ((void*)0), *VAR_36 = ((void*)0) ;

        if (FUNC_12(!VAR_32)) {
            VAR_32 = FUNC_6(
                    "mem"
                    , "ksm"
                    , ((void*)0)
                    , "ksm"
                    , ((void*)0)
                    , "Kernel Same Page Merging"
                    , "MiB"
                    , VAR_10
                    , VAR_9
                    , VAR_2
                    , VAR_19
                    , VAR_12
            );

            VAR_33 = FUNC_4(VAR_32, "shared", ((void*)0), 1, 1024 * 1024, VAR_14);
            VAR_34 = FUNC_4(VAR_32, "unshared", ((void*)0), -1, 1024 * 1024, VAR_14);
            VAR_35 = FUNC_4(VAR_32, "sharing", ((void*)0), 1, 1024 * 1024, VAR_14);
            VAR_36 = FUNC_4(VAR_32, "volatile", ((void*)0), -1, 1024 * 1024, VAR_14);

        }
        else
            FUNC_8(VAR_32);

        FUNC_5(VAR_32, VAR_33, VAR_26 * VAR_25);
        FUNC_5(VAR_32, VAR_34, VAR_28 * VAR_25);
        FUNC_5(VAR_32, VAR_35, VAR_27 * VAR_25);
        FUNC_5(VAR_32, VAR_36, VAR_29 * VAR_25);


        FUNC_7(VAR_32);
    }



    {
        static RRDSET *VAR_37 = ((void*)0);
        static RRDDIM *VAR_38 = ((void*)0), *VAR_39 = ((void*)0);

        if (FUNC_12(!VAR_37)) {
            VAR_37 = FUNC_6(
                    "mem"
                    , "ksm_savings"
                    , ((void*)0)
                    , "ksm"
                    , ((void*)0)
                    , "Kernel Same Page Merging Savings"
                    , "MiB"
                    , VAR_10
                    , VAR_9
                    , VAR_4
                    , VAR_19
                    , VAR_12
            );

            VAR_38 = FUNC_4(VAR_37, "savings", ((void*)0), -1, 1024 * 1024, VAR_14);
            VAR_39 = FUNC_4(VAR_37, "offered", ((void*)0), 1, 1024 * 1024, VAR_14);
        }
        else
            FUNC_8(VAR_37);

        FUNC_5(VAR_37, VAR_38, VAR_31 * VAR_25);
        FUNC_5(VAR_37, VAR_39, VAR_30 * VAR_25);

        FUNC_7(VAR_37);
    }



    {
        static RRDSET *VAR_40 = ((void*)0);
        static RRDDIM *VAR_41 = ((void*)0);

        if (FUNC_12(!VAR_40)) {
            VAR_40 = FUNC_6(
                    "mem"
                    , "ksm_ratios"
                    , ((void*)0)
                    , "ksm"
                    , ((void*)0)
                    , "Kernel Same Page Merging Effectiveness"
                    , "percentage"
                    , VAR_10
                    , VAR_9
                    , VAR_3
                    , VAR_19
                    , VAR_13
            );

            VAR_41 = FUNC_4(VAR_40, "savings", ((void*)0), 1, 10000, VAR_14);
        }
        else
            FUNC_8(VAR_40);

        FUNC_5(VAR_40, VAR_41, VAR_30 ? (VAR_31 * 1000000) / VAR_30 : 0);

        FUNC_7(VAR_40);
    }

    return 0;
}
