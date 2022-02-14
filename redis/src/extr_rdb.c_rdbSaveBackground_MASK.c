
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rdbSaveInfo ;
typedef int pid_t ;
struct TYPE_2__ {int lastbgsave_status; int rdb_child_pid; int rdb_child_type; void* rdb_save_time_start; void* lastbgsave_try; int dirty; int dirty_before_bgsave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (int *) ;

int FUNC_11(char *VAR_8, rdbSaveInfo *VAR_9) {
    pid_t VAR_10;

    if (FUNC_2()) return VAR_1;

    VAR_7.dirty_before_bgsave = VAR_7.dirty;
    VAR_7.lastbgsave_try = FUNC_10(((void*)0));
    FUNC_3();

    if ((VAR_10 = FUNC_5()) == 0) {
        int VAR_11;


        FUNC_6("redis-rdb-bgsave");
        VAR_11 = FUNC_4(VAR_8,VAR_9);
        if (VAR_11 == VAR_2) {
            FUNC_7(VAR_0, "RDB");
        }
        FUNC_1((VAR_11 == VAR_2) ? 0 : 1);
    } else {

        if (VAR_10 == -1) {
            FUNC_0();
            VAR_7.lastbgsave_status = VAR_1;
            FUNC_8(VAR_4,"Can't save in background: fork: %s",
                FUNC_9(VAR_6));
            return VAR_1;
        }
        FUNC_8(VAR_3,"Background saving started by pid %d",VAR_10);
        VAR_7.rdb_save_time_start = FUNC_10(((void*)0));
        VAR_7.rdb_child_pid = VAR_10;
        VAR_7.rdb_child_type = VAR_5;
        return VAR_2;
    }
    return VAR_2;
}
