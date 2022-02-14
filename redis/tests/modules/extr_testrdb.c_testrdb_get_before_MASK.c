
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

int FUNC_4(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4)
{
    FUNC_0(VAR_3);
    if (VAR_4 != 1){
        FUNC_3(VAR_2);
        return VAR_0;
    }
    if (VAR_1)
        FUNC_1(VAR_2, VAR_1);
    else
        FUNC_2(VAR_2, "", 0);
    return VAR_0;
}
