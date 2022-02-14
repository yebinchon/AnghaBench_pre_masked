
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_10__ {int argc; int * argv; TYPE_2__* cmd; } ;
typedef TYPE_3__ multiCmd ;
struct TYPE_8__ {int count; int cmd_flags; TYPE_3__* commands; } ;
struct TYPE_11__ {int argc; TYPE_2__* cmd; TYPE_1__ mstate; int argv; } ;
typedef TYPE_4__ client ;
struct TYPE_9__ {int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,int) ;

void FUNC_4(client *VAR_0) {
    multiCmd *VAR_1;
    int VAR_2;

    VAR_0->mstate.commands = FUNC_3(VAR_0->mstate.commands,
            sizeof(multiCmd)*(VAR_0->mstate.count+1));
    VAR_1 = VAR_0->mstate.commands+VAR_0->mstate.count;
    VAR_1->cmd = VAR_0->cmd;
    VAR_1->argc = VAR_0->argc;
    VAR_1->argv = FUNC_2(sizeof(robj*)*VAR_0->argc);
    FUNC_1(VAR_1->argv,VAR_0->argv,sizeof(robj*)*VAR_0->argc);
    for (VAR_2 = 0; VAR_2 < VAR_0->argc; VAR_2++)
        FUNC_0(VAR_1->argv[VAR_2]);
    VAR_0->mstate.count++;
    VAR_0->mstate.cmd_flags |= VAR_0->cmd->flags;
}
