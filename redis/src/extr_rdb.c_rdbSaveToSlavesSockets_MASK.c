
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rio ;
typedef int rdbSaveInfo ;
typedef int pid_t ;
struct TYPE_6__ {TYPE_2__* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
typedef int connection ;
struct TYPE_7__ {scalar_t__ replstate; int conn; } ;
typedef TYPE_2__ client ;
struct TYPE_8__ {int rdb_pipe_read; int rdb_pipe_write; int rdb_child_pid; int el; int rdb_child_type; int rdb_save_time_start; scalar_t__ rdb_pipe_numconns_writing; scalar_t__ rdb_pipe_numconns; int * rdb_pipe_conns; int slaves; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int*) ;
 int VAR_11 ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int ,char*) ;
 TYPE_3__ VAR_12 ;
 int FUNC_20 (int ,char*,int) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int * FUNC_25 (int) ;

int FUNC_26(rdbSaveInfo *VAR_13) {
    listNode *VAR_14;
    listIter VAR_15;
    pid_t VAR_16;
    int VAR_17[2];

    if (FUNC_6()) return VAR_3;



    if (VAR_12.rdb_pipe_conns) return VAR_3;





    if (FUNC_11(VAR_17) == -1) return VAR_3;
    VAR_12.rdb_pipe_read = VAR_17[0];
    VAR_12.rdb_pipe_write = VAR_17[1];
    FUNC_1(((void*)0), VAR_12.rdb_pipe_read);



    VAR_12.rdb_pipe_conns = FUNC_25(sizeof(connection *)*FUNC_7(VAR_12.slaves));
    VAR_12.rdb_pipe_numconns = 0;
    VAR_12.rdb_pipe_numconns_writing = 0;
    FUNC_9(VAR_12.slaves,&VAR_15);
    while((VAR_14 = FUNC_8(&VAR_15))) {
        client *VAR_18 = VAR_14->value;
        if (VAR_18->replstate == VAR_9) {
            VAR_12.rdb_pipe_conns[VAR_12.rdb_pipe_numconns++] = VAR_18->conn;
            FUNC_15(VAR_18,FUNC_5());
        }
    }


    FUNC_10();
    if ((VAR_16 = FUNC_13()) == 0) {

        int VAR_19;
        rio VAR_20;

        FUNC_18(&VAR_20,VAR_12.rdb_pipe_write);

        FUNC_14("redis-rdb-to-slaves");

        VAR_19 = FUNC_12(&VAR_20,((void*)0),VAR_13);
        if (VAR_19 == VAR_4 && FUNC_16(&VAR_20) == 0)
            VAR_19 = VAR_3;

        if (VAR_19 == VAR_4) {
            FUNC_19(VAR_2, "RDB");
        }

        FUNC_17(&VAR_20);
        FUNC_2(VAR_12.rdb_pipe_write);
        FUNC_4((VAR_19 == VAR_4) ? 0 : 1);
    } else {

        if (VAR_16 == -1) {
            FUNC_20(VAR_6,"Can't save in background: fork: %s",
                FUNC_22(VAR_10));




            FUNC_9(VAR_12.slaves,&VAR_15);
            while((VAR_14 = FUNC_8(&VAR_15))) {
                client *VAR_21 = VAR_14->value;
                if (VAR_21->replstate == VAR_8) {
                    VAR_21->replstate = VAR_9;
                }
            }
            FUNC_2(VAR_12.rdb_pipe_write);
            FUNC_2(VAR_12.rdb_pipe_read);
            FUNC_24(VAR_12.rdb_pipe_conns);
            VAR_12.rdb_pipe_conns = ((void*)0);
            VAR_12.rdb_pipe_numconns = 0;
            VAR_12.rdb_pipe_numconns_writing = 0;
            FUNC_3();
        } else {
            FUNC_20(VAR_5,"Background RDB transfer started by pid %d",
                VAR_16);
            VAR_12.rdb_save_time_start = FUNC_23(((void*)0));
            VAR_12.rdb_child_pid = VAR_16;
            VAR_12.rdb_child_type = VAR_7;
            FUNC_2(VAR_12.rdb_pipe_write);
            if (FUNC_0(VAR_12.el, VAR_12.rdb_pipe_read, VAR_1, VAR_11,((void*)0)) == VAR_0) {
                FUNC_21("Unrecoverable error creating server.rdb_pipe_read file event.");
            }
        }
        return (VAR_16 == -1) ? VAR_3 : VAR_4;
    }
    return VAR_4;
}
