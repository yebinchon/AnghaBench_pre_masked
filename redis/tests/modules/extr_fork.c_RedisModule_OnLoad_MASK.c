
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_3(RedisModuleCtx *VAR_6, RedisModuleString **VAR_7, int VAR_8) {
    FUNC_2(VAR_7);
    FUNC_2(VAR_8);
    if (FUNC_1(VAR_6,"fork",1,VAR_0)== VAR_1)
        return VAR_1;

    if (FUNC_0(VAR_6,"fork.create", VAR_3,"",0,0,0) == VAR_1)
        return VAR_1;

    if (FUNC_0(VAR_6,"fork.exitcode", VAR_4,"",0,0,0) == VAR_1)
        return VAR_1;

    if (FUNC_0(VAR_6,"fork.kill", VAR_5,"",0,0,0) == VAR_1)
        return VAR_1;

    return VAR_2;
}
