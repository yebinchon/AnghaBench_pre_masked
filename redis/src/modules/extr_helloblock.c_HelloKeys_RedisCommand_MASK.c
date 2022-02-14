
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleBlockedClient ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *) ;

int FUNC_6(RedisModuleCtx *VAR_2, RedisModuleString **VAR_3, int VAR_4) {
    FUNC_0(VAR_3);
    if (VAR_4 != 1) return FUNC_4(VAR_2);

    pthread_t VAR_5;




    RedisModuleBlockedClient *VAR_6 = FUNC_2(VAR_2,((void*)0),((void*)0),((void*)0),0);




    if (FUNC_5(&VAR_5,((void*)0),VAR_0,VAR_6) != 0) {
        FUNC_1(VAR_6);
        return FUNC_3(VAR_2,"-ERR Can't start thread");
    }
    return VAR_1;
}
