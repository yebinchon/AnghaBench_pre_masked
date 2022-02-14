
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int uint64_t ;
typedef int RRDSET ;
typedef int RRDDIM ;


 scalar_t__ FUNC_0 (char*,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,int *,int,int,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(int VAR_3, usec_t VAR_4) {
    (void)VAR_4;
    static int VAR_5[5] = {0, 0, 0, 0, 0}, VAR_6[5] = {0, 0, 0, 0, 0},
               VAR_7[5] = {0, 0, 0, 0, 0}, VAR_8[5] = {0, 0, 0, 0, 0};
    uint64_t VAR_9, VAR_10, VAR_11, VAR_12;

    if (FUNC_7(FUNC_0("kstat.zfs.misc.zio_trim.bytes", VAR_5, VAR_9) ||
                 FUNC_0("kstat.zfs.misc.zio_trim.success", VAR_6, VAR_10) ||
                 FUNC_0("kstat.zfs.misc.zio_trim.failed", VAR_7, VAR_11) ||
                 FUNC_0("kstat.zfs.misc.zio_trim.unsupported", VAR_8, VAR_12))) {
        FUNC_1("DISABLED: zfs.trim_bytes chart");
        FUNC_1("DISABLED: zfs.trim_success chart");
        FUNC_1("DISABLED: kstat.zfs.misc.zio_trim module");
        return 1;
     } else {



        static RRDSET *VAR_13 = ((void*)0);
        static RRDDIM *VAR_14 = ((void*)0);

        if (FUNC_7(!VAR_13)) {
            VAR_13 = FUNC_4(
                    "zfs",
                    "trim_bytes",
                    ((void*)0),
                    "trim",
                    ((void*)0),
                    "Successfully TRIMmed bytes",
                    "bytes",
                    "freebsd",
                    "zfs",
                    2320,
                    VAR_3,
                    VAR_0
            );

            VAR_14 = FUNC_2(VAR_13, "TRIMmed", ((void*)0), 1, 1, VAR_2);
        }
        else FUNC_6(VAR_13);

        FUNC_3(VAR_13, VAR_14, VAR_9);
        FUNC_5(VAR_13);



        static RRDSET *VAR_15 = ((void*)0);
        static RRDDIM *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);

        if (FUNC_7(!VAR_15)) {
            VAR_15 = FUNC_4(
                    "zfs",
                    "trim_requests",
                    ((void*)0),
                    "trim",
                    ((void*)0),
                    "TRIM requests",
                    "requests",
                    "freebsd",
                    "zfs",
                    2321,
                    VAR_3,
                    VAR_1
            );

            VAR_16 = FUNC_2(VAR_15, "successful", ((void*)0), 1, 1, VAR_2);
            VAR_17 = FUNC_2(VAR_15, "failed", ((void*)0), 1, 1, VAR_2);
            VAR_18 = FUNC_2(VAR_15, "unsupported", ((void*)0), 1, 1, VAR_2);
        }
        else FUNC_6(VAR_15);

        FUNC_3(VAR_15, VAR_16, VAR_10);
        FUNC_3(VAR_15, VAR_17, VAR_11);
        FUNC_3(VAR_15, VAR_18, VAR_12);
        FUNC_5(VAR_15);

     }

    return 0;
}
