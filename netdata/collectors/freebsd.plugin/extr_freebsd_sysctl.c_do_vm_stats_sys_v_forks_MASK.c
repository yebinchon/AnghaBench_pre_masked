
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int u_int ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,int *,int,int,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(int VAR_4, usec_t VAR_5) {
    (void)VAR_5;
    static int VAR_6[4] = {0, 0, 0, 0};
    u_int VAR_7;

    if (FUNC_8(FUNC_0("vm.stats.vm.v_forks", VAR_6, VAR_7))) {
        FUNC_1("DISABLED: system.forks chart");
        FUNC_1("DISABLED: vm.stats.sys.v_swtch module");
        return 1;
    } else {



        static RRDSET *VAR_8 = ((void*)0);
        static RRDDIM *VAR_9 = ((void*)0);

        if (FUNC_8(!VAR_8)) {
            VAR_8 = FUNC_4(
                    "system",
                    "forks",
                    ((void*)0),
                    "processes",
                    ((void*)0),
                    "Started Processes",
                    "processes/s",
                    "freebsd.plugin",
                    "vm.stats.sys.v_swtch",
                    VAR_0,
                    VAR_4,
                    VAR_2
            );

            FUNC_6(VAR_8, VAR_1);

            VAR_9 = FUNC_2(VAR_8, "started", ((void*)0), 1, 1, VAR_3);
        }
        else FUNC_7(VAR_8);

        FUNC_3(VAR_8, VAR_9, VAR_7);
        FUNC_5(VAR_8);
    }

    return 0;
}
