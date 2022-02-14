
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
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,int *,int,int,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(int VAR_3, usec_t VAR_4) {
    (void)VAR_4;
    static int VAR_5[4] = {0, 0, 0, 0};
    u_int VAR_6;

    if (FUNC_7(FUNC_0("vm.stats.sys.v_swtch", VAR_5, VAR_6))) {
        FUNC_1("DISABLED: system.ctxt chart");
        FUNC_1("DISABLED: vm.stats.sys.v_swtch module");
        return 1;
    } else {



        static RRDSET *VAR_7 = ((void*)0);
        static RRDDIM *VAR_8 = ((void*)0);

        if (FUNC_7(!VAR_7)) {
            VAR_7 = FUNC_4(
                    "system",
                    "ctxt",
                    ((void*)0),
                    "processes",
                    ((void*)0),
                    "CPU Context Switches",
                    "context switches/s",
                    "freebsd.plugin",
                    "vm.stats.sys.v_swtch",
                    VAR_0,
                    VAR_3,
                    VAR_1
            );

            VAR_8 = FUNC_2(VAR_7, "switches", ((void*)0), 1, 1, VAR_2);
        }
        else FUNC_6(VAR_7);

        FUNC_3(VAR_7, VAR_8, VAR_6);
        FUNC_5(VAR_7);
    }

    return 0;
}
