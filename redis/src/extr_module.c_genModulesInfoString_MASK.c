
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RedisModule {int filters; int apiver; int ver; int using; int usedby; } ;
typedef int sds ;
typedef int dictIterator ;
typedef int dictEntry ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct RedisModule* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct RedisModule*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (int ,char*,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_9 (int ) ;

sds FUNC_10(sds VAR_1) {
    dictIterator *VAR_2 = FUNC_0(VAR_0);
    dictEntry *VAR_3;

    while ((VAR_3 = FUNC_3(VAR_2)) != ((void*)0)) {
        sds VAR_4 = FUNC_1(VAR_3);
        struct RedisModule *VAR_5 = FUNC_2(VAR_3);

        sds VAR_6 = FUNC_6(VAR_5->usedby);
        sds VAR_7 = FUNC_6(VAR_5->using);
        sds VAR_8 = FUNC_5(VAR_5);
        VAR_1 = FUNC_8(VAR_1,
            "module:name=%S,ver=%i,api=%i,filters=%i,"
            "usedby=%S,using=%S,options=%S\r\n",
                VAR_4, VAR_5->ver, VAR_5->apiver,
                (int)FUNC_7(VAR_5->filters), VAR_6, VAR_7, VAR_8);
        FUNC_9(VAR_6);
        FUNC_9(VAR_7);
        FUNC_9(VAR_8);
    }
    FUNC_4(VAR_2);
    return VAR_1;
}
