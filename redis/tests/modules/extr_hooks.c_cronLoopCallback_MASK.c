
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int hz; } ;
typedef int RedisModuleEvent ;
typedef int RedisModuleCtx ;
typedef TYPE_1__ RedisModuleCronLoop ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(RedisModuleCtx *VAR_0, RedisModuleEvent VAR_1, uint64_t VAR_2, void *VAR_3)
{
    FUNC_1(VAR_1);
    FUNC_1(VAR_2);

    RedisModuleCronLoop *VAR_4 = VAR_3;
    FUNC_0(VAR_0, "cron-loop", VAR_4->hz);
}
