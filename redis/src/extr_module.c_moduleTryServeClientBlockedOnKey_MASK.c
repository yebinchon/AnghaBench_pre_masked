
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int robj ;
struct TYPE_9__ {TYPE_4__* module_blocked_handle; } ;
struct TYPE_10__ {int argc; scalar_t__ argv; TYPE_1__ bpop; } ;
typedef TYPE_2__ client ;
struct TYPE_12__ {scalar_t__ (* reply_callback ) (TYPE_3__*,void**,int ) ;int client; int module; int privdata; scalar_t__ unblocked; } ;
struct TYPE_11__ {TYPE_4__* blocked_client; int client; int module; int blocked_privdata; int * blocked_ready_key; int flags; } ;
typedef TYPE_3__ RedisModuleCtx ;
typedef TYPE_4__ RedisModuleBlockedClient ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,void**,int ) ;

int FUNC_2(client *VAR_4, robj *VAR_5) {
    int VAR_6 = 0;
    RedisModuleBlockedClient *VAR_7 = VAR_4->bpop.module_blocked_handle;



    if (VAR_7->unblocked) return VAR_2;
    RedisModuleCtx VAR_8 = VAR_1;
    VAR_8.flags |= VAR_0;
    VAR_8.blocked_ready_key = VAR_5;
    VAR_8.blocked_privdata = VAR_7->privdata;
    VAR_8.module = VAR_7->module;
    VAR_8.client = VAR_7->client;
    VAR_8.blocked_client = VAR_7;
    if (VAR_7->reply_callback(&VAR_8,(void**)VAR_4->argv,VAR_4->argc) == VAR_3)
        VAR_6 = 1;
    FUNC_0(&VAR_8);
    return VAR_6;
}
