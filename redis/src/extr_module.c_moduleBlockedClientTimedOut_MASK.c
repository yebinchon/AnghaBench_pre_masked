
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* module_blocked_handle; } ;
struct TYPE_10__ {int argc; scalar_t__ argv; TYPE_1__ bpop; } ;
typedef TYPE_2__ client ;
struct TYPE_12__ {int * disconnect_callback; int (* timeout_callback ) (TYPE_3__*,void**,int ) ;int client; int module; } ;
struct TYPE_11__ {TYPE_4__* blocked_client; int client; int module; int flags; } ;
typedef TYPE_3__ RedisModuleCtx ;
typedef TYPE_4__ RedisModuleBlockedClient ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,void**,int ) ;

void FUNC_2(client *VAR_2) {
    RedisModuleBlockedClient *VAR_3 = VAR_2->bpop.module_blocked_handle;
    RedisModuleCtx VAR_4 = VAR_1;
    VAR_4.flags |= VAR_0;
    VAR_4.module = VAR_3->module;
    VAR_4.client = VAR_3->client;
    VAR_4.blocked_client = VAR_3;
    VAR_3->timeout_callback(&VAR_4,(void**)VAR_2->argv,VAR_2->argc);
    FUNC_0(&VAR_4);



    VAR_3->disconnect_callback = ((void*)0);
}
