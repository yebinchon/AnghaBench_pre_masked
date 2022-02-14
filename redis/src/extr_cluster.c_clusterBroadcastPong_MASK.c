
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_9__ {int link; struct TYPE_9__* slaveof; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_10__ {TYPE_1__* cluster; } ;
struct TYPE_8__ {int nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_3__ VAR_3 ;

void FUNC_7(int VAR_4) {
    dictIterator *VAR_5;
    dictEntry *VAR_6;

    VAR_5 = FUNC_1(VAR_3.cluster->nodes);
    while((VAR_6 = FUNC_3(VAR_5)) != ((void*)0)) {
        clusterNode *VAR_7 = FUNC_2(VAR_6);

        if (!VAR_7->link) continue;
        if (VAR_7 == VAR_2 || FUNC_5(VAR_7)) continue;
        if (VAR_4 == VAR_1) {
            int VAR_8 =
                FUNC_6(VAR_7) && VAR_7->slaveof &&
                (VAR_7->slaveof == VAR_2 || VAR_7->slaveof == VAR_2->slaveof);
            if (!VAR_8) continue;
        }
        FUNC_0(VAR_7->link,VAR_0);
    }
    FUNC_4(VAR_5);
}
