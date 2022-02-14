
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_3(RedisModuleCtx *VAR_10, RedisModuleString **VAR_11, int VAR_12) {
    FUNC_0(VAR_11);
    FUNC_0(VAR_12);
    if (FUNC_2(VAR_10,"misc",1,VAR_0)== VAR_1)
        return VAR_1;

    if (FUNC_1(VAR_10,"test.call_generic", VAR_3,"",0,0,0) == VAR_1)
        return VAR_1;
    if (FUNC_1(VAR_10,"test.call_info", VAR_4,"",0,0,0) == VAR_1)
        return VAR_1;
    if (FUNC_1(VAR_10,"test.flushall", VAR_6,"",0,0,0) == VAR_1)
        return VAR_1;
    if (FUNC_1(VAR_10,"test.dbsize", VAR_5,"",0,0,0) == VAR_1)
        return VAR_1;
    if (FUNC_1(VAR_10,"test.randomkey", VAR_8,"",0,0,0) == VAR_1)
        return VAR_1;
    if (FUNC_1(VAR_10,"test.setlru", VAR_9,"",0,0,0) == VAR_1)
        return VAR_1;
    if (FUNC_1(VAR_10,"test.getlru", VAR_7,"",0,0,0) == VAR_1)
        return VAR_1;

    return VAR_2;
}
