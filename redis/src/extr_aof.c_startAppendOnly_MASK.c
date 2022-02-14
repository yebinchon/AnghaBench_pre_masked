
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ aof_state; int aof_child_pid; int aof_rewrite_scheduled; int aof_fd; int unixtime; int aof_last_fsync; int aof_filename; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 char* FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 () ;
 TYPE_1__ VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;

int FUNC_9(void) {
    char VAR_11[VAR_5];
    int VAR_12;

    VAR_12 = FUNC_4(VAR_10.aof_filename,VAR_8|VAR_6|VAR_7,0644);
    FUNC_6(VAR_10.aof_state == VAR_0);
    if (VAR_12 == -1) {
        char *VAR_13 = FUNC_1(VAR_11,VAR_5);

        FUNC_7(VAR_4,
            "Redis needs to enable the AOF but can't open the "
            "append only file %s (in server root dir %s): %s",
            VAR_10.aof_filename,
            VAR_13 ? VAR_13 : "unknown",
            FUNC_8(VAR_9));
        return VAR_2;
    }
    if (FUNC_2() && VAR_10.aof_child_pid == -1) {
        VAR_10.aof_rewrite_scheduled = 1;
        FUNC_7(VAR_4,"AOF was enabled but there is already another background operation. An AOF background was scheduled to start when possible.");
    } else {



        if (VAR_10.aof_child_pid != -1) {
            FUNC_7(VAR_4,"AOF was enabled but there is already an AOF rewriting in background. Stopping background AOF and starting a rewrite now.");
            FUNC_3();
        }
        if (FUNC_5() == VAR_2) {
            FUNC_0(VAR_12);
            FUNC_7(VAR_4,"Redis needs to enable the AOF but can't trigger a background AOF rewrite operation. Check the above logs for more info about the error.");
            return VAR_2;
        }
    }


    VAR_10.aof_state = VAR_1;
    VAR_10.aof_last_fsync = VAR_10.unixtime;
    VAR_10.aof_fd = VAR_12;
    return VAR_3;
}
