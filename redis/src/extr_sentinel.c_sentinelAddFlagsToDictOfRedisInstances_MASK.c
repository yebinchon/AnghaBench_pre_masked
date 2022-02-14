
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(dict *VAR_0, int VAR_1) {
    dictIterator *VAR_2;
    dictEntry *VAR_3;

    VAR_2 = FUNC_0(VAR_0);
    while((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
        sentinelRedisInstance *VAR_4 = FUNC_1(VAR_3);
        VAR_4->flags |= VAR_1;
    }
    FUNC_3(VAR_2);
}
