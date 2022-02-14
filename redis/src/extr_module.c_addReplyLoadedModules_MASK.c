
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RedisModule {int ver; } ;
typedef int sds ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int client ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 struct RedisModule* FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 int FUNC_11 (int ) ;

void FUNC_12(client *VAR_1) {
    dictIterator *VAR_2 = FUNC_5(VAR_0);
    dictEntry *VAR_3;

    FUNC_0(VAR_1,FUNC_10(VAR_0));
    while ((VAR_3 = FUNC_8(VAR_2)) != ((void*)0)) {
        sds VAR_4 = FUNC_6(VAR_3);
        struct RedisModule *VAR_5 = FUNC_7(VAR_3);
        FUNC_4(VAR_1,2);
        FUNC_2(VAR_1,"name");
        FUNC_1(VAR_1,VAR_4,FUNC_11(VAR_4));
        FUNC_2(VAR_1,"ver");
        FUNC_3(VAR_1,VAR_5->ver);
    }
    FUNC_9(VAR_2);
}
