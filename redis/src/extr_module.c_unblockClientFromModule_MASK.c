
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* module_blocked_handle; } ;
struct TYPE_12__ {TYPE_1__ bpop; } ;
typedef TYPE_2__ client ;
struct TYPE_14__ {int * client; int (* disconnect_callback ) (TYPE_3__*,TYPE_4__*) ;int module; int privdata; } ;
struct TYPE_13__ {int * client; int module; int blocked_privdata; } ;
typedef TYPE_3__ RedisModuleCtx ;
typedef TYPE_4__ RedisModuleBlockedClient ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;

void FUNC_3(client *VAR_1) {
    RedisModuleBlockedClient *VAR_2 = VAR_1->bpop.module_blocked_handle;


    if (VAR_2->disconnect_callback) {
        RedisModuleCtx VAR_3 = VAR_0;
        VAR_3.blocked_privdata = VAR_2->privdata;
        VAR_3.module = VAR_2->module;
        VAR_3.client = VAR_2->client;
        VAR_2->disconnect_callback(&VAR_3,VAR_2);
        FUNC_0(&VAR_3);
    }

    VAR_2->client = ((void*)0);




    FUNC_1(VAR_1);
}
