
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,char*,int,int ) ;

int FUNC_3(RedisModuleCtx *VAR_5, RedisModuleString **VAR_6, int VAR_7) {
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);

    if (FUNC_2(VAR_5,"helloblock",1,VAR_2)
        == VAR_3) return VAR_3;

    if (FUNC_1(VAR_5,"hello.block",
        VAR_0,"",0,0,0) == VAR_3)
        return VAR_3;
    if (FUNC_1(VAR_5,"hello.keys",
        VAR_1,"",0,0,0) == VAR_3)
        return VAR_3;

    return VAR_4;
}
