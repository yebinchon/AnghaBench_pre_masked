
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,char*,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int FUNC_3(RedisModuleCtx *VAR_4, RedisModuleString **VAR_5, int VAR_6) {
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    if (FUNC_1(VAR_4,"infotest",1,VAR_1)
            == VAR_2) return VAR_2;

    if (FUNC_2(VAR_4, VAR_0) == VAR_2) return VAR_2;

    return VAR_3;
}
