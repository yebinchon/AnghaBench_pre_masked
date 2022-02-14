
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct redisCommand {int flags; } ;
typedef int robj ;
struct TYPE_19__ {int cmd_flags; int count; TYPE_1__* commands; } ;
struct TYPE_21__ {int flags; size_t resp; int argc; int ** argv; TYPE_3__* db; struct redisCommand* cmd; TYPE_2__ mstate; } ;
typedef TYPE_4__ client ;
struct TYPE_23__ {int monitors; scalar_t__ loading; scalar_t__ repl_backlog; int dirty; int * masterhost; scalar_t__ repl_slave_ro; } ;
struct TYPE_22__ {int * nullarray; int execaborterr; } ;
struct TYPE_20__ {int id; } ;
struct TYPE_18__ {int argc; struct redisCommand* cmd; int ** argv; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,char*,char*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*,int ,int ,int **,int) ;
 TYPE_7__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_4__*) ;

void FUNC_13(client *VAR_13) {
    int VAR_14;
    robj **VAR_15;
    int VAR_16;
    struct redisCommand *VAR_17;
    int VAR_18 = 0;
    int VAR_19 = VAR_11.masterhost == ((void*)0);

    if (!(VAR_13->flags & VAR_5)) {
        FUNC_3(VAR_13,"EXEC without MULTI");
        return;
    }







    if (VAR_13->flags & (VAR_2|VAR_3)) {
        FUNC_1(VAR_13, VAR_13->flags & VAR_3 ? VAR_12.execaborterr :
                                                   VAR_12.nullarray[VAR_13->resp]);
        FUNC_6(VAR_13);
        goto handle_monitor;
    }






    if (!VAR_11.loading && VAR_11.masterhost && VAR_11.repl_slave_ro &&
        !(VAR_13->flags & VAR_4) && VAR_13->mstate.cmd_flags & VAR_10)
    {
        FUNC_3(VAR_13,
            "Transaction contains write commands but instance "
            "is now a read-only replica. EXEC aborted.");
        FUNC_6(VAR_13);
        goto handle_monitor;
    }


    FUNC_12(VAR_13);
    VAR_15 = VAR_13->argv;
    VAR_16 = VAR_13->argc;
    VAR_17 = VAR_13->cmd;
    FUNC_2(VAR_13,VAR_13->mstate.count);
    for (VAR_14 = 0; VAR_14 < VAR_13->mstate.count; VAR_14++) {
        VAR_13->argc = VAR_13->mstate.commands[VAR_14].argc;
        VAR_13->argv = VAR_13->mstate.commands[VAR_14].argv;
        VAR_13->cmd = VAR_13->mstate.commands[VAR_14].cmd;






        if (!VAR_18 && !(VAR_13->cmd->flags & (VAR_9|VAR_6))) {
            FUNC_7(VAR_13);
            VAR_18 = 1;
        }

        int VAR_20 = FUNC_0(VAR_13);
        if (VAR_20 != VAR_1) {
            FUNC_4(VAR_13,
                "-NOPERM ACLs rules changed between the moment the "
                "transaction was accumulated and the EXEC call. "
                "This command is no longer allowed for the "
                "following reason: %s",
                (VAR_20 == VAR_0) ?
                "no permission to execute the command or subcommand" :
                "no permission to touch the specified keys");
        } else {
            FUNC_5(VAR_13,VAR_11.loading ? VAR_8 : VAR_7);
        }


        VAR_13->mstate.commands[VAR_14].argc = VAR_13->argc;
        VAR_13->mstate.commands[VAR_14].argv = VAR_13->argv;
        VAR_13->mstate.commands[VAR_14].cmd = VAR_13->cmd;
    }
    VAR_13->argv = VAR_15;
    VAR_13->argc = VAR_16;
    VAR_13->cmd = VAR_17;
    FUNC_6(VAR_13);



    if (VAR_18) {
        int VAR_21 = VAR_11.masterhost == ((void*)0);
        VAR_11.dirty++;





        if (VAR_11.repl_backlog && VAR_19 && !VAR_21) {
            char *VAR_22 = "*1\r\n$4\r\nEXEC\r\n";
            FUNC_8(VAR_22,FUNC_11(VAR_22));
        }
    }

handle_monitor:





    if (FUNC_9(VAR_11.monitors) && !VAR_11.loading)
        FUNC_10(VAR_13,VAR_11.monitors,VAR_13->db->id,VAR_13->argv,VAR_13->argc);
}
