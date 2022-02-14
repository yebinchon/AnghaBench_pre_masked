
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ purges; scalar_t__ reactivations; scalar_t__ zero_fill_count; scalar_t__ decompressions; scalar_t__ compressions; scalar_t__ pageouts; scalar_t__ pageins; scalar_t__ cow_faults; scalar_t__ faults; scalar_t__ swapouts; scalar_t__ swapins; scalar_t__ speculative_count; scalar_t__ free_count; scalar_t__ purgeable_count; scalar_t__ inactive_count; scalar_t__ compressor_page_count; scalar_t__ throttled_count; scalar_t__ wire_count; scalar_t__ active_count; } ;
typedef TYPE_1__ vm_statistics_data_t ;
typedef int vm_statistics64_data_t ;
typedef int vm_size_t ;
typedef int usec_t ;
typedef scalar_t__ natural_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef int host_t ;
typedef int host_info_t ;
typedef int host_info64_t ;
typedef int RRDSET ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,char*,int *,int,int,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,scalar_t__) ;
 int * FUNC_11 (char*,char*,int *,char*,char*,char*,char*,char*,char*,int,int,int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (char*,char*) ;
 int * FUNC_14 (char*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;

int FUNC_18(int VAR_18, usec_t VAR_19) {
    (void)VAR_19;

    static int VAR_20 = -1, VAR_21 = - 1, VAR_22 = -1, VAR_23 = -1;

    if (FUNC_17(VAR_20 == -1)) {
        VAR_20 = FUNC_0("plugin:macos:mach_smi", "cpu utilization", 1);
        VAR_21 = FUNC_0("plugin:macos:mach_smi", "system ram", 1);
        VAR_22 = FUNC_0("plugin:macos:mach_smi", "swap i/o", 1);
        VAR_23 = FUNC_0("plugin:macos:mach_smi", "memory page faults", 1);
    }

    RRDSET *VAR_24;

 kern_return_t VAR_25;
 mach_msg_type_number_t VAR_26;
    host_t VAR_27;
    vm_size_t VAR_28;



    natural_t VAR_29[VAR_1];





    vm_statistics_data_t VAR_30;


    VAR_27 = FUNC_7();
    VAR_25 = FUNC_2(VAR_27, &VAR_28);
    if (FUNC_17(VAR_25 != VAR_9))
        return -1;



    if (FUNC_5(VAR_20)) {
        if (FUNC_17(VAR_6 != 4)) {
            FUNC_1("MACOS: There are %d CPU states (4 was expected)", VAR_6);
            VAR_20 = 0;
            FUNC_1("DISABLED: system.cpu");
        } else {
            VAR_26 = VAR_6;
            VAR_25 = FUNC_3(VAR_27, VAR_5, (host_info_t)VAR_29, &VAR_26);
            if (FUNC_17(VAR_25 != VAR_9)) {
                FUNC_1("MACOS: host_statistics() failed: %s", FUNC_6(VAR_25));
                VAR_20 = 0;
                FUNC_1("DISABLED: system.cpu");
            } else {

                VAR_24 = FUNC_13("system", "cpu");
                if (FUNC_17(!VAR_24)) {
                    VAR_24 = FUNC_11(
                            "system"
                            , "cpu"
                            , ((void*)0)
                            , "cpu"
                            , "system.cpu"
                            , "Total CPU utilization"
                            , "percentage"
                            , "macos"
                            , "mach_smi"
                            , 100
                            , VAR_18
                            , VAR_14
                    );

                    FUNC_8(VAR_24, "user", ((void*)0), 1, 1, VAR_17);
                    FUNC_8(VAR_24, "nice", ((void*)0), 1, 1, VAR_17);
                    FUNC_8(VAR_24, "system", ((void*)0), 1, 1, VAR_17);
                    FUNC_8(VAR_24, "idle", ((void*)0), 1, 1, VAR_17);
                    FUNC_9(VAR_24, "idle");
                }
                else FUNC_16(VAR_24);

                FUNC_10(VAR_24, "user", VAR_29[VAR_4]);
                FUNC_10(VAR_24, "nice", VAR_29[VAR_2]);
                FUNC_10(VAR_24, "system", VAR_29[VAR_3]);
                FUNC_10(VAR_24, "idle", VAR_29[VAR_0]);
                FUNC_12(VAR_24);
            }
        }
     }



    if (FUNC_5(VAR_21 || VAR_22 || VAR_23)) {




        VAR_26 = sizeof(vm_statistics_data_t);
        VAR_25 = FUNC_3(VAR_27, VAR_7, (host_info_t)&VAR_30, &VAR_26);

        if (FUNC_17(VAR_25 != VAR_9)) {
            FUNC_1("MACOS: host_statistics64() failed: %s", FUNC_6(VAR_25));
            VAR_21 = 0;
            FUNC_1("DISABLED: system.ram");
            VAR_22 = 0;
            FUNC_1("DISABLED: system.swapio");
            VAR_23 = 0;
            FUNC_1("DISABLED: mem.pgfaults");
        } else {
            if (FUNC_5(VAR_21)) {
                VAR_24 = FUNC_14("system.ram");
                if (FUNC_17(!VAR_24)) {
                    VAR_24 = FUNC_11(
                            "system"
                            , "ram"
                            , ((void*)0)
                            , "ram"
                            , ((void*)0)
                            , "System RAM"
                            , "MiB"
                            , "macos"
                            , "mach_smi"
                            , 200
                            , VAR_18
                            , VAR_14
                    );

                    FUNC_8(VAR_24, "active", ((void*)0), VAR_28, 1048576, VAR_15);
                    FUNC_8(VAR_24, "wired", ((void*)0), VAR_28, 1048576, VAR_15);




                    FUNC_8(VAR_24, "inactive", ((void*)0), VAR_28, 1048576, VAR_15);
                    FUNC_8(VAR_24, "purgeable", ((void*)0), VAR_28, 1048576, VAR_15);
                    FUNC_8(VAR_24, "speculative", ((void*)0), VAR_28, 1048576, VAR_15);
                    FUNC_8(VAR_24, "free", ((void*)0), VAR_28, 1048576, VAR_15);
                }
                else FUNC_16(VAR_24);

                FUNC_10(VAR_24, "active", VAR_30.active_count);
                FUNC_10(VAR_24, "wired", VAR_30.wire_count);




                FUNC_10(VAR_24, "inactive", VAR_30.inactive_count);
                FUNC_10(VAR_24, "purgeable", VAR_30.purgeable_count);
                FUNC_10(VAR_24, "speculative", VAR_30.speculative_count);
                FUNC_10(VAR_24, "free", (VAR_30.free_count - VAR_30.speculative_count));
                FUNC_12(VAR_24);
            }
            if (FUNC_5(VAR_23)) {
                VAR_24 = FUNC_14("mem.pgfaults");
                if (FUNC_17(!VAR_24)) {
                    VAR_24 = FUNC_11(
                            "mem"
                            , "pgfaults"
                            , ((void*)0)
                            , "system"
                            , ((void*)0)
                            , "Memory Page Faults"
                            , "faults/s"
                            , "macos"
                            , "mach_smi"
                            , VAR_10
                            , VAR_18
                            , VAR_13
                    );
                    FUNC_15(VAR_24, VAR_11);

                    FUNC_8(VAR_24, "memory", ((void*)0), 1, 1, VAR_16);
                    FUNC_8(VAR_24, "cow", ((void*)0), 1, 1, VAR_16);
                    FUNC_8(VAR_24, "pagein", ((void*)0), 1, 1, VAR_16);
                    FUNC_8(VAR_24, "pageout", ((void*)0), 1, 1, VAR_16);




                    FUNC_8(VAR_24, "zero_fill", ((void*)0), 1, 1, VAR_16);
                    FUNC_8(VAR_24, "reactivate", ((void*)0), 1, 1, VAR_16);
                    FUNC_8(VAR_24, "purge", ((void*)0), 1, 1, VAR_16);
                }
                else FUNC_16(VAR_24);

                FUNC_10(VAR_24, "memory", VAR_30.faults);
                FUNC_10(VAR_24, "cow", VAR_30.cow_faults);
                FUNC_10(VAR_24, "pagein", VAR_30.pageins);
                FUNC_10(VAR_24, "pageout", VAR_30.pageouts);




                FUNC_10(VAR_24, "zero_fill", VAR_30.zero_fill_count);
                FUNC_10(VAR_24, "reactivate", VAR_30.reactivations);
                FUNC_10(VAR_24, "purge", VAR_30.purges);
                FUNC_12(VAR_24);
            }
        }
    }



    return 0;
}
