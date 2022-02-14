
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int RedisModuleTimerID ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int ,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int*,int *,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(RedisModuleCtx *VAR_3, RedisModuleString **VAR_4, int VAR_5)
{
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    RedisModuleTimerID VAR_6 =
        FUNC_1(VAR_3,100,VAR_2,((void*)0));
    FUNC_0(VAR_6);

    pthread_t VAR_7;
    if (FUNC_4(&VAR_7,((void*)0),VAR_1,((void*)0)) != 0)
        return FUNC_2(VAR_3,"-ERR Can't start thread");
    FUNC_0(VAR_7);

    FUNC_3(VAR_3,"OK");
    return VAR_0;
}
