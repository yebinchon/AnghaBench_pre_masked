
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct vmtotal {scalar_t__ t_rm; scalar_t__ t_pw; scalar_t__ t_dw; scalar_t__ t_rq; scalar_t__ t_sw; scalar_t__ t_sl; } ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,struct vmtotal) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int *,char*,int *,int,int,int ) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int * FUNC_6 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(int VAR_9, usec_t VAR_10) {
    (void)VAR_10;
    static int VAR_11 = -1, VAR_12 = -1, VAR_13 = -1;

    if (FUNC_10(VAR_11 == -1)) {
        VAR_11 = FUNC_1("plugin:freebsd:vm.vmtotal", "enable total processes", 1);
        VAR_12 = FUNC_1("plugin:freebsd:vm.vmtotal", "processes running", 1);
        VAR_13 = FUNC_1("plugin:freebsd:vm.vmtotal", "committed memory", 1);
    }

    if (FUNC_3(VAR_11 | VAR_12 | VAR_13)) {
        static int VAR_14[2] = {0, 0};
        struct vmtotal VAR_15;

        if (FUNC_10(FUNC_0("vm.vmtotal", VAR_14, VAR_15))) {
            VAR_11 = 0;
            FUNC_2("DISABLED: system.active_processes chart");
            VAR_12 = 0;
            FUNC_2("DISABLED: system.processes chart");
            VAR_13 = 0;
            FUNC_2("DISABLED: mem.committed chart");
            FUNC_2("DISABLED: vm.vmtotal module");
            return 1;
        } else {



            if (FUNC_3(VAR_11)) {
                static RRDSET *VAR_16 = ((void*)0);
                static RRDDIM *VAR_17 = ((void*)0);

                if (FUNC_10(!VAR_16)) {
                    VAR_16 = FUNC_6(
                            "system",
                            "active_processes",
                            ((void*)0),
                            "processes",
                            ((void*)0),
                            "System Active Processes",
                            "processes",
                            "freebsd.plugin",
                            "vm.vmtotal",
                            VAR_2,
                            VAR_9,
                            VAR_6
                    );
                    VAR_17 = FUNC_4(VAR_16, "active", ((void*)0), 1, 1, VAR_7);
                }
                else FUNC_9(VAR_16);

                FUNC_5(VAR_16, VAR_17, (VAR_15.t_rq + VAR_15.t_dw + VAR_15.t_pw + VAR_15.t_sl + VAR_15.t_sw));
                FUNC_7(VAR_16);
            }



            if (FUNC_3(VAR_12)) {
                static RRDSET *VAR_18 = ((void*)0);
                static RRDDIM *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);

                if (FUNC_10(!VAR_18)) {
                    VAR_18 = FUNC_6(
                            "system",
                            "processes",
                            ((void*)0),
                            "processes",
                            ((void*)0),
                            "System Processes",
                            "processes",
                            "freebsd.plugin",
                            "vm.vmtotal",
                            VAR_3,
                            VAR_9,
                            VAR_6
                    );

                    VAR_19 = FUNC_4(VAR_18, "running", ((void*)0), 1, 1, VAR_7);
                    VAR_20 = FUNC_4(VAR_18, "blocked", ((void*)0), -1, 1, VAR_7);
                }
                else FUNC_9(VAR_18);

                FUNC_5(VAR_18, VAR_19, VAR_15.t_rq);
                FUNC_5(VAR_18, VAR_20, (VAR_15.t_dw + VAR_15.t_pw));
                FUNC_7(VAR_18);
            }



            if (FUNC_3(VAR_13)) {
                static RRDSET *VAR_21 = ((void*)0);
                static RRDDIM *VAR_22 = ((void*)0);

                if (FUNC_10(!VAR_21)) {
                    VAR_21 = FUNC_6(
                            "mem",
                            "committed",
                            ((void*)0),
                            "system",
                            ((void*)0),
                            "Committed (Allocated) Memory",
                            "MiB",
                            "freebsd.plugin",
                            "vm.vmtotal",
                            VAR_1,
                            VAR_9,
                            VAR_5
                    );
                    FUNC_8(VAR_21, VAR_4);

                    VAR_22 = FUNC_4(VAR_21, "Committed_AS", ((void*)0), VAR_8, VAR_0, VAR_7);
                }
                else FUNC_9(VAR_21);

                FUNC_5(VAR_21, VAR_22, VAR_15.t_rm);
                FUNC_7(VAR_21);
            }
        }
    } else {
        FUNC_2("DISABLED: vm.vmtotal module");
        return 1;
    }

    return 0;
}
