
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCmdFunc ;
typedef int RedisModuleBlockedClient ;


 int * FUNC_0 (int *,int ,int ,void (*) (int *,void*),long long,int **,int,void*) ;

RedisModuleBlockedClient *FUNC_1(RedisModuleCtx *VAR_0, RedisModuleCmdFunc VAR_1, RedisModuleCmdFunc VAR_2, void (*VAR_3)(RedisModuleCtx*,void*), long long VAR_4, RedisModuleString **VAR_5, int VAR_6, void *VAR_7) {
    return FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3,VAR_4, VAR_5,VAR_6,VAR_7);
}
