
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,int,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(RedisModuleCtx *VAR_1, RedisModuleString **VAR_2, int VAR_3) {
    FUNC_0(VAR_1);
    if (VAR_3 < 3) {
        return FUNC_4(VAR_1);
    }
    RedisModuleString *VAR_4 = FUNC_1(VAR_1,
        "Got %d args. argv[1]: %s, argv[2]: %s",
        VAR_3,
        FUNC_3(VAR_2[1], ((void*)0)),
        FUNC_3(VAR_2[2], ((void*)0))
    );

    FUNC_2(VAR_1,VAR_4);

    return VAR_0;
}
