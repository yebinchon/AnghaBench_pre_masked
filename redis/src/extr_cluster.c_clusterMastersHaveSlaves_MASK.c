
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_7__ {scalar_t__ numslaves; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_8__ {TYPE_1__* cluster; } ;
struct TYPE_6__ {int nodes; } ;


 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_3__ VAR_0 ;

int FUNC_5(void) {
    dictIterator *VAR_1 = FUNC_0(VAR_0.cluster->nodes);
    dictEntry *VAR_2;
    int VAR_3 = 0;
    while((VAR_2 = FUNC_2(VAR_1)) != ((void*)0)) {
        clusterNode *VAR_4 = FUNC_1(VAR_2);

        if (FUNC_4(VAR_4)) continue;
        VAR_3 += VAR_4->numslaves;
    }
    FUNC_3(VAR_1);
    return VAR_3 != 0;
}
