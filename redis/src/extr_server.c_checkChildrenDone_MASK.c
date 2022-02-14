
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_2__ {int rdb_child_pid; int aof_child_pid; int module_child_pid; scalar_t__ rdb_pipe_conns; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (int ,char*,long,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int*,int ,int *) ;

void FUNC_13(void) {
    int VAR_6;
    pid_t VAR_7;






    if (VAR_5.rdb_child_pid != -1 && VAR_5.rdb_pipe_conns)
        return;

    if ((VAR_7 = FUNC_12(&VAR_6,VAR_3,((void*)0))) != 0) {
        int VAR_8 = FUNC_1(VAR_6);
        int VAR_9 = 0;

        if (FUNC_2(VAR_6)) VAR_9 = FUNC_3(VAR_6);






        if (VAR_8 == VAR_1) {
            VAR_9 = VAR_2;
            VAR_8 = 1;
        }

        if (VAR_7 == -1) {
            FUNC_9(VAR_0,"wait3() returned an error: %s. "
                "rdb_child_pid = %d, aof_child_pid = %d, module_child_pid = %d",
                FUNC_10(VAR_4),
                (int) VAR_5.rdb_child_pid,
                (int) VAR_5.aof_child_pid,
                (int) VAR_5.module_child_pid);
        } else if (VAR_7 == VAR_5.rdb_child_pid) {
            FUNC_5(VAR_8,VAR_9);
            if (!VAR_9 && VAR_8 == 0) FUNC_8();
        } else if (VAR_7 == VAR_5.aof_child_pid) {
            FUNC_4(VAR_8,VAR_9);
            if (!VAR_9 && VAR_8 == 0) FUNC_8();
        } else if (VAR_7 == VAR_5.module_child_pid) {
            FUNC_0(VAR_8,VAR_9);
            if (!VAR_9 && VAR_8 == 0) FUNC_8();
        } else {
            if (!FUNC_7(VAR_7)) {
                FUNC_9(VAR_0,
                    "Warning, detected child with unmatched pid: %ld",
                    (long)VAR_7);
            }
        }
        FUNC_11();
        FUNC_6();
    }
}
