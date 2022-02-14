
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_active_count; int v_inactive_count; int v_wire_count; int v_cache_count; int v_laundry_count; int v_free_count; } ;
typedef TYPE_1__ vmmeter_t ;
typedef int usec_t ;
typedef int RRDSET ;
typedef int RRDDIM ;


 scalar_t__ FUNC_0 (char*,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,int *,int,int ,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int * FUNC_4 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(int VAR_5, usec_t VAR_6) {
    (void)VAR_6;
    static int VAR_7[4] = {0, 0, 0, 0}, VAR_8[4] = {0, 0, 0, 0}, VAR_9[4] = {0, 0, 0, 0},
               VAR_10[4] = {0, 0, 0, 0}, VAR_11[2] = {0, 0}, VAR_12[4] = {0, 0, 0, 0};
    vmmeter_t VAR_13;
    int VAR_14;





    if (FUNC_7(FUNC_0("vm.stats.vm.v_active_count", VAR_7, VAR_13.v_active_count) ||
                 FUNC_0("vm.stats.vm.v_inactive_count", VAR_8, VAR_13.v_inactive_count) ||
                 FUNC_0("vm.stats.vm.v_wire_count", VAR_9, VAR_13.v_wire_count) ||

                 FUNC_0("vm.stats.vm.v_cache_count", VAR_10, VAR_13.v_cache_count) ||




                 FUNC_0("vfs.bufspace", VAR_11, VAR_14) ||
                 FUNC_0("vm.stats.vm.v_free_count", VAR_12, VAR_13.v_free_count))) {
        FUNC_1("DISABLED: system.ram chart");
        FUNC_1("DISABLED: system.ram module");
        return 1;
    } else {



        static RRDSET *VAR_15 = ((void*)0);
        static RRDDIM *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0),
                      *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);





        if (FUNC_7(!VAR_15)) {
            VAR_15 = FUNC_4(
                    "system",
                    "ram",
                    ((void*)0),
                    "ram",
                    ((void*)0),
                    "System RAM",
                    "MiB",
                    "freebsd.plugin",
                    "system.ram",
                    VAR_1,
                    VAR_5,
                    VAR_2
            );

            VAR_16 = FUNC_2(VAR_15, "free", ((void*)0), VAR_4, VAR_0, VAR_3);
            VAR_17 = FUNC_2(VAR_15, "active", ((void*)0), VAR_4, VAR_0, VAR_3);
            VAR_18 = FUNC_2(VAR_15, "inactive", ((void*)0), VAR_4, VAR_0, VAR_3);
            VAR_19 = FUNC_2(VAR_15, "wired", ((void*)0), VAR_4, VAR_0, VAR_3);

            VAR_20 = FUNC_2(VAR_15, "cache", ((void*)0), VAR_4, VAR_0, VAR_3);




            VAR_21 = FUNC_2(VAR_15, "buffers", ((void*)0), 1, VAR_0, VAR_3);
        }
        else FUNC_6(VAR_15);

        FUNC_3(VAR_15, VAR_16, VAR_13.v_free_count);
        FUNC_3(VAR_15, VAR_17, VAR_13.v_active_count);
        FUNC_3(VAR_15, VAR_18, VAR_13.v_inactive_count);
        FUNC_3(VAR_15, VAR_19, VAR_13.v_wire_count);

        FUNC_3(VAR_15, VAR_20, VAR_13.v_cache_count);




        FUNC_3(VAR_15, VAR_21, VAR_14);
        FUNC_5(VAR_15);
    }

    return 0;
}
