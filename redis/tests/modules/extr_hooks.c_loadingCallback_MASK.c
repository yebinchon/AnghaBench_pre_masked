
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* RedisModuleEvent ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (void*) ;






void FUNC_2(RedisModuleCtx *VAR_0, RedisModuleEvent VAR_1, uint64_t VAR_2, void *VAR_3)
{
    FUNC_1(VAR_1);
    FUNC_1(VAR_3);

    char *VAR_4 = ((void*)0);
    switch (VAR_2) {
        case 129: VAR_4 = "loading-rdb-start"; break;
        case 132: VAR_4 = "loading-aof-start"; break;
        case 128: VAR_4 = "loading-repl-start"; break;
        case 131: VAR_4 = "loading-end"; break;
        case 130: VAR_4 = "loading-failed"; break;
    }
    FUNC_0(VAR_0, VAR_4, 0);
}
