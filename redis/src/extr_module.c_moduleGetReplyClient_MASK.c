
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int client ;
struct TYPE_5__ {int flags; int * client; TYPE_1__* blocked_client; } ;
struct TYPE_4__ {int * reply_client; } ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;

client *FUNC_0(RedisModuleCtx *VAR_1) {
    if (VAR_1->flags & VAR_0) {
        if (VAR_1->blocked_client)
            return VAR_1->blocked_client->reply_client;
        else
            return ((void*)0);
    } else {




        return VAR_1->client;
    }
}
