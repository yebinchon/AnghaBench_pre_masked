
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** argv; } ;
struct TYPE_6__ {TYPE_3__* client; } ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,char*) ;

int FUNC_1(RedisModuleCtx *VAR_1) {
    FUNC_0(VAR_1->client,
        "wrong number of arguments for '%s' command",
        (char*)VAR_1->client->argv[0]->ptr);
    return VAR_0;
}
