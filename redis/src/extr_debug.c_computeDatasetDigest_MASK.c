
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int * sds ;
typedef int robj ;
struct TYPE_4__ {int dict; } ;
typedef TYPE_1__ redisDb ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int aux ;
struct TYPE_5__ {int dbnum; TYPE_1__* db; } ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned char*,int ,int) ;
 int FUNC_10 (unsigned char*,int *,int) ;
 int FUNC_11 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_12 (unsigned char*,unsigned char*,int) ;
 int FUNC_13 (TYPE_1__*,int *,unsigned char*,int *) ;

void FUNC_14(unsigned char *VAR_1) {
    unsigned char VAR_2[20];
    dictIterator *VAR_3 = ((void*)0);
    dictEntry *VAR_4;
    int VAR_5;
    uint32_t VAR_6;

    FUNC_9(VAR_1,0,20);

    for (VAR_5 = 0; VAR_5 < VAR_0.dbnum; VAR_5++) {
        redisDb *VAR_7 = VAR_0.db+VAR_5;

        if (FUNC_7(VAR_7->dict) == 0) continue;
        VAR_3 = FUNC_3(VAR_7->dict);



        VAR_6 = FUNC_8(VAR_5);
        FUNC_10(VAR_1,&VAR_6,sizeof(VAR_6));


        while((VAR_4 = FUNC_5(VAR_3)) != ((void*)0)) {
            sds VAR_8;
            robj *VAR_9, *VAR_10;

            FUNC_9(VAR_2,0,20);
            VAR_8 = FUNC_2(VAR_4);
            VAR_9 = FUNC_0(VAR_8,FUNC_11(VAR_8));

            FUNC_10(VAR_2,VAR_8,FUNC_11(VAR_8));

            VAR_10 = FUNC_4(VAR_4);
            FUNC_13(VAR_7,VAR_9,VAR_2,VAR_10);


            FUNC_12(VAR_1,VAR_2,20);
            FUNC_1(VAR_9);
        }
        FUNC_6(VAR_3);
    }
}
