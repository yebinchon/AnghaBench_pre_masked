
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void RedisModuleString ;
typedef int RedisModuleIO ;


 scalar_t__ FUNC_0 (int *) ;
 float FUNC_1 (int *) ;
 long double FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int) ;

void *FUNC_6(RedisModuleIO *VAR_0, int VAR_1) {
    int VAR_2 = FUNC_3(VAR_0);
    RedisModuleString *VAR_3 = FUNC_4(VAR_0);
    float VAR_4 = FUNC_1(VAR_0);
    long double VAR_5 = FUNC_2(VAR_0);
    if (FUNC_0(VAR_0))
        return ((void*)0);

    FUNC_5(VAR_2==1);
    FUNC_5(VAR_1==1);
    FUNC_5(VAR_4==1.5f);
    FUNC_5(VAR_5==0.333333333333333333L);
    return VAR_3;
}
