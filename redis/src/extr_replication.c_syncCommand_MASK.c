
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
struct TYPE_18__ {int flags; scalar_t__ replstate; int repldbfd; int slave_capa; int psync_initial_offset; int conn; TYPE_1__** argv; } ;
typedef TYPE_3__ client ;
struct TYPE_19__ {scalar_t__ repl_state; int rdb_child_pid; scalar_t__ rdb_child_type; scalar_t__ repl_diskless_sync_delay; scalar_t__ repl_diskless_sync; int slaves; int * repl_backlog; scalar_t__ repl_disable_tcp_nodelay; int stat_sync_full; int stat_sync_partial_err; int stat_sync_partial_ok; scalar_t__ masterhost; } ;
struct TYPE_16__ {char* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (char*) ;
 TYPE_5__ VAR_10 ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (int) ;
 int FUNC_19 (char*,char*) ;

void FUNC_20(client *VAR_11) {

    if (VAR_11->flags & VAR_1) return;



    if (VAR_10.masterhost && VAR_10.repl_state != VAR_6) {
        FUNC_1(VAR_11,FUNC_16("-NOMASTERLINK Can't SYNC while not connected with my master\r\n"));
        return;
    }





    if (FUNC_4(VAR_11)) {
        FUNC_0(VAR_11,"SYNC and PSYNC are invalid with pending output");
        return;
    }

    FUNC_17(VAR_3,"Replica %s asks for synchronization",
        FUNC_14(VAR_11));
    if (!FUNC_19(VAR_11->argv[0]->ptr,"psync")) {
        if (FUNC_13(VAR_11) == VAR_2) {
            VAR_10.stat_sync_partial_ok++;
            return;
        } else {
            char *VAR_12 = VAR_11->argv[1]->ptr;





            if (VAR_12[0] != '?') VAR_10.stat_sync_partial_err++;
        }
    } else {



        VAR_11->flags |= VAR_0;
    }


    VAR_10.stat_sync_full++;



    VAR_11->replstate = VAR_9;
    if (VAR_10.repl_disable_tcp_nodelay)
        FUNC_5(VAR_11->conn);
    VAR_11->repldbfd = -1;
    VAR_11->flags |= VAR_1;
    FUNC_9(VAR_10.slaves,VAR_11);


    if (FUNC_10(VAR_10.slaves) == 1 && VAR_10.repl_backlog == ((void*)0)) {



        FUNC_2();
        FUNC_3();
        FUNC_7();
    }


    if (VAR_10.rdb_child_pid != -1 &&
        VAR_10.rdb_child_type == VAR_4)
    {



        client *VAR_13;
        listNode *VAR_14;
        listIter VAR_15;

        FUNC_12(VAR_10.slaves,&VAR_15);
        while((VAR_14 = FUNC_11(&VAR_15))) {
            VAR_13 = VAR_14->value;
            if (VAR_13->replstate == VAR_8) break;
        }


        if (VAR_14 && ((VAR_11->slave_capa & VAR_13->slave_capa) == VAR_13->slave_capa)) {


            FUNC_6(VAR_11,VAR_13);
            FUNC_15(VAR_11,VAR_13->psync_initial_offset);
            FUNC_17(VAR_3,"Waiting for end of BGSAVE for SYNC");
        } else {


            FUNC_17(VAR_3,"Can't attach the replica to the current BGSAVE. Waiting for next BGSAVE for SYNC");
        }


    } else if (VAR_10.rdb_child_pid != -1 &&
               VAR_10.rdb_child_type == VAR_5)
    {



        FUNC_17(VAR_3,"Current BGSAVE has socket target. Waiting for next BGSAVE for SYNC");


    } else {
        if (VAR_10.repl_diskless_sync && (VAR_11->slave_capa & VAR_7)) {



            if (VAR_10.repl_diskless_sync_delay)
                FUNC_17(VAR_3,"Delay next BGSAVE for diskless SYNC");
        } else {



            if (!FUNC_8()) {
                FUNC_18(VAR_11->slave_capa);
            } else {
                FUNC_17(VAR_3,
                    "No BGSAVE in progress, but another BG operation is active. "
                    "BGSAVE for replication delayed");
            }
        }
    }
    return;
}
