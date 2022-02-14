
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* client; } ;
struct TYPE_6__ {TYPE_1__* db; } ;
struct TYPE_5__ {int id; } ;
typedef int RedisModuleString ;
typedef TYPE_3__ RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int *,int ) ;

int FUNC_1(RedisModuleCtx *VAR_2, int VAR_3, const char *VAR_4, RedisModuleString *VAR_5) {
    if (!VAR_2 || !VAR_2->client)
        return VAR_0;
    FUNC_0(VAR_3, (char *)VAR_4, VAR_5, VAR_2->client->db->id);
    return VAR_1;
}
