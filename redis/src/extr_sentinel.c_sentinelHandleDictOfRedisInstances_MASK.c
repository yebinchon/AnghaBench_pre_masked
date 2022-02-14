
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ failover_state; int * sentinels; int * slaves; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int dict ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(dict *VAR_2) {
    dictIterator *VAR_3;
    dictEntry *VAR_4;
    sentinelRedisInstance *VAR_5 = ((void*)0);


    VAR_3 = FUNC_0(VAR_2);
    while((VAR_4 = FUNC_2(VAR_3)) != ((void*)0)) {
        sentinelRedisInstance *VAR_6 = FUNC_1(VAR_4);

        FUNC_5(VAR_6);
        if (VAR_6->flags & VAR_1) {
            FUNC_6(VAR_6->slaves);
            FUNC_6(VAR_6->sentinels);
            if (VAR_6->failover_state == VAR_0) {
                VAR_5 = VAR_6;
            }
        }
    }
    if (VAR_5)
        FUNC_4(VAR_5);
    FUNC_3(VAR_3);
}
