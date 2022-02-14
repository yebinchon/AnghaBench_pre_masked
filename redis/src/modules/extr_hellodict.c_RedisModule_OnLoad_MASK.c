
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
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_4(RedisModuleCtx *VAR_7, RedisModuleString **VAR_8, int VAR_9) {
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);

    if (FUNC_3(VAR_7,"hellodict",1,VAR_1)
        == VAR_2) return VAR_2;

    if (FUNC_1(VAR_7,"hellodict.set",
        VAR_6,"write deny-oom",1,1,0) == VAR_2)
        return VAR_2;

    if (FUNC_1(VAR_7,"hellodict.get",
        VAR_4,"readonly",1,1,0) == VAR_2)
        return VAR_2;

    if (FUNC_1(VAR_7,"hellodict.keyrange",
        VAR_5,"readonly",1,1,0) == VAR_2)
        return VAR_2;


    VAR_0 = FUNC_2(((void*)0));

    return VAR_3;
}
