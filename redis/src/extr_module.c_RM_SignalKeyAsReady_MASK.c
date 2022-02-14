
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


 int FUNC_0 (int ,int *) ;

void FUNC_1(RedisModuleCtx *VAR_0, RedisModuleString *VAR_1) {
    FUNC_0(VAR_0->client->db, VAR_1);
}
