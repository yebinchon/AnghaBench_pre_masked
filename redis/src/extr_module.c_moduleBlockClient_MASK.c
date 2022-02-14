
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef scalar_t__ mstime_t ;
struct TYPE_19__ {TYPE_7__* module_blocked_handle; scalar_t__ timeout; } ;
struct TYPE_21__ {int flags; TYPE_3__ bpop; TYPE_2__* db; } ;
typedef TYPE_5__ client ;
struct TYPE_22__ {void (* free_privdata ) (TYPE_4__*,void*) ;scalar_t__ unblocked; int blocked_on_keys; int dbid; TYPE_12__* reply_client; void* privdata; int * disconnect_callback; void* timeout_callback; void* reply_callback; TYPE_1__* module; TYPE_5__* client; } ;
struct TYPE_20__ {TYPE_1__* module; TYPE_5__* client; } ;
struct TYPE_18__ {int id; } ;
struct TYPE_17__ {int blocked_clients; } ;
struct TYPE_16__ {int flags; } ;
typedef int RedisModuleString ;
typedef TYPE_4__ RedisModuleCtx ;
typedef void* RedisModuleCmdFunc ;
typedef TYPE_7__ RedisModuleBlockedClient ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int **,int,scalar_t__,int *,int *) ;
 TYPE_12__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 TYPE_7__* FUNC_5 (int) ;

RedisModuleBlockedClient *FUNC_6(RedisModuleCtx *VAR_4, RedisModuleCmdFunc VAR_5, RedisModuleCmdFunc VAR_6, void (*VAR_7)(RedisModuleCtx*,void*), long long VAR_8, RedisModuleString **VAR_9, int VAR_10, void *VAR_11) {
    client *VAR_12 = VAR_4->client;
    int VAR_13 = VAR_12->flags & VAR_1;
    int VAR_14 = VAR_12->flags & VAR_3;

    VAR_12->bpop.module_blocked_handle = FUNC_5(sizeof(RedisModuleBlockedClient));
    RedisModuleBlockedClient *VAR_15 = VAR_12->bpop.module_blocked_handle;
    VAR_4->module->blocked_clients++;





    mstime_t VAR_16 = VAR_8 ? (FUNC_4()+VAR_8) : 0;
    VAR_15->client = (VAR_13 || VAR_14) ? ((void*)0) : VAR_12;
    VAR_15->module = VAR_4->module;
    VAR_15->reply_callback = VAR_5;
    VAR_15->timeout_callback = VAR_6;
    VAR_15->disconnect_callback = ((void*)0);
    VAR_15->free_privdata = VAR_7;
    VAR_15->privdata = VAR_11;
    VAR_15->reply_client = FUNC_3(((void*)0));
    VAR_15->reply_client->flags |= VAR_2;
    VAR_15->dbid = VAR_12->db->id;
    VAR_15->blocked_on_keys = VAR_9 != ((void*)0);
    VAR_15->unblocked = 0;
    VAR_12->bpop.timeout = VAR_16;

    if (VAR_13 || VAR_14) {
        VAR_12->bpop.module_blocked_handle = ((void*)0);
        FUNC_0(VAR_12, VAR_13 ?
            "Blocking module command called from Lua script" :
            "Blocking module command called from transaction");
    } else {
        if (VAR_9) {
            FUNC_2(VAR_12,VAR_0,VAR_9,VAR_10,VAR_16,((void*)0),((void*)0));
        } else {
            FUNC_1(VAR_12,VAR_0);
        }
    }
    return VAR_15;
}
