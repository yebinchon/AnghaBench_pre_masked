
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_intrans; int v_cow_optim; int v_cow_faults; int v_io_faults; int v_vm_faults; } ;
typedef TYPE_1__ vmmeter_t ;
typedef int usec_t ;
typedef int RRDSET ;
typedef int RRDDIM ;


 scalar_t__ FUNC_0 (char*,int*,int ) ;
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
    static int VAR_6[4] = {0, 0, 0, 0}, VAR_7[4] = {0, 0, 0, 0}, VAR_8[4] = {0, 0, 0, 0},
               VAR_9[4] = {0, 0, 0, 0}, VAR_10[4] = {0, 0, 0, 0};
    vmmeter_t VAR_11;

    if (FUNC_8(FUNC_0("vm.stats.vm.v_vm_faults", VAR_6, VAR_11.v_vm_faults) ||
                 FUNC_0("vm.stats.vm.v_io_faults", VAR_7, VAR_11.v_io_faults) ||
                 FUNC_0("vm.stats.vm.v_cow_faults", VAR_8, VAR_11.v_cow_faults) ||
                 FUNC_0("vm.stats.vm.v_cow_optim", VAR_9, VAR_11.v_cow_optim) ||
                 FUNC_0("vm.stats.vm.v_intrans", VAR_10, VAR_11.v_intrans))) {
        FUNC_1("DISABLED: mem.pgfaults chart");
        FUNC_1("DISABLED: vm.stats.vm.v_pgfaults module");
        return 1;
    } else {



        static RRDSET *VAR_12 = ((void*)0);
        static RRDDIM *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0),
                      *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);

        if (FUNC_8(!VAR_12)) {
            VAR_12 = FUNC_4(
                    "mem",
                    "pgfaults",
                    ((void*)0),
                    "system",
                    ((void*)0),
                    "Memory Page Faults",
                    "page faults/s",
                    "freebsd.plugin",
                    "vm.stats.vm.v_pgfaults",
                    VAR_0,
                    VAR_4,
                    VAR_2
            );

            FUNC_6(VAR_12, VAR_1);

            VAR_13 = FUNC_2(VAR_12, "memory", ((void*)0), 1, 1, VAR_3);
            VAR_14 = FUNC_2(VAR_12, "io_requiring", ((void*)0), 1, 1, VAR_3);
            VAR_15 = FUNC_2(VAR_12, "cow", ((void*)0), 1, 1, VAR_3);
            VAR_16 = FUNC_2(VAR_12, "cow_optimized", ((void*)0), 1, 1, VAR_3);
            VAR_17 = FUNC_2(VAR_12, "in_transit", ((void*)0), 1, 1, VAR_3);
        }
        else FUNC_7(VAR_12);

        FUNC_3(VAR_12, VAR_13, VAR_11.v_vm_faults);
        FUNC_3(VAR_12, VAR_14, VAR_11.v_io_faults);
        FUNC_3(VAR_12, VAR_15, VAR_11.v_cow_faults);
        FUNC_3(VAR_12, VAR_16, VAR_11.v_cow_optim);
        FUNC_3(VAR_12, VAR_17, VAR_11.v_intrans);
        FUNC_5(VAR_12);
    }

    return 0;
}
