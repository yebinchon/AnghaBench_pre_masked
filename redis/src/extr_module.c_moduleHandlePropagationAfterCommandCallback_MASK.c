
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_9__ {int target; int argc; int argv; int dbid; int cmd; } ;
typedef TYPE_2__ redisOp ;
struct TYPE_10__ {int flags; TYPE_1__* db; } ;
typedef TYPE_3__ client ;
struct TYPE_13__ {int numops; TYPE_2__* ops; } ;
struct TYPE_12__ {TYPE_6__ also_propagate; int execCommand; } ;
struct TYPE_11__ {int flags; TYPE_6__ saved_oparray; TYPE_3__* client; } ;
struct TYPE_8__ {int id; } ;
typedef TYPE_4__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int **,int,int) ;
 int * FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_5__ VAR_5 ;

void FUNC_5(RedisModuleCtx *VAR_6) {
    client *VAR_7 = VAR_6->client;



    if (!(VAR_6->flags & VAR_4)) return;

    if (VAR_7->flags & VAR_0) return;



    robj *VAR_8[1];
    VAR_8[0] = FUNC_1("EXEC",4);
    FUNC_0(VAR_5.execCommand,VAR_7->db->id,VAR_8,1,
        VAR_1|VAR_2);
    FUNC_2(VAR_8[0]);





    if (!(VAR_6->flags & VAR_3) &&
        VAR_5.also_propagate.numops)
    {
        for (int VAR_9 = 0; VAR_9 < VAR_5.also_propagate.numops; VAR_9++) {
            redisOp *VAR_10 = &VAR_5.also_propagate.ops[VAR_9];
            int VAR_11 = VAR_10->target;
            if (VAR_11)
                FUNC_3(VAR_10->cmd,VAR_10->dbid,VAR_10->argv,VAR_10->argc,VAR_11);
        }
        FUNC_4(&VAR_5.also_propagate);

        VAR_5.also_propagate = VAR_6->saved_oparray;
    }
}
