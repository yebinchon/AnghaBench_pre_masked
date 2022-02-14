
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int progress; } ;
typedef TYPE_1__ RedisModuleLoadingProgress ;
typedef int RedisModuleEvent ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

void FUNC_2(RedisModuleCtx *VAR_1, RedisModuleEvent VAR_2, uint64_t VAR_3, void *VAR_4)
{
    FUNC_1(VAR_2);

    RedisModuleLoadingProgress *VAR_5 = VAR_4;
    char *VAR_6 = (VAR_3 == VAR_0) ?
        "loading-progress-rdb" : "loading-progress-aof";
    FUNC_0(VAR_1, VAR_6, VAR_5->progress);
}
