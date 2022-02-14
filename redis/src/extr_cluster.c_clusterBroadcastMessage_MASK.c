
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_6__ {int flags; int link; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_7__ {TYPE_1__* cluster; } ;
struct TYPE_5__ {int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,size_t) ;
 int * FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__ VAR_2 ;

void FUNC_5(void *VAR_3, size_t VAR_4) {
    dictIterator *VAR_5;
    dictEntry *VAR_6;

    VAR_5 = FUNC_1(VAR_2.cluster->nodes);
    while((VAR_6 = FUNC_3(VAR_5)) != ((void*)0)) {
        clusterNode *VAR_7 = FUNC_2(VAR_6);

        if (!VAR_7->link) continue;
        if (VAR_7->flags & (VAR_1|VAR_0))
            continue;
        FUNC_0(VAR_7->link,VAR_3,VAR_4);
    }
    FUNC_4(VAR_5);
}
