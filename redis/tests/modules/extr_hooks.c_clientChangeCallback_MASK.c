
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int id; } ;
typedef int RedisModuleEvent ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ RedisModuleClientInfo ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

void FUNC_2(RedisModuleCtx *VAR_1, RedisModuleEvent VAR_2, uint64_t VAR_3, void *VAR_4)
{
    FUNC_1(VAR_2);

    RedisModuleClientInfo *VAR_5 = VAR_4;
    char *VAR_6 = (VAR_3 == VAR_0) ?
        "client-connected" : "client-disconnected";
    FUNC_0(VAR_1, VAR_6, VAR_5->id);
}
