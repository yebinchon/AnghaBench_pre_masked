
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int down_after_period; int * sentinels; int * slaves; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;


 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(sentinelRedisInstance *VAR_0) {
    dictIterator *VAR_1;
    dictEntry *VAR_2;
    int VAR_3;
    dict *VAR_4[] = {VAR_0->slaves, VAR_0->sentinels, ((void*)0)};

    for (VAR_3 = 0; VAR_4[VAR_3]; VAR_3++) {
        VAR_1 = FUNC_0(VAR_4[VAR_3]);
        while((VAR_2 = FUNC_2(VAR_1)) != ((void*)0)) {
            sentinelRedisInstance *VAR_5 = FUNC_1(VAR_2);
            VAR_5->down_after_period = VAR_0->down_after_period;
        }
        FUNC_3(VAR_1);
    }
}
