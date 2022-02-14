
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(RedisModuleCtx *VAR_10, RedisModuleString **VAR_11, int VAR_12) {
    FUNC_0(VAR_11);
    FUNC_0(VAR_12);

    if (FUNC_2(VAR_10,"hellocluster",1,VAR_6)
        == VAR_8) return VAR_8;

    if (FUNC_1(VAR_10,"hellocluster.pingall",
        VAR_4,"readonly",0,0,0) == VAR_8)
        return VAR_8;

    if (FUNC_1(VAR_10,"hellocluster.list",
        VAR_0,"readonly",0,0,0) == VAR_8)
        return VAR_8;







    FUNC_4(VAR_10,VAR_7);


    FUNC_3(VAR_10,VAR_1,VAR_3);
    FUNC_3(VAR_10,VAR_2,VAR_5);
    return VAR_9;
}
