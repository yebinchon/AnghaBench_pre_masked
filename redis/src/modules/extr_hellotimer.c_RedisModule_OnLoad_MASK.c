
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,char*,int,int ) ;
 int VAR_3 ;

int FUNC_3(RedisModuleCtx *VAR_4, RedisModuleString **VAR_5, int VAR_6) {
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);

    if (FUNC_2(VAR_4,"hellotimer",1,VAR_0)
        == VAR_1) return VAR_1;

    if (FUNC_1(VAR_4,"hellotimer.timer",
        VAR_3,"readonly",0,0,0) == VAR_1)
        return VAR_1;

    return VAR_2;
}
