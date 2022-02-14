
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ sentinelRedisInstance ;
typedef int dictIterator ;
typedef int dictEntry ;
typedef int client ;
struct TYPE_5__ {int masters; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 TYPE_2__ VAR_0 ;

void FUNC_8(client *VAR_1) {
    dictIterator *VAR_2;
    dictEntry *VAR_3;

    FUNC_0(VAR_1,2);
    FUNC_1(VAR_1,"sentinel",8);
    FUNC_0(VAR_1,FUNC_7(VAR_0.masters));

    VAR_2 = FUNC_3(VAR_0.masters);
    while((VAR_3 = FUNC_5(VAR_2)) != ((void*)0)) {
        sentinelRedisInstance *VAR_4 = FUNC_4(VAR_3);

        FUNC_2(VAR_1,VAR_4->name);
    }
    FUNC_6(VAR_2);
}
