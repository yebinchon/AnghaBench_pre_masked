
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ustime_t ;
struct redisCommand {int flags; int calls; int microseconds; int (* proc ) (TYPE_4__*) ;} ;
struct TYPE_14__ {int numops; TYPE_3__* ops; } ;
typedef TYPE_2__ redisOpArray ;
struct TYPE_15__ {int target; int argc; int argv; int dbid; struct redisCommand* cmd; } ;
typedef TYPE_3__ redisOp ;
struct TYPE_16__ {int flags; struct redisCommand* cmd; int argc; int argv; TYPE_1__* db; } ;
typedef TYPE_4__ client ;
struct TYPE_17__ {long long dirty; int ustime; int stat_numcommands; int call_depth; TYPE_4__* lua_caller; TYPE_2__ also_propagate; scalar_t__ loading; int monitors; } ;
struct TYPE_13__ {int id; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct redisCommand*,int ,int ,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ,int ) ;
 TYPE_8__ VAR_21 ;
 int FUNC_6 (TYPE_4__*,int ,int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;

void FUNC_11(client *VAR_22, int VAR_23) {
    long long VAR_24;
    ustime_t VAR_25, VAR_26;
    int VAR_27 = VAR_22->flags;
    struct redisCommand *VAR_28 = VAR_22->cmd;

    VAR_21.call_depth++;



    if (FUNC_1(VAR_21.monitors) &&
        !VAR_21.loading &&
        !(VAR_22->cmd->flags & (VAR_16|VAR_7)))
    {
        FUNC_5(VAR_22,VAR_21.monitors,VAR_22->db->id,VAR_22->argv,VAR_22->argc);
    }



    VAR_22->flags &= ~(VAR_0|VAR_1|VAR_4);
    redisOpArray VAR_29 = VAR_21.also_propagate;
    FUNC_4(&VAR_21.also_propagate);


    VAR_24 = VAR_21.dirty;
    FUNC_9(0);
    VAR_25 = VAR_21.ustime;
    VAR_22->cmd->proc(VAR_22);
    VAR_26 = FUNC_10()-VAR_25;
    VAR_24 = VAR_21.dirty-VAR_24;
    if (VAR_24 < 0) VAR_24 = 0;



    if (VAR_21.loading && VAR_22->flags & VAR_2)
        VAR_23 &= ~(VAR_11 | VAR_12);




    if (VAR_22->flags & VAR_2 && VAR_21.lua_caller) {
        if (VAR_22->flags & VAR_1)
            VAR_21.lua_caller->flags |= VAR_1;
        if (VAR_22->flags & VAR_0)
            VAR_21.lua_caller->flags |= VAR_0;
    }



    if (VAR_23 & VAR_11 && !(VAR_22->cmd->flags & VAR_17)) {
        char *VAR_30 = (VAR_22->cmd->flags & VAR_13) ?
                              "fast-command" : "command";
        FUNC_0(VAR_30,VAR_26/1000);
        FUNC_6(VAR_22,VAR_22->argv,VAR_22->argc,VAR_26);
    }

    if (VAR_23 & VAR_12) {



        VAR_28->microseconds += VAR_26;
        VAR_28->calls++;
    }


    if (VAR_23 & VAR_8 &&
        (VAR_22->flags & VAR_4) != VAR_4)
    {
        int VAR_31 = VAR_19;



        if (VAR_24) VAR_31 |= (VAR_18|VAR_20);



        if (VAR_22->flags & VAR_1) VAR_31 |= VAR_20;
        if (VAR_22->flags & VAR_0) VAR_31 |= VAR_18;




        if (VAR_22->flags & VAR_5 ||
            !(VAR_23 & VAR_10))
                VAR_31 &= ~VAR_20;
        if (VAR_22->flags & VAR_3 ||
            !(VAR_23 & VAR_9))
                VAR_31 &= ~VAR_18;




        if (VAR_31 != VAR_19 && !(VAR_22->cmd->flags & VAR_14))
            FUNC_2(VAR_22->cmd,VAR_22->db->id,VAR_22->argv,VAR_22->argc,VAR_31);
    }



    VAR_22->flags &= ~(VAR_0|VAR_1|VAR_4);
    VAR_22->flags |= VAR_27 &
        (VAR_0|VAR_1|VAR_4);




    if (VAR_21.also_propagate.numops) {
        int VAR_32;
        redisOp *VAR_33;

        if (VAR_23 & VAR_8) {
            for (VAR_32 = 0; VAR_32 < VAR_21.also_propagate.numops; VAR_32++) {
                VAR_33 = &VAR_21.also_propagate.ops[VAR_32];
                int VAR_34 = VAR_33->target;

                if (!(VAR_23&VAR_9)) VAR_34 &= ~VAR_18;
                if (!(VAR_23&VAR_10)) VAR_34 &= ~VAR_20;
                if (VAR_34)
                    FUNC_2(VAR_33->cmd,VAR_33->dbid,VAR_33->argv,VAR_33->argc,VAR_34);
            }
        }
        FUNC_3(&VAR_21.also_propagate);
    }
    VAR_21.also_propagate = VAR_29;



    if (VAR_22->cmd->flags & VAR_15) {
        client *VAR_35 = (VAR_22->flags & VAR_2 && VAR_21.lua_caller) ?
                            VAR_21.lua_caller : VAR_22;
        if (VAR_35->flags & VAR_6)
            FUNC_8(VAR_35);
    }

    VAR_21.call_depth--;
    VAR_21.stat_numcommands++;
}
