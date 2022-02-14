
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int usec_t ;
typedef int procfile ;
struct TYPE_3__ {int flags; } ;
typedef int RRDSET ;
typedef int RRDDIM ;
typedef TYPE_1__ ARL_ENTRY ;
typedef int ARL_BASE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (char*,int *,int) ;
 TYPE_1__* FUNC_3 (int *,char*,unsigned long long*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *,size_t,int) ;
 size_t FUNC_9 (int *,size_t) ;
 int * FUNC_10 (int ,char*,int ) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 (int *,char*,char*,int,int,int ) ;
 int FUNC_13 (int *,int *,unsigned long long) ;
 int * FUNC_14 (char*,char*,int *,char*,int *,char*,char*,int ,int ,scalar_t__,int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,int ,char*,int ,char*) ;
 scalar_t__ FUNC_19 (int) ;

int FUNC_20(int VAR_23, usec_t VAR_24) {
    (void)VAR_24;

    static procfile *VAR_25 = ((void*)0);
    static int VAR_26 = -1, VAR_27 = -1, VAR_28 = -1, VAR_29 = -1, VAR_30 = -1, VAR_31 = -1, VAR_32 = -1, VAR_33 = -1, VAR_34 = -1;

    static ARL_BASE *VAR_35 = ((void*)0);
    static ARL_ENTRY *VAR_36 = ((void*)0), *VAR_37 = ((void*)0);

    static unsigned long long
            VAR_38 = 0,
            VAR_39 = 0,
            VAR_40 = 0,
            VAR_41 = 0,
            VAR_42 = 0,
            VAR_43 = 0,
            VAR_44 = 0,
            VAR_45 = 0,
            VAR_46 = 0,



            VAR_47 = 0,
            VAR_48 = 0,
            VAR_49 = 0,
            VAR_50 = 0,
            VAR_51 = 0,
            VAR_52 = 0,
            VAR_53 = 0,
            VAR_54 = 0,

            VAR_55 = 0,

            VAR_56 = 0,

            VAR_57 = 0,
            VAR_58 = 0,
            VAR_59 = 0,
            VAR_60 = 0,
            VAR_61 = 0,
            VAR_62 = 0,
            VAR_63 = 0,


            VAR_64 = 0;

    if(FUNC_19(!VAR_35)) {
        VAR_26 = FUNC_5(VAR_3, "system ram", 1);
        VAR_27 = FUNC_6(VAR_3, "system swap", VAR_1);
        VAR_28 = FUNC_6(VAR_3, "hardware corrupted ECC", VAR_1);
        VAR_29 = FUNC_5(VAR_3, "committed memory", 1);
        VAR_30 = FUNC_5(VAR_3, "writeback memory", 1);
        VAR_31 = FUNC_5(VAR_3, "kernel memory", 1);
        VAR_32 = FUNC_5(VAR_3, "slab memory", 1);
        VAR_33 = FUNC_6(VAR_3, "hugepages", VAR_1);
        VAR_34 = FUNC_6(VAR_3, "transparent hugepages", VAR_1);

        VAR_35 = FUNC_2("meminfo", ((void*)0), 60);
        FUNC_3(VAR_35, "MemTotal", &VAR_38);
        FUNC_3(VAR_35, "MemFree", &VAR_39);
        VAR_37 = FUNC_3(VAR_35, "MemAvailable", &VAR_40);
        FUNC_3(VAR_35, "Buffers", &VAR_41);
        FUNC_3(VAR_35, "Cached", &VAR_42);
        FUNC_3(VAR_35, "SwapTotal", &VAR_43);
        FUNC_3(VAR_35, "SwapFree", &VAR_44);
        FUNC_3(VAR_35, "Dirty", &VAR_45);
        FUNC_3(VAR_35, "Writeback", &VAR_46);



        FUNC_3(VAR_35, "Slab", &VAR_47);
        FUNC_3(VAR_35, "SReclaimable", &VAR_48);
        FUNC_3(VAR_35, "SUnreclaim", &VAR_49);
        FUNC_3(VAR_35, "KernelStack", &VAR_50);
        FUNC_3(VAR_35, "PageTables", &VAR_51);
        FUNC_3(VAR_35, "NFS_Unstable", &VAR_52);
        FUNC_3(VAR_35, "Bounce", &VAR_53);
        FUNC_3(VAR_35, "WritebackTmp", &VAR_54);

        FUNC_3(VAR_35, "Committed_AS", &VAR_55);

        FUNC_3(VAR_35, "VmallocUsed", &VAR_56);

        VAR_36 = FUNC_3(VAR_35, "HardwareCorrupted", &VAR_64);
        FUNC_3(VAR_35, "AnonHugePages", &VAR_57);
        FUNC_3(VAR_35, "ShmemHugePages", &VAR_58);
        FUNC_3(VAR_35, "HugePages_Total", &VAR_59);
        FUNC_3(VAR_35, "HugePages_Free", &VAR_60);
        FUNC_3(VAR_35, "HugePages_Rsvd", &VAR_61);
        FUNC_3(VAR_35, "HugePages_Surp", &VAR_62);
        FUNC_3(VAR_35, "Hugepagesize", &VAR_63);


    }

    if(FUNC_19(!VAR_25)) {
        char VAR_65[VAR_4 + 1];
        FUNC_18(VAR_65, VAR_4, "%s%s", VAR_21, "/proc/meminfo");
        VAR_25 = FUNC_10(FUNC_4(VAR_3, "filename to monitor", VAR_65), " \t:", VAR_15);
        if(FUNC_19(!VAR_25))
            return 1;
    }

    VAR_25 = FUNC_11(VAR_25);
    if(FUNC_19(!VAR_25))
        return 0;

    size_t VAR_66 = FUNC_7(VAR_25), VAR_67;

    FUNC_0(VAR_35);

    for(VAR_67 = 0; VAR_67 < VAR_66 ;VAR_67++) {
        size_t VAR_68 = FUNC_9(VAR_25, VAR_67);
        if(FUNC_19(VAR_68 < 2)) continue;

        if(FUNC_19(FUNC_1(VAR_35,
                FUNC_8(VAR_25, VAR_67, 0),
                FUNC_8(VAR_25, VAR_67, 1)))) break;
    }




    unsigned long long VAR_69 = VAR_42 + VAR_48;
    unsigned long long VAR_70 = VAR_38 - VAR_39 - VAR_69 - VAR_41;

    if(VAR_26) {
        {
            static RRDSET *VAR_71 = ((void*)0);
            static RRDDIM *VAR_72 = ((void*)0), *VAR_73 = ((void*)0), *VAR_74 = ((void*)0), *VAR_75 = ((void*)0);

            if(FUNC_19(!VAR_71)) {
                VAR_71 = FUNC_14(
                        "system"
                        , "ram"
                        , ((void*)0)
                        , "ram"
                        , ((void*)0)
                        , "System RAM"
                        , "MiB"
                        , VAR_14
                        , VAR_13
                        , VAR_11
                        , VAR_23
                        , VAR_19
                );

                VAR_72 = FUNC_12(VAR_71, "free", ((void*)0), 1, 1024, VAR_20);
                VAR_73 = FUNC_12(VAR_71, "used", ((void*)0), 1, 1024, VAR_20);
                VAR_74 = FUNC_12(VAR_71, "cached", ((void*)0), 1, 1024, VAR_20);
                VAR_75 = FUNC_12(VAR_71, "buffers", ((void*)0), 1, 1024, VAR_20);
            }
            else FUNC_17(VAR_71);

            FUNC_13(VAR_71, VAR_72, VAR_39);
            FUNC_13(VAR_71, VAR_73, VAR_70);
            FUNC_13(VAR_71, VAR_74, VAR_69);
            FUNC_13(VAR_71, VAR_75, VAR_41);

            FUNC_15(VAR_71);
        }

        if(VAR_37->flags & VAR_0) {
            static RRDSET *VAR_76 = ((void*)0);
            static RRDDIM *VAR_77 = ((void*)0);

            if(FUNC_19(!VAR_76)) {
                VAR_76 = FUNC_14(
                        "mem"
                        , "available"
                        , ((void*)0)
                        , "system"
                        , ((void*)0)
                        , "Available RAM for applications"
                        , "MiB"
                        , VAR_14
                        , VAR_13
                        , VAR_9
                        , VAR_23
                        , VAR_17
                );

                VAR_77 = FUNC_12(VAR_76, "MemAvailable", "avail", 1, 1024, VAR_20);
            }
            else FUNC_17(VAR_76);

            FUNC_13(VAR_76, VAR_77, VAR_40);

            FUNC_15(VAR_76);
        }
    }



    unsigned long long VAR_78 = VAR_43 - VAR_44;

    if(VAR_27 == VAR_2 || (VAR_27 == VAR_1 &&
                                         (VAR_43 || VAR_78 || VAR_44 ||
                                          VAR_22 == VAR_2))) {
        VAR_27 = VAR_2;

        static RRDSET *VAR_79 = ((void*)0);
        static RRDDIM *VAR_80 = ((void*)0), *VAR_81 = ((void*)0);

        if(FUNC_19(!VAR_79)) {
            VAR_79 = FUNC_14(
                    "system"
                    , "swap"
                    , ((void*)0)
                    , "swap"
                    , ((void*)0)
                    , "System Swap"
                    , "MiB"
                    , VAR_14
                    , VAR_13
                    , VAR_12
                    , VAR_23
                    , VAR_19
            );

            FUNC_16(VAR_79, VAR_16);

            VAR_80 = FUNC_12(VAR_79, "free", ((void*)0), 1, 1024, VAR_20);
            VAR_81 = FUNC_12(VAR_79, "used", ((void*)0), 1, 1024, VAR_20);
        }
        else FUNC_17(VAR_79);

        FUNC_13(VAR_79, VAR_81, VAR_78);
        FUNC_13(VAR_79, VAR_80, VAR_44);

        FUNC_15(VAR_79);
    }



    if(VAR_36->flags & VAR_0 &&
       (VAR_28 == VAR_2 || (VAR_28 == VAR_1 &&
                                               (VAR_64 > 0 ||
                                                VAR_22 == VAR_2)))) {
        VAR_28 = VAR_2;

        static RRDSET *VAR_82 = ((void*)0);
        static RRDDIM *VAR_83 = ((void*)0);

        if(FUNC_19(!VAR_82)) {
            VAR_82 = FUNC_14(
                    "mem"
                    , "hwcorrupt"
                    , ((void*)0)
                    , "ecc"
                    , ((void*)0)
                    , "Corrupted Memory, detected by ECC"
                    , "MiB"
                    , VAR_14
                    , VAR_13
                    , VAR_6
                    , VAR_23
                    , VAR_18
            );

            FUNC_16(VAR_82, VAR_16);

            VAR_83 = FUNC_12(VAR_82, "HardwareCorrupted", ((void*)0), 1, 1024, VAR_20);
        }
        else FUNC_17(VAR_82);

        FUNC_13(VAR_82, VAR_83, VAR_64);

        FUNC_15(VAR_82);
    }



    if(VAR_29) {
        static RRDSET *VAR_84 = ((void*)0);
        static RRDDIM *VAR_85 = ((void*)0);

        if(FUNC_19(!VAR_84)) {
            VAR_84 = FUNC_14(
                    "mem"
                    , "committed"
                    , ((void*)0)
                    , "system"
                    , ((void*)0)
                    , "Committed (Allocated) Memory"
                    , "MiB"
                    , VAR_14
                    , VAR_13
                    , VAR_10
                    , VAR_23
                    , VAR_17
            );

            FUNC_16(VAR_84, VAR_16);

            VAR_85 = FUNC_12(VAR_84, "Committed_AS", ((void*)0), 1, 1024, VAR_20);
        }
        else FUNC_17(VAR_84);

        FUNC_13(VAR_84, VAR_85, VAR_55);

        FUNC_15(VAR_84);
    }



    if(VAR_30) {
        static RRDSET *VAR_86 = ((void*)0);
        static RRDDIM *VAR_87 = ((void*)0), *VAR_88 = ((void*)0), *VAR_89 = ((void*)0), *VAR_90 = ((void*)0), *VAR_91 = ((void*)0);

        if(FUNC_19(!VAR_86)) {
            VAR_86 = FUNC_14(
                    "mem"
                    , "writeback"
                    , ((void*)0)
                    , "kernel"
                    , ((void*)0)
                    , "Writeback Memory"
                    , "MiB"
                    , VAR_14
                    , VAR_13
                    , VAR_7
                    , VAR_23
                    , VAR_18
            );
            FUNC_16(VAR_86, VAR_16);

            VAR_87 = FUNC_12(VAR_86, "Dirty", ((void*)0), 1, 1024, VAR_20);
            VAR_88 = FUNC_12(VAR_86, "Writeback", ((void*)0), 1, 1024, VAR_20);
            VAR_89 = FUNC_12(VAR_86, "FuseWriteback", ((void*)0), 1, 1024, VAR_20);
            VAR_90 = FUNC_12(VAR_86, "NfsWriteback", ((void*)0), 1, 1024, VAR_20);
            VAR_91 = FUNC_12(VAR_86, "Bounce", ((void*)0), 1, 1024, VAR_20);
        }
        else FUNC_17(VAR_86);

        FUNC_13(VAR_86, VAR_87, VAR_45);
        FUNC_13(VAR_86, VAR_88, VAR_46);
        FUNC_13(VAR_86, VAR_89, VAR_54);
        FUNC_13(VAR_86, VAR_90, VAR_52);
        FUNC_13(VAR_86, VAR_91, VAR_53);

        FUNC_15(VAR_86);
    }



    if(VAR_31) {
        static RRDSET *VAR_92 = ((void*)0);
        static RRDDIM *VAR_93 = ((void*)0), *VAR_94 = ((void*)0), *VAR_95 = ((void*)0), *VAR_96 = ((void*)0);

        if(FUNC_19(!VAR_92)) {
            VAR_92 = FUNC_14(
                    "mem"
                    , "kernel"
                    , ((void*)0)
                    , "kernel"
                    , ((void*)0)
                    , "Memory Used by Kernel"
                    , "MiB"
                    , VAR_14
                    , VAR_13
                    , VAR_7 + 1
                    , VAR_23
                    , VAR_19
            );

            FUNC_16(VAR_92, VAR_16);

            VAR_93 = FUNC_12(VAR_92, "Slab", ((void*)0), 1, 1024, VAR_20);
            VAR_94 = FUNC_12(VAR_92, "KernelStack", ((void*)0), 1, 1024, VAR_20);
            VAR_95 = FUNC_12(VAR_92, "PageTables", ((void*)0), 1, 1024, VAR_20);
            VAR_96 = FUNC_12(VAR_92, "VmallocUsed", ((void*)0), 1, 1024, VAR_20);
        }
        else FUNC_17(VAR_92);

        FUNC_13(VAR_92, VAR_93, VAR_47);
        FUNC_13(VAR_92, VAR_94, VAR_50);
        FUNC_13(VAR_92, VAR_95, VAR_51);
        FUNC_13(VAR_92, VAR_96, VAR_56);

        FUNC_15(VAR_92);
    }



    if(VAR_32) {
        static RRDSET *VAR_97 = ((void*)0);
        static RRDDIM *VAR_98 = ((void*)0), *VAR_99 = ((void*)0);

        if(FUNC_19(!VAR_97)) {
            VAR_97 = FUNC_14(
                    "mem"
                    , "slab"
                    , ((void*)0)
                    , "slab"
                    , ((void*)0)
                    , "Reclaimable Kernel Memory"
                    , "MiB"
                    , VAR_14
                    , VAR_13
                    , VAR_8
                    , VAR_23
                    , VAR_19
            );

            FUNC_16(VAR_97, VAR_16);

            VAR_98 = FUNC_12(VAR_97, "reclaimable", ((void*)0), 1, 1024, VAR_20);
            VAR_99 = FUNC_12(VAR_97, "unreclaimable", ((void*)0), 1, 1024, VAR_20);
        }
        else FUNC_17(VAR_97);

        FUNC_13(VAR_97, VAR_98, VAR_48);
        FUNC_13(VAR_97, VAR_99, VAR_49);

        FUNC_15(VAR_97);
    }



    if(VAR_33 == VAR_2 || (VAR_33 == VAR_1 &&
                                              ((VAR_63 && VAR_59) ||
                                               VAR_22 == VAR_2))) {
        VAR_33 = VAR_2;

        static RRDSET *VAR_100 = ((void*)0);
        static RRDDIM *VAR_101 = ((void*)0), *VAR_102 = ((void*)0), *VAR_103 = ((void*)0), *VAR_104 = ((void*)0);

        if(FUNC_19(!VAR_100)) {
            VAR_100 = FUNC_14(
                    "mem"
                    , "hugepages"
                    , ((void*)0)
                    , "hugepages"
                    , ((void*)0)
                    , "Dedicated HugePages Memory"
                    , "MiB"
                    , VAR_14
                    , VAR_13
                    , VAR_5 + 1
                    , VAR_23
                    , VAR_19
            );

            FUNC_16(VAR_100, VAR_16);

            VAR_102 = FUNC_12(VAR_100, "free", ((void*)0), VAR_63, 1024, VAR_20);
            VAR_101 = FUNC_12(VAR_100, "used", ((void*)0), VAR_63, 1024, VAR_20);
            VAR_104 = FUNC_12(VAR_100, "surplus", ((void*)0), VAR_63, 1024, VAR_20);
            VAR_103 = FUNC_12(VAR_100, "reserved", ((void*)0), VAR_63, 1024, VAR_20);
        }
        else FUNC_17(VAR_100);

        FUNC_13(VAR_100, VAR_101, VAR_59 - VAR_60 - VAR_61);
        FUNC_13(VAR_100, VAR_102, VAR_60);
        FUNC_13(VAR_100, VAR_103, VAR_61);
        FUNC_13(VAR_100, VAR_104, VAR_62);

        FUNC_15(VAR_100);
    }



    if(VAR_34 == VAR_2 || (VAR_34 == VAR_1 &&
                                                          (VAR_57 ||
                                                           VAR_58 ||
                                                           VAR_22 == VAR_2))) {
        VAR_34 = VAR_2;

        static RRDSET *VAR_105 = ((void*)0);
        static RRDDIM *VAR_106 = ((void*)0), *VAR_107 = ((void*)0);

        if(FUNC_19(!VAR_105)) {
            VAR_105 = FUNC_14(
                    "mem"
                    , "transparent_hugepages"
                    , ((void*)0)
                    , "hugepages"
                    , ((void*)0)
                    , "Transparent HugePages Memory"
                    , "MiB"
                    , VAR_14
                    , VAR_13
                    , VAR_5
                    , VAR_23
                    , VAR_19
            );

            FUNC_16(VAR_105, VAR_16);

            VAR_106 = FUNC_12(VAR_105, "anonymous", ((void*)0), 1, 1024, VAR_20);
            VAR_107 = FUNC_12(VAR_105, "shmem", ((void*)0), 1, 1024, VAR_20);
        }
        else FUNC_17(VAR_105);

        FUNC_13(VAR_105, VAR_106, VAR_57);
        FUNC_13(VAR_105, VAR_107, VAR_58);

        FUNC_15(VAR_105);
    }

    return 0;
}
