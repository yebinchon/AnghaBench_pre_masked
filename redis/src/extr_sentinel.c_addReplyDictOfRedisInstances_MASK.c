
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;
typedef int client ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(client *VAR_0, dict *VAR_1) {
    dictIterator *VAR_2;
    dictEntry *VAR_3;

    VAR_2 = FUNC_2(VAR_1);
    FUNC_0(VAR_0,FUNC_6(VAR_1));
    while((VAR_3 = FUNC_4(VAR_2)) != ((void*)0)) {
        sentinelRedisInstance *VAR_4 = FUNC_3(VAR_3);

        FUNC_1(VAR_0,VAR_4);
    }
    FUNC_5(VAR_2);
}
