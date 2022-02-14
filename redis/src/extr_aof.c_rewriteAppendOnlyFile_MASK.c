
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rio ;
typedef int mstime_t ;
struct TYPE_2__ {int aof_child_diff; int aof_pipe_read_ack_from_parent; int aof_pipe_write_ack_to_parent; int aof_pipe_read_data_from_parent; scalar_t__ aof_use_rdb_preamble; scalar_t__ aof_rewrite_incremental_fsync; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int*,int ,int *) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (int *,int ,scalar_t__) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int ) ;
 TYPE_1__ VAR_10 ;
 int FUNC_18 (int ,char*,...) ;
 int FUNC_19 (char*,int,char*,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int) ;
 double FUNC_22 (int) ;
 int FUNC_23 (int ,char*,int,int) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int ,char*,int) ;

int FUNC_26(char *VAR_11) {
    rio VAR_12;
    FILE *VAR_13;
    char VAR_14[256];
    char VAR_15;



    FUNC_19(VAR_14,256,"temp-rewriteaof-%d.aof", (int) FUNC_8());
    VAR_13 = FUNC_6(VAR_14,"w");
    if (!VAR_13) {
        FUNC_18(VAR_6, "Opening the temp file for AOF rewrite in rewriteAppendOnlyFile(): %s", FUNC_22(VAR_9));
        return VAR_2;
    }

    VAR_10.aof_child_diff = FUNC_16();
    FUNC_13(&VAR_12,VAR_13);

    if (VAR_10.aof_rewrite_incremental_fsync)
        FUNC_14(&VAR_12,VAR_8);

    FUNC_20(VAR_7);

    if (VAR_10.aof_use_rdb_preamble) {
        int VAR_16;
        if (FUNC_10(&VAR_12,&VAR_16,VAR_7,((void*)0)) == VAR_2) {
            VAR_9 = VAR_16;
            goto werr;
        }
    } else {
        if (FUNC_12(&VAR_12) == VAR_2) goto werr;
    }



    if (FUNC_4(VAR_13) == VAR_4) goto werr;
    if (FUNC_7(FUNC_5(VAR_13)) == -1) goto werr;







    int VAR_17 = 0;
    mstime_t VAR_18 = FUNC_9();
    while(FUNC_9()-VAR_18 < 1000 && VAR_17 < 20) {
        if (FUNC_0(VAR_10.aof_pipe_read_data_from_parent, VAR_0, 1) <= 0)
        {
            VAR_17++;
            continue;
        }
        VAR_17 = 0;

        FUNC_2();
    }


    if (FUNC_25(VAR_10.aof_pipe_write_ack_to_parent,"!",1) != 1) goto werr;
    if (FUNC_1(((void*)0),VAR_10.aof_pipe_read_ack_from_parent) != VAR_1)
        goto werr;



    if (FUNC_23(VAR_10.aof_pipe_read_ack_from_parent,&VAR_15,1,5000) != 1 ||
        VAR_15 != '!') goto werr;
    FUNC_18(VAR_5,"Parent agreed to stop sending diffs. Finalizing AOF...");


    FUNC_2();


    FUNC_18(VAR_5,
        "Concatenating %.2f MB of AOF diff received from parent.",
        (double) FUNC_17(VAR_10.aof_child_diff) / (1024*1024));
    if (FUNC_15(&VAR_12,VAR_10.aof_child_diff,FUNC_17(VAR_10.aof_child_diff)) == 0)
        goto werr;


    if (FUNC_4(VAR_13) == VAR_4) goto werr;
    if (FUNC_7(FUNC_5(VAR_13)) == -1) goto werr;
    if (FUNC_3(VAR_13) == VAR_4) goto werr;



    if (FUNC_11(VAR_14,VAR_11) == -1) {
        FUNC_18(VAR_6,"Error moving temp append only file on the final destination: %s", FUNC_22(VAR_9));
        FUNC_24(VAR_14);
        FUNC_21(0);
        return VAR_2;
    }
    FUNC_18(VAR_5,"SYNC append only file rewrite performed");
    FUNC_21(1);
    return VAR_3;

werr:
    FUNC_18(VAR_6,"Write error writing append only file on disk: %s", FUNC_22(VAR_9));
    FUNC_3(VAR_13);
    FUNC_24(VAR_14);
    FUNC_21(0);
    return VAR_2;
}
