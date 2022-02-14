
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,long long) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,long long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

int FUNC_6(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3) {
    if (VAR_3 != 2) return FUNC_4(VAR_1);
    long long VAR_4;
    if (FUNC_3(VAR_2[1],&VAR_4) != VAR_0 ||
        VAR_4 < 0)
        return FUNC_1(VAR_1,"ERR invalid count");




    FUNC_0(VAR_1,VAR_4);
    while(VAR_4--) FUNC_2(VAR_1,FUNC_5());
    return VAR_0;
}
