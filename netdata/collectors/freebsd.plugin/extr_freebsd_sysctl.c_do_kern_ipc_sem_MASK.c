
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {scalar_t__ sem_nsems; TYPE_1__ sem_perm; } ;
struct semid_kernel {TYPE_2__ u; } ;
typedef int collected_number ;
typedef int RRDSET ;
typedef int RRDDIM ;


 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (char*,int*,struct semid_kernel*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 struct semid_kernel* FUNC_3 (struct semid_kernel*,int) ;
 int * FUNC_4 (int *,char*,int *,int,int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int * FUNC_6 (char*,char*,int *,char*,int *,char*,char*,char*,char*,int ,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(int VAR_5, usec_t VAR_6) {
    (void)VAR_6;
    static int VAR_7[3] = {0, 0, 0};
    struct ipc_sem {
        int semmni;
        collected_number sets;
        collected_number semaphores;
    } VAR_8 = {0, 0, 0};

    if (FUNC_9(FUNC_0("kern.ipc.semmni", VAR_7, VAR_8.semmni))) {
        FUNC_2("DISABLED: system.ipc_semaphores chart");
        FUNC_2("DISABLED: system.ipc_semaphore_arrays chart");
        FUNC_2("DISABLED: kern.ipc.sem module");
        return 1;
    } else {
        static struct semid_kernel *VAR_9 = ((void*)0);
        static int VAR_10 = 0;
        static int VAR_11[3] = {0, 0, 0};

        if (FUNC_9(VAR_8.semmni != VAR_10)) {
            VAR_9 = FUNC_3(VAR_9, sizeof(struct semid_kernel) * VAR_8.semmni);
            VAR_10 = VAR_8.semmni;
        }
        if (FUNC_9(FUNC_1("kern.ipc.sema", VAR_11, VAR_9, sizeof(struct semid_kernel) * VAR_8.semmni))) {
            FUNC_2("DISABLED: system.ipc_semaphores chart");
            FUNC_2("DISABLED: system.ipc_semaphore_arrays chart");
            FUNC_2("DISABLED: kern.ipc.sem module");
            return 1;
        } else {
            int VAR_12;

            for (VAR_12 = 0; VAR_12 < VAR_8.semmni; VAR_12++) {
                if (FUNC_9(VAR_9[VAR_12].u.sem_perm.mode & VAR_4)) {
                    VAR_8.sets += 1;
                    VAR_8.semaphores += VAR_9[VAR_12].u.sem_nsems;
                }
            }



            static RRDSET *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
            static RRDDIM *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);

            if (FUNC_9(!VAR_13)) {
                VAR_13 = FUNC_6(
                        "system",
                        "ipc_semaphores",
                        ((void*)0),
                        "ipc semaphores",
                        ((void*)0),
                        "IPC Semaphores",
                        "semaphores",
                        "freebsd.plugin",
                        "kern.ipc.sem",
                        VAR_0,
                        VAR_5,
                        VAR_2
                );

                VAR_15 = FUNC_4(VAR_13, "semaphores", ((void*)0), 1, 1, VAR_3);
            }
            else FUNC_8(VAR_13);

            FUNC_5(VAR_13, VAR_15, VAR_8.semaphores);
            FUNC_7(VAR_13);



            if (FUNC_9(!VAR_14)) {
                VAR_14 = FUNC_6(
                        "system",
                        "ipc_semaphore_arrays",
                        ((void*)0),
                        "ipc semaphores",
                        ((void*)0),
                        "IPC Semaphore Arrays",
                        "arrays",
                        "freebsd.plugin",
                        "kern.ipc.sem",
                        VAR_1,
                        VAR_5,
                        VAR_2
                );

                VAR_16 = FUNC_4(VAR_14, "arrays", ((void*)0), 1, 1, VAR_3);
            }
            else FUNC_8(VAR_14);

            FUNC_5(VAR_14, VAR_16, VAR_8.sets);
            FUNC_7(VAR_14);
        }
    }

    return 0;
}
