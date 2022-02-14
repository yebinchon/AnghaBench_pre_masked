
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rio ;
typedef int rdbSaveInfo ;
struct TYPE_2__ {int lastbgsave_status; int lastsave; scalar_t__ dirty; scalar_t__ rdb_save_incremental_fsync; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,int*,int ,int *) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 TYPE_1__ VAR_9 ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*) ;

int FUNC_18(char *VAR_10, rdbSaveInfo *VAR_11) {
    char VAR_12[256];
    char VAR_13[VAR_5];
    FILE *VAR_14;
    rio VAR_15;
    int VAR_16 = 0;

    FUNC_12(VAR_12,256,"temp-%d.rdb", (int) FUNC_6());
    VAR_14 = FUNC_3(VAR_12,"w");
    if (!VAR_14) {
        char *VAR_17 = FUNC_5(VAR_13,VAR_5);
        FUNC_11(VAR_4,
            "Failed opening the RDB file %s (in server root dir %s) "
            "for saving: %s",
            VAR_10,
            VAR_17 ? VAR_17 : "unknown",
            FUNC_15(VAR_8));
        return VAR_0;
    }

    FUNC_9(&VAR_15,VAR_14);
    FUNC_13(VAR_6);

    if (VAR_9.rdb_save_incremental_fsync)
        FUNC_10(&VAR_15,VAR_7);

    if (FUNC_7(&VAR_15,&VAR_16,VAR_6,VAR_11) == VAR_0) {
        VAR_8 = VAR_16;
        goto werr;
    }


    if (FUNC_1(VAR_14) == VAR_2) goto werr;
    if (FUNC_4(FUNC_2(VAR_14)) == -1) goto werr;
    if (FUNC_0(VAR_14) == VAR_2) goto werr;



    if (FUNC_8(VAR_12,VAR_10) == -1) {
        char *VAR_18 = FUNC_5(VAR_13,VAR_5);
        FUNC_11(VAR_4,
            "Error moving temp DB file %s on the final "
            "destination %s (in server root dir %s): %s",
            VAR_12,
            VAR_10,
            VAR_18 ? VAR_18 : "unknown",
            FUNC_15(VAR_8));
        FUNC_17(VAR_12);
        FUNC_14(0);
        return VAR_0;
    }

    FUNC_11(VAR_3,"DB saved on disk");
    VAR_9.dirty = 0;
    VAR_9.lastsave = FUNC_16(((void*)0));
    VAR_9.lastbgsave_status = VAR_1;
    FUNC_14(1);
    return VAR_1;

werr:
    FUNC_11(VAR_4,"Write error saving DB on disk: %s", FUNC_15(VAR_8));
    FUNC_0(VAR_14);
    FUNC_17(VAR_12);
    FUNC_14(0);
    return VAR_0;
}
