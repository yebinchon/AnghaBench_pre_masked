
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef void* RedisModuleEvent ;
typedef int RedisModuleCtx ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,char*,char*,char*) ;

void FUNC_2(RedisModuleCtx *VAR_0, RedisModuleEvent VAR_1, uint64_t VAR_2, void *VAR_3)
{
    FUNC_0(VAR_1);
    FUNC_0(VAR_3);
    FUNC_0(VAR_2);

    FUNC_1(VAR_0, "warning", "module-event-%s", "shutdown");
}
