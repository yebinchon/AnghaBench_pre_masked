
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef void* RedisModuleEvent ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (void*) ;





 int FUNC_2 (int *,char*,char*,char*) ;

void FUNC_3(RedisModuleCtx *VAR_0, RedisModuleEvent VAR_1, uint64_t VAR_2, void *VAR_3)
{
    FUNC_1(VAR_1);
    FUNC_1(VAR_3);

    char *VAR_4 = ((void*)0);
    switch (VAR_2) {
        case 129: VAR_4 = "persistence-rdb-start"; break;
        case 132: VAR_4 = "persistence-aof-start"; break;
        case 128: VAR_4 = "persistence-syncrdb-start"; break;
        case 131: VAR_4 = "persistence-end"; break;
        case 130: VAR_4 = "persistence-failed"; break;
    }

    FUNC_2(VAR_0, "warning", "module-event-%s", VAR_4);
    if (VAR_2 == 128)
        FUNC_0(VAR_0, VAR_4, 0);
}
