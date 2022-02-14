
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int VAR_0 ;
 int FUNC_0 (char*,int*,long*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int * FUNC_2 (int *,char*,int *,int,int,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *,long) ;
 int * FUNC_5 (char*,char*,int *,char*,char*,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(int VAR_4, usec_t VAR_5) {
    (void)VAR_5;

    if (FUNC_8(VAR_0 != 5)) {
        FUNC_1("FREEBSD: There are %d CPU states (5 was expected)", VAR_0);
        FUNC_1("DISABLED: system.cpu chart");
        FUNC_1("DISABLED: kern.cp_time module");
        return 1;
    } else {
        static int VAR_6[2] = {0, 0};
        long VAR_7[VAR_0];

        if (FUNC_8(FUNC_0("kern.cp_time", VAR_6, VAR_7))) {
            FUNC_1("DISABLED: system.cpu chart");
            FUNC_1("DISABLED: kern.cp_time module");
            return 1;
        } else {



            static RRDSET *VAR_8 = ((void*)0);
            static RRDDIM *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);

            if (FUNC_8(!VAR_8)) {
                VAR_8 = FUNC_5(
                        "system",
                        "cpu",
                        ((void*)0),
                        "cpu",
                        "system.cpu",
                        "Total CPU utilization",
                        "percentage",
                        "freebsd.plugin",
                        "kern.cp_time",
                        VAR_1,
                        VAR_4,
                        VAR_2
                );

                VAR_9 = FUNC_2(VAR_8, "nice", ((void*)0), 1, 1, VAR_3);
                VAR_10 = FUNC_2(VAR_8, "system", ((void*)0), 1, 1, VAR_3);
                VAR_11 = FUNC_2(VAR_8, "user", ((void*)0), 1, 1, VAR_3);
                VAR_12 = FUNC_2(VAR_8, "interrupt", ((void*)0), 1, 1, VAR_3);
                VAR_13 = FUNC_2(VAR_8, "idle", ((void*)0), 1, 1, VAR_3);
                FUNC_3(VAR_8, "idle");
            }
            else FUNC_7(VAR_8);

            FUNC_4(VAR_8, VAR_9, VAR_7[1]);
            FUNC_4(VAR_8, VAR_10, VAR_7[2]);
            FUNC_4(VAR_8, VAR_11, VAR_7[0]);
            FUNC_4(VAR_8, VAR_12, VAR_7[3]);
            FUNC_4(VAR_8, VAR_13, VAR_7[4]);
            FUNC_6(VAR_8);
        }
    }

    return 0;
}
