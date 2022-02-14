
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int empty ;
struct TYPE_15__ {int id; } ;
struct TYPE_14__ {TYPE_1__* client; int dbid; int module; } ;
struct TYPE_13__ {TYPE_5__* client; int flags; int module; TYPE_3__* blocked_client; } ;
struct TYPE_12__ {int id; } ;
typedef TYPE_2__ RedisModuleCtx ;
typedef TYPE_3__ RedisModuleBlockedClient ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 TYPE_2__* FUNC_3 (int) ;

RedisModuleCtx *FUNC_4(RedisModuleBlockedClient *VAR_2) {
    RedisModuleCtx *VAR_3 = FUNC_3(sizeof(*VAR_3));
    RedisModuleCtx VAR_4 = VAR_0;
    FUNC_1(VAR_3,&VAR_4,sizeof(VAR_4));
    if (VAR_2) {
        VAR_3->blocked_client = VAR_2;
        VAR_3->module = VAR_2->module;
    }
    VAR_3->flags |= VAR_1;




    VAR_3->client = FUNC_0(((void*)0));
    if (VAR_2) {
        FUNC_2(VAR_3->client,VAR_2->dbid);
        if (VAR_2->client) VAR_3->client->id = VAR_2->client->id;
    }
    return VAR_3;
}
