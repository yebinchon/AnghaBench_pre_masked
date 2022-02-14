
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleKey ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;

int FUNC_8(RedisModuleCtx *VAR_3, RedisModuleString **VAR_4, int VAR_5)
{
    if (VAR_5 != 3){
        FUNC_7(VAR_3);
        return VAR_0;
    }

    RedisModuleKey *VAR_6 = FUNC_4(VAR_3, VAR_4[1], VAR_1);
    RedisModuleString *VAR_7 = FUNC_2(VAR_6);
    if (VAR_7)
        FUNC_1(VAR_3, VAR_7);
    FUNC_3(VAR_6, VAR_2, VAR_4[2]);
    FUNC_6(VAR_3, VAR_4[2]);
    FUNC_0(VAR_6);
    FUNC_5(VAR_3, 1);
    return VAR_0;
}
