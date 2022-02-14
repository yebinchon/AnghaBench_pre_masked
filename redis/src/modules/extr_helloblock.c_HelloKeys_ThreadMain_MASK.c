
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RedisModuleString ;
typedef int RedisModuleCtx ;
typedef int RedisModuleCallReply ;
typedef int RedisModuleBlockedClient ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,char*,long long) ;
 int * FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,long long*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;

void *FUNC_15(void *VAR_1) {
    RedisModuleBlockedClient *VAR_2 = VAR_1;
    RedisModuleCtx *VAR_3 = FUNC_7(VAR_2);
    long long VAR_4 = 0;
    size_t VAR_5 = 0;

    FUNC_9(VAR_3,VAR_0);
    do {
        FUNC_12(VAR_3);
        RedisModuleCallReply *VAR_6 = FUNC_0(VAR_3,
            "SCAN","l",(long long)VAR_4);
        FUNC_13(VAR_3);

        RedisModuleCallReply *VAR_7 =
            FUNC_1(VAR_6,0);
        RedisModuleCallReply *VAR_8 =
            FUNC_1(VAR_6,1);

        RedisModuleString *VAR_9 = FUNC_3(VAR_7);
        FUNC_11(VAR_9,&VAR_4);
        FUNC_5(VAR_3,VAR_9);

        size_t VAR_10 = FUNC_2(VAR_8);
        for (size_t VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            RedisModuleCallReply *VAR_12 =
                FUNC_1(VAR_8,VAR_11);
            FUNC_10(VAR_3,VAR_12);
            VAR_5++;
        }
        FUNC_4(VAR_6);
    } while (VAR_4 != 0);
    FUNC_8(VAR_3,VAR_5);

    FUNC_6(VAR_3);
    FUNC_14(VAR_2,((void*)0));
    return ((void*)0);
}
