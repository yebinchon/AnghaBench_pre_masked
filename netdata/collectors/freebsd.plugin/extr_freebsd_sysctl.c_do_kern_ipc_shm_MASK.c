
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usec_t ;
typedef int u_long ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {scalar_t__ shm_segsz; TYPE_1__ shm_perm; } ;
struct shmid_kernel {TYPE_2__ u; } ;
typedef int collected_number ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (char*,int*,struct shmid_kernel*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 struct shmid_kernel* FUNC_3 (struct shmid_kernel*,int) ;
 int * FUNC_4 (int *,char*,int *,int,int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int * FUNC_6 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(int VAR_5, usec_t VAR_6) {
    (void)VAR_6;
    static int VAR_7[3] = {0, 0, 0};
    struct ipc_shm {
        u_long shmmni;
        collected_number segs;
        collected_number segsize;
    } VAR_8 = {0, 0, 0};

    if (FUNC_9(FUNC_0("kern.ipc.shmmni", VAR_7, VAR_8.shmmni))) {
        FUNC_2("DISABLED: system.ipc_shared_mem_segs chart");
        FUNC_2("DISABLED: system.ipc_shared_mem_size chart");
        FUNC_2("DISABLED: kern.ipc.shmmodule");
        return 1;
    } else {
        static struct shmid_kernel *VAR_9 = ((void*)0);
        static u_long VAR_10 = 0;
        static int VAR_11[3] = {0, 0, 0};

        if (FUNC_9(VAR_8.shmmni != VAR_10)) {
            VAR_9 = FUNC_3(VAR_9, sizeof(struct shmid_kernel) * VAR_8.shmmni);
            VAR_10 = VAR_8.shmmni;
        }
        if (FUNC_9(
                FUNC_1("kern.ipc.shmsegs", VAR_11, VAR_9, sizeof(struct shmid_kernel) * VAR_8.shmmni))) {
            FUNC_2("DISABLED: system.ipc_shared_mem_segs chart");
            FUNC_2("DISABLED: system.ipc_shared_mem_size chart");
            FUNC_2("DISABLED: kern.ipc.shmmodule");
            return 1;
        } else {
            unsigned long VAR_12;

            for (VAR_12 = 0; VAR_12 < VAR_8.shmmni; VAR_12++) {
                if (FUNC_9(VAR_9[VAR_12].u.shm_perm.mode & 0x0800)) {
                    VAR_8.segs += 1;
                    VAR_8.segsize += VAR_9[VAR_12].u.shm_segsz;
                }
            }



            static RRDSET *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
            static RRDDIM *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);

            if (FUNC_9(!VAR_13)) {
                VAR_13 = FUNC_6(
                        "system",
                        "ipc_shared_mem_segs",
                        ((void*)0),
                        "ipc shared memory",
                        ((void*)0),
                        "IPC Shared Memory Segments",
                        "segments",
                        "freebsd.plugin",
                        "kern.ipc.shm",
                        VAR_1,
                        VAR_5,
                        VAR_3
                );

                VAR_15 = FUNC_4(VAR_13, "segments", ((void*)0), 1, 1, VAR_4);
            }
            else FUNC_8(VAR_13);

            FUNC_5(VAR_13, VAR_15, VAR_8.segs);
            FUNC_7(VAR_13);



            if (FUNC_9(!VAR_14)) {
                VAR_14 = FUNC_6(
                        "system",
                        "ipc_shared_mem_size",
                        ((void*)0),
                        "ipc shared memory",
                        ((void*)0),
                        "IPC Shared Memory Segments Size",
                        "KiB",
                        "freebsd.plugin",
                        "kern.ipc.shm",
                        VAR_2,
                        VAR_5,
                        VAR_3
                );

                VAR_16 = FUNC_4(VAR_14, "allocated", ((void*)0), 1, VAR_0, VAR_4);
            }
            else FUNC_8(VAR_14);

            FUNC_5(VAR_14, VAR_16, VAR_8.segsize);
            FUNC_7(VAR_14);
        }
    }

    return 0;
}
