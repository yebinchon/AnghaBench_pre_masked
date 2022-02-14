
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
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3(RedisModuleCtx *VAR_7, RedisModuleString **VAR_8, int VAR_9) {
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);

    if (FUNC_1(VAR_7,"hellohook",1,VAR_0)
        == VAR_1) return VAR_1;

    FUNC_2(VAR_7,
        VAR_3, VAR_5);
    FUNC_2(VAR_7,
        VAR_4, VAR_6);
    return VAR_2;
}
