
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
typedef int clusterNode ;
struct TYPE_4__ {TYPE_1__* cluster; } ;
struct TYPE_3__ {int nodes; int ** slots; int ** migrating_slots_to; int ** importing_slots_from; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__ VAR_1 ;

void FUNC_7(clusterNode *VAR_2) {
    int VAR_3;
    dictIterator *VAR_4;
    dictEntry *VAR_5;


    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (VAR_1.cluster->importing_slots_from[VAR_3] == VAR_2)
            VAR_1.cluster->importing_slots_from[VAR_3] = ((void*)0);
        if (VAR_1.cluster->migrating_slots_to[VAR_3] == VAR_2)
            VAR_1.cluster->migrating_slots_to[VAR_3] = ((void*)0);
        if (VAR_1.cluster->slots[VAR_3] == VAR_2)
            FUNC_0(VAR_3);
    }


    VAR_4 = FUNC_2(VAR_1.cluster->nodes);
    while((VAR_5 = FUNC_4(VAR_4)) != ((void*)0)) {
        clusterNode *VAR_6 = FUNC_3(VAR_5);

        if (VAR_6 == VAR_2) continue;
        FUNC_1(VAR_6,VAR_2);
    }
    FUNC_5(VAR_4);


    FUNC_6(VAR_2);
}
