
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int quorum; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_6__ {int masters; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_1 ;
 int FUNC_4 (int ,char*,TYPE_1__*,char*,int ) ;

void FUNC_5(void) {
    dictIterator *VAR_2;
    dictEntry *VAR_3;

    VAR_2 = FUNC_0(VAR_1.masters);
    while((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
        sentinelRedisInstance *VAR_4 = FUNC_1(VAR_3);
        FUNC_4(VAR_0,"+monitor",VAR_4,"%@ quorum %d",VAR_4->quorum);
    }
    FUNC_3(VAR_2);
}
