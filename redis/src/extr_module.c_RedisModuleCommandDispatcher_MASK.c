
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int argc; TYPE_5__** argv; TYPE_1__* cmd; } ;
typedef TYPE_2__ client ;
struct TYPE_14__ {int refcount; } ;
struct TYPE_13__ {int (* func ) (TYPE_3__*,void**,int) ;int module; } ;
struct TYPE_12__ {TYPE_2__* client; int module; int flags; } ;
struct TYPE_10__ {scalar_t__ getkeys_proc; } ;
typedef TYPE_3__ RedisModuleCtx ;
typedef TYPE_4__ RedisModuleCommandProxy ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,void**,int) ;
 int FUNC_2 (TYPE_5__*) ;

void FUNC_3(client *VAR_2) {
    RedisModuleCommandProxy *VAR_3 = (void*)(unsigned long)VAR_2->cmd->getkeys_proc;
    RedisModuleCtx VAR_4 = VAR_0;

    VAR_4.flags |= VAR_1;
    VAR_4.module = VAR_3->module;
    VAR_4.client = VAR_2;
    VAR_3->func(&VAR_4,(void**)VAR_2->argv,VAR_2->argc);
    FUNC_0(&VAR_4);
    for (int VAR_5 = 0; VAR_5 < VAR_2->argc; VAR_5++) {


        if (VAR_2->argv[VAR_5]->refcount > 1)
            FUNC_2(VAR_2->argv[VAR_5]);
    }
}
