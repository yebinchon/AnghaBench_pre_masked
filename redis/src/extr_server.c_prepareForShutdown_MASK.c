
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rdbSaveInfo ;
struct TYPE_2__ {int rdb_child_pid; int module_child_pid; scalar_t__ aof_state; int aof_child_pid; scalar_t__ saveparamslen; scalar_t__ sentinel_mode; scalar_t__ pidfile; scalar_t__ daemonize; int rdb_filename; int aof_fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;
 TYPE_1__ VAR_9 ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (scalar_t__) ;

int FUNC_13(int VAR_10) {
    int VAR_11 = VAR_10 & VAR_8;
    int VAR_12 = VAR_10 & VAR_7;

    FUNC_11(VAR_5,"User requested shutdown...");


    FUNC_6();




    if (VAR_9.rdb_child_pid != -1) {
        FUNC_11(VAR_5,"There is a child saving an .rdb. Killing it!");
        FUNC_5();
    }


    if (VAR_9.module_child_pid != -1) {
        FUNC_11(VAR_5,"There is a module fork child. Killing it!");
        FUNC_0(VAR_9.module_child_pid,0);
    }

    if (VAR_9.aof_state != VAR_0) {


        if (VAR_9.aof_child_pid != -1) {


            if (VAR_9.aof_state == VAR_1) {
                FUNC_11(VAR_5, "Writing initial AOF, can't exit.");
                return VAR_2;
            }
            FUNC_11(VAR_5,
                "There is a child rewriting the AOF. Killing it!");
            FUNC_4();
        }

        FUNC_11(VAR_4,"Calling fsync() on the AOF file.");
        FUNC_2(1);
        FUNC_10(VAR_9.aof_fd);
    }


    if ((VAR_9.saveparamslen > 0 && !VAR_12) || VAR_11) {
        FUNC_11(VAR_4,"Saving the final RDB snapshot before exiting.");

        rdbSaveInfo VAR_13, *VAR_14;
        VAR_14 = FUNC_8(&VAR_13);
        if (FUNC_9(VAR_9.rdb_filename,VAR_14) != VAR_3) {





            FUNC_11(VAR_5,"Error trying to save the DB, can't exit.");
            return VAR_2;
        }
    }


    FUNC_7(VAR_6,0,((void*)0));


    if (VAR_9.daemonize || VAR_9.pidfile) {
        FUNC_11(VAR_4,"Removing the pid file.");
        FUNC_12(VAR_9.pidfile);
    }



    FUNC_3();


    FUNC_1(1);
    FUNC_11(VAR_5,"%s is now ready to exit, bye bye...",
        VAR_9.sentinel_mode ? "Sentinel" : "Redis");
    return VAR_3;
}
