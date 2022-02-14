
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_2__ {int aof_child_pid; int aof_selected_db; int aof_rewrite_time_start; scalar_t__ aof_rewrite_scheduled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (int ,char*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (char*,int,char*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

int FUNC_16(void) {
    pid_t VAR_7;

    if (FUNC_5()) return VAR_1;
    if (FUNC_1() != VAR_2) return VAR_1;
    FUNC_6();
    if ((VAR_7 = FUNC_7()) == 0) {
        char VAR_8[256];


        FUNC_8("redis-aof-rewrite");
        FUNC_13(VAR_8,256,"temp-rewriteaof-bg-%d.aof", (int) FUNC_4());
        if (FUNC_10(VAR_8) == VAR_2) {
            FUNC_11(VAR_0, "AOF rewrite");
            FUNC_3(0);
        } else {
            FUNC_3(1);
        }
    } else {

        if (VAR_7 == -1) {
            FUNC_2();
            FUNC_12(VAR_4,
                "Can't rewrite append only file in background: fork: %s",
                FUNC_14(VAR_5));
            FUNC_0();
            return VAR_1;
        }
        FUNC_12(VAR_3,
            "Background append only file rewriting started by pid %d",VAR_7);
        VAR_6.aof_rewrite_scheduled = 0;
        VAR_6.aof_rewrite_time_start = FUNC_15(((void*)0));
        VAR_6.aof_child_pid = VAR_7;




        VAR_6.aof_selected_db = -1;
        FUNC_9();
        return VAR_2;
    }
    return VAR_2;
}
