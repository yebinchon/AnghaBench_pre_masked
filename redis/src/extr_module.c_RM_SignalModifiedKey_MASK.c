
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* client; } ;
struct TYPE_4__ {int db; } ;
typedef int RedisModuleString ;
typedef TYPE_2__ RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

int FUNC_1(RedisModuleCtx *VAR_1, RedisModuleString *VAR_2) {
    FUNC_0(VAR_1->client->db,VAR_2);
    return VAR_0;
}
