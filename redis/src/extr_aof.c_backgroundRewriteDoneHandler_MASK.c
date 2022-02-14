
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_2__ {int aof_child_pid; int aof_fd; char* aof_filename; scalar_t__ aof_fsync; int aof_selected_db; scalar_t__ aof_state; int aof_rewrite_time_start; int aof_rewrite_scheduled; scalar_t__ aof_rewrite_time_last; void* aof_lastbgrewrite_status; int aof_buf; int aof_current_size; int aof_rewrite_base_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,void*,int *,int *) ;
 int FUNC_8 (int) ;
 int VAR_15 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 TYPE_1__ VAR_16 ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (char*,int,char*,int) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int *) ;
 long long FUNC_21 () ;

void FUNC_22(int VAR_17, int VAR_18) {
    if (!VAR_18 && VAR_17 == 0) {
        int VAR_19, VAR_20;
        char VAR_21[256];
        long long VAR_22 = FUNC_21();
        mstime_t VAR_23;

        FUNC_17(VAR_7,
            "Background AOF rewrite terminated with success");



        FUNC_11(VAR_23);
        FUNC_18(VAR_21,256,"temp-rewriteaof-bg-%d.aof",
            (int)VAR_16.aof_child_pid);
        VAR_19 = FUNC_12(VAR_21,VAR_13|VAR_10);
        if (VAR_19 == -1) {
            FUNC_17(VAR_9,
                "Unable to open the temporary AOF produced by the child: %s", FUNC_19(VAR_15));
            goto cleanup;
        }

        if (FUNC_4(VAR_19) == -1) {
            FUNC_17(VAR_9,
                "Error trying to flush the parent diff to the rewritten AOF: %s", FUNC_19(VAR_15));
            FUNC_8(VAR_19);
            goto cleanup;
        }
        FUNC_10(VAR_23);
        FUNC_9("aof-rewrite-diff-write",VAR_23);

        FUNC_17(VAR_7,
            "Residual parent diff successfully flushed to the rewritten AOF (%.2f MB)", (double) FUNC_3() / (1024*1024));
        if (VAR_16.aof_fd == -1) {





            VAR_20 = FUNC_12(VAR_16.aof_filename,VAR_12|VAR_11);
        } else {

            VAR_20 = -1;
        }



        FUNC_11(VAR_23);
        if (FUNC_14(VAR_21,VAR_16.aof_filename) == -1) {
            FUNC_17(VAR_9,
                "Error trying to rename the temporary AOF file %s into %s: %s",
                VAR_21,
                VAR_16.aof_filename,
                FUNC_19(VAR_15));
            FUNC_8(VAR_19);
            if (VAR_20 != -1) FUNC_8(VAR_20);
            goto cleanup;
        }
        FUNC_10(VAR_23);
        FUNC_9("aof-rename",VAR_23);

        if (VAR_16.aof_fd == -1) {


            FUNC_8(VAR_19);
        } else {

            VAR_20 = VAR_16.aof_fd;
            VAR_16.aof_fd = VAR_19;
            if (VAR_16.aof_fsync == VAR_0)
                FUNC_13(VAR_19);
            else if (VAR_16.aof_fsync == VAR_1)
                FUNC_6(VAR_19);
            VAR_16.aof_selected_db = -1;
            FUNC_5();
            VAR_16.aof_rewrite_base_size = VAR_16.aof_current_size;
            VAR_16.aof_current_size = VAR_16.aof_current_size;



            FUNC_16(VAR_16.aof_buf);
            VAR_16.aof_buf = FUNC_15();
        }

        VAR_16.aof_lastbgrewrite_status = VAR_6;

        FUNC_17(VAR_7, "Background AOF rewrite finished successfully");

        if (VAR_16.aof_state == VAR_3)
            VAR_16.aof_state = VAR_2;


        if (VAR_20 != -1) FUNC_7(VAR_4,(void*)(long)VAR_20,((void*)0),((void*)0));

        FUNC_17(VAR_8,
            "Background AOF rewrite signal handler took %lldus", FUNC_21()-VAR_22);
    } else if (!VAR_18 && VAR_17 != 0) {


        if (VAR_18 != VAR_14)
            VAR_16.aof_lastbgrewrite_status = VAR_5;
        FUNC_17(VAR_9,
            "Background AOF rewrite terminated with error");
    } else {
        VAR_16.aof_lastbgrewrite_status = VAR_5;

        FUNC_17(VAR_9,
            "Background AOF rewrite terminated by signal %d", VAR_18);
    }

cleanup:
    FUNC_0();
    FUNC_2();
    FUNC_1(VAR_16.aof_child_pid);
    VAR_16.aof_child_pid = -1;
    VAR_16.aof_rewrite_time_last = FUNC_20(((void*)0))-VAR_16.aof_rewrite_time_start;
    VAR_16.aof_rewrite_time_start = -1;

    if (VAR_16.aof_state == VAR_3)
        VAR_16.aof_rewrite_scheduled = 1;
}
