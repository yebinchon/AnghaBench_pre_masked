
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_swappgsout; int v_swappgsin; } ;
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
 int * FUNC_2 (int *,char*,int *,int ,int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(int VAR_5, usec_t VAR_6) {
    (void)VAR_6;
    static int VAR_7[4] = {0, 0, 0, 0}, VAR_8[4] = {0, 0, 0, 0};
    vmmeter_t VAR_9;

    if (FUNC_7(FUNC_0("vm.stats.vm.v_swappgsin", VAR_7, VAR_9.v_swappgsin) ||
                 FUNC_0("vm.stats.vm.v_swappgsout", VAR_8, VAR_9.v_swappgsout))) {
        FUNC_1("DISABLED: system.swapio chart");
        FUNC_1("DISABLED: vm.stats.vm.v_swappgs module");
        return 1;
    } else {



        static RRDSET *VAR_10 = ((void*)0);
        static RRDDIM *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

        if (FUNC_7(!VAR_10)) {
            VAR_10 = FUNC_4(
                    "system",
                    "swapio",
                    ((void*)0),
                    "swap",
                    ((void*)0),
                    "Swap I/O",
                    "KiB/s",
                    "freebsd.plugin",
                    "vm.stats.vm.v_swappgs",
                    VAR_1,
                    VAR_5,
                    VAR_2
            );

            VAR_11 = FUNC_2(VAR_10, "in", ((void*)0), VAR_4, VAR_0, VAR_3);
            VAR_12 = FUNC_2(VAR_10, "out", ((void*)0), -VAR_4, VAR_0, VAR_3);
        }
        else FUNC_6(VAR_10);

        FUNC_3(VAR_10, VAR_11, VAR_9.v_swappgsin);
        FUNC_3(VAR_10, VAR_12, VAR_9.v_swappgsout);
        FUNC_5(VAR_10);
    }

    return 0;
}
