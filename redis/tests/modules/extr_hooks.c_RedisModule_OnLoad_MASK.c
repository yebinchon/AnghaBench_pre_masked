
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int *,char*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

int FUNC_5(RedisModuleCtx *VAR_29, RedisModuleString **VAR_30, int VAR_31) {
    FUNC_0(VAR_30);
    FUNC_0(VAR_31);

    if (FUNC_3(VAR_29,"testhook",1,VAR_0)
        == VAR_1) return VAR_1;


    FUNC_4(VAR_29,
        VAR_12, VAR_27);
    FUNC_4(VAR_29,
        VAR_11, VAR_26);
    FUNC_4(VAR_29,
        VAR_8, VAR_25);


    FUNC_4(VAR_29,
        VAR_10, VAR_24);
    FUNC_4(VAR_29,
        VAR_6, VAR_21);
    FUNC_4(VAR_29,
        VAR_7, VAR_22);


    FUNC_4(VAR_29,
        VAR_3, VAR_14);
    FUNC_4(VAR_29,
        VAR_5, VAR_20);
    FUNC_4(VAR_29,
        VAR_13, VAR_28);
    FUNC_4(VAR_29,
        VAR_4, VAR_18);
    FUNC_4(VAR_29,
        VAR_9, VAR_23);

    VAR_19 = FUNC_2(VAR_29);

    if (FUNC_1(VAR_29,"hooks.event_count", VAR_15,"",0,0,0) == VAR_1)
        return VAR_1;
    if (FUNC_1(VAR_29,"hooks.event_last", VAR_16,"",0,0,0) == VAR_1)
        return VAR_1;
    if (FUNC_1(VAR_29,"hooks.clear", VAR_17,"",0,0,0) == VAR_1)
        return VAR_1;

    return VAR_2;
}
