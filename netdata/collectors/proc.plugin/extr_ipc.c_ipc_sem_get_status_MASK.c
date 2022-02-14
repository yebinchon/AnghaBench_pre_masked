
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
union semun {int * array; } ;
struct seminfo {int semaem; int semusz; } ;
struct ipc_status {int semaem; int semusz; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,union semun) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct ipc_status *VAR_1) {
    struct seminfo VAR_2;
    union semun VAR_3;

    VAR_3.array = (ushort *) (void *) &VAR_2;

    if(FUNC_2(FUNC_1 (0, 0, VAR_0, VAR_3) < 0)) {

        static int VAR_4 = 0;
        if(FUNC_2(!VAR_4)) {
            FUNC_0("IPC: kernel is not configured for semaphores");
            VAR_4 = 1;
        }
        VAR_1->semusz = 0;
        VAR_1->semaem = 0;
        return -1;
    }

    VAR_1->semusz = VAR_2.semusz;
    VAR_1->semaem = VAR_2.semaem;
    return 0;
}
