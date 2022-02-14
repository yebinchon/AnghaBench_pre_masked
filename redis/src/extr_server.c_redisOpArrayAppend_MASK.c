
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct redisCommand {int dummy; } ;
typedef int robj ;
struct TYPE_6__ {int numops; TYPE_2__* ops; } ;
typedef TYPE_1__ redisOpArray ;
struct TYPE_7__ {int dbid; int argc; int target; int ** argv; struct redisCommand* cmd; } ;
typedef TYPE_2__ redisOp ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;

int FUNC_1(redisOpArray *VAR_0, struct redisCommand *VAR_1, int VAR_2,
                       robj **VAR_3, int VAR_4, int VAR_5)
{
    redisOp *VAR_6;

    VAR_0->ops = FUNC_0(VAR_0->ops,sizeof(redisOp)*(VAR_0->numops+1));
    VAR_6 = VAR_0->ops+VAR_0->numops;
    VAR_6->cmd = VAR_1;
    VAR_6->dbid = VAR_2;
    VAR_6->argv = VAR_3;
    VAR_6->argc = VAR_4;
    VAR_6->target = VAR_5;
    VAR_0->numops++;
    return VAR_0->numops;
}
