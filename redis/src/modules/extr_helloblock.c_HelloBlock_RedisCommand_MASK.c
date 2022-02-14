
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleBlockedClient ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 void** FUNC_1 (int) ;
 int * FUNC_2 (int *,int ,int ,int ,long long) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,long long*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int ,void**) ;

int FUNC_8(RedisModuleCtx *VAR_6, RedisModuleString **VAR_7, int VAR_8) {
    if (VAR_8 != 3) return FUNC_6(VAR_6);
    long long VAR_9;
    long long VAR_10;

    if (FUNC_5(VAR_7[1],&VAR_9) != VAR_5) {
        return FUNC_3(VAR_6,"ERR invalid count");
    }

    if (FUNC_5(VAR_7[2],&VAR_10) != VAR_5) {
        return FUNC_3(VAR_6,"ERR invalid count");
    }

    pthread_t VAR_11;
    RedisModuleBlockedClient *VAR_12 = FUNC_2(VAR_6,VAR_2,VAR_4,VAR_1,VAR_10);




    FUNC_4(VAR_12,VAR_0);




    void **VAR_13 = FUNC_1(sizeof(void*)*2);
    VAR_13[0] = VAR_12;
    VAR_13[1] = (void*)(unsigned long) VAR_9;

    if (FUNC_7(&VAR_11,((void*)0),VAR_3,VAR_13) != 0) {
        FUNC_0(VAR_12);
        return FUNC_3(VAR_6,"-ERR Can't start thread");
    }
    return VAR_5;
}
