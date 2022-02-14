
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_2__ {int rdb_child_pid; int rdb_save_time_start; void* rdb_save_time_last; int rdb_child_type; void* lastbgsave_status; void* lastsave; scalar_t__ dirty_before_bgsave; scalar_t__ dirty; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (int ,char*,...) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (void*,int ) ;

void FUNC_7(int VAR_8, int VAR_9) {
    if (!VAR_9 && VAR_8 == 0) {
        FUNC_4(VAR_2,
            "Background saving terminated with success");
        VAR_7.dirty = VAR_7.dirty - VAR_7.dirty_before_bgsave;
        VAR_7.lastsave = FUNC_5(((void*)0));
        VAR_7.lastbgsave_status = VAR_1;
    } else if (!VAR_9 && VAR_8 != 0) {
        FUNC_4(VAR_3, "Background saving error");
        VAR_7.lastbgsave_status = VAR_0;
    } else {
        mstime_t VAR_10;

        FUNC_4(VAR_3,
            "Background saving terminated by signal %d", VAR_9);
        FUNC_2(VAR_10);
        FUNC_3(VAR_7.rdb_child_pid);
        FUNC_1(VAR_10);
        FUNC_0("rdb-unlink-temp-file",VAR_10);


        if (VAR_9 != VAR_6)
            VAR_7.lastbgsave_status = VAR_0;
    }
    VAR_7.rdb_child_pid = -1;
    VAR_7.rdb_child_type = VAR_5;
    VAR_7.rdb_save_time_last = FUNC_5(((void*)0))-VAR_7.rdb_save_time_start;
    VAR_7.rdb_save_time_start = -1;


    FUNC_6((!VAR_9 && VAR_8 == 0) ? VAR_1 : VAR_0, VAR_4);
}
