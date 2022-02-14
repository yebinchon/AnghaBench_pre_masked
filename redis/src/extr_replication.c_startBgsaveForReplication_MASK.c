
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int rdbSaveInfo ;
struct TYPE_8__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_9__ {scalar_t__ replstate; int flags; } ;
typedef TYPE_2__ client ;
struct TYPE_10__ {int slaves; int rdb_filename; scalar_t__ repl_diskless_sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*,int ) ;
 TYPE_3__ VAR_9 ;
 int FUNC_10 (int ,char*,...) ;

int FUNC_11(int VAR_10) {
    int VAR_11;
    int VAR_12 = VAR_9.repl_diskless_sync && (VAR_10 & VAR_7);
    listIter VAR_13;
    listNode *VAR_14;

    FUNC_10(VAR_4,"Starting BGSAVE for SYNC with target: %s",
        VAR_12 ? "replicas sockets" : "disk");

    rdbSaveInfo VAR_15, *VAR_16;
    VAR_16 = FUNC_5(&VAR_15);


    if (VAR_16) {
        if (VAR_12)
            VAR_11 = FUNC_7(VAR_16);
        else
            VAR_11 = FUNC_6(VAR_9.rdb_filename,VAR_16);
    } else {
        FUNC_10(VAR_5,"BGSAVE for replication: replication information not available, can't generate the RDB file right now. Try later.");
        VAR_11 = VAR_2;
    }




    if (VAR_11 == VAR_2) {
        FUNC_10(VAR_5,"BGSAVE for replication failed");
        FUNC_4(VAR_9.slaves,&VAR_13);
        while((VAR_14 = FUNC_3(&VAR_13))) {
            client *VAR_17 = VAR_14->value;

            if (VAR_17->replstate == VAR_8) {
                VAR_17->replstate = VAR_6;
                VAR_17->flags &= ~VAR_1;
                FUNC_2(VAR_9.slaves,VAR_14);
                FUNC_0(VAR_17,
                    "BGSAVE failed, replication can't continue");
                VAR_17->flags |= VAR_0;
            }
        }
        return VAR_11;
    }



    if (!VAR_12) {
        FUNC_4(VAR_9.slaves,&VAR_13);
        while((VAR_14 = FUNC_3(&VAR_13))) {
            client *VAR_18 = VAR_14->value;

            if (VAR_18->replstate == VAR_8) {
                    FUNC_9(VAR_18,
                            FUNC_1());
            }
        }
    }



    if (VAR_11 == VAR_3) FUNC_8();
    return VAR_11;
}
