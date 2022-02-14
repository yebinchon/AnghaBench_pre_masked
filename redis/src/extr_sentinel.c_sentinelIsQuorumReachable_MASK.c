
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ quorum; int sentinels; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(sentinelRedisInstance *VAR_5, int *VAR_6) {
    dictIterator *VAR_7;
    dictEntry *VAR_8;
    int VAR_9 = 1;
    int VAR_10 = VAR_2;
    int VAR_11 = FUNC_4(VAR_5->sentinels)+1;

    VAR_7 = FUNC_0(VAR_5->sentinels);
    while((VAR_8 = FUNC_2(VAR_7)) != ((void*)0)) {
        sentinelRedisInstance *VAR_12 = FUNC_1(VAR_8);

        if (VAR_12->flags & (VAR_4|VAR_3)) continue;
        VAR_9++;
    }
    FUNC_3(VAR_7);

    if (VAR_9 < (int)VAR_5->quorum) VAR_10 |= VAR_1;
    if (VAR_9 < VAR_11/2+1) VAR_10 |= VAR_0;
    if (VAR_6) *VAR_6 = VAR_9;
    return VAR_10;
}
