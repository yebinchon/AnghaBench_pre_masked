
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_6__ {scalar_t__ configEpoch; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_7__ {TYPE_1__* cluster; } ;
struct TYPE_5__ {scalar_t__ currentEpoch; int nodes; } ;


 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_0 ;

uint64_t FUNC_4(void) {
    uint64_t VAR_1 = 0;
    dictIterator *VAR_2;
    dictEntry *VAR_3;

    VAR_2 = FUNC_0(VAR_0.cluster->nodes);
    while((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
        clusterNode *VAR_4 = FUNC_1(VAR_3);
        if (VAR_4->configEpoch > VAR_1) VAR_1 = VAR_4->configEpoch;
    }
    FUNC_3(VAR_2);
    if (VAR_1 < VAR_0.cluster->currentEpoch) VAR_1 = VAR_0.cluster->currentEpoch;
    return VAR_1;
}
