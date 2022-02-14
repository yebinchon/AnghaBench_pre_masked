
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef void* RedisModuleEvent ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_0 ;

void FUNC_2(RedisModuleCtx *VAR_1, RedisModuleEvent VAR_2, uint64_t VAR_3, void *VAR_4)
{
    FUNC_1(VAR_2);
    FUNC_1(VAR_4);

    char *VAR_5 = (VAR_3 == VAR_0) ?
        "replica-online" : "replica-offline";
    FUNC_0(VAR_1, VAR_5, 0);
}
