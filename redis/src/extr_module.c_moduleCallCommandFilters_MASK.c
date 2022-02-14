
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
struct TYPE_11__ {int argc; int argv; } ;
typedef TYPE_3__ client ;
struct TYPE_13__ {int flags; int (* callback ) (TYPE_4__*) ;TYPE_1__* module; } ;
struct TYPE_12__ {int argc; int argv; } ;
struct TYPE_9__ {scalar_t__ in_call; } ;
typedef TYPE_4__ RedisModuleCommandFilterCtx ;
typedef TYPE_5__ RedisModuleCommandFilter ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_4__*) ;

void FUNC_4(client *VAR_2) {
    if (FUNC_0(VAR_1) == 0) return;

    listIter VAR_3;
    listNode *VAR_4;
    FUNC_2(VAR_1,&VAR_3);

    RedisModuleCommandFilterCtx VAR_5 = {
        .argv = VAR_2->argv,
        .argc = VAR_2->argc
    };

    while((VAR_4 = FUNC_1(&VAR_3))) {
        RedisModuleCommandFilter *VAR_6 = VAR_4->value;




        if ((VAR_6->flags & VAR_0) && VAR_6->module->in_call) continue;


        VAR_6->callback(&VAR_5);
    }

    VAR_2->argv = VAR_5.argv;
    VAR_2->argc = VAR_5.argc;
}
