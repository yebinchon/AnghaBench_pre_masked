
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ configEpoch; int name; } ;
typedef TYPE_2__ clusterNode ;
struct TYPE_9__ {TYPE_1__* cluster; } ;
struct TYPE_7__ {scalar_t__ currentEpoch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_3 (int ,char*,int ,unsigned long long) ;

void FUNC_4(clusterNode *VAR_4) {

    if (VAR_4->configEpoch != VAR_2->configEpoch ||
        !FUNC_2(VAR_4) || !FUNC_2(VAR_2)) return;

    if (FUNC_1(VAR_4->name,VAR_2->name,VAR_0) <= 0) return;

    VAR_3.cluster->currentEpoch++;
    VAR_2->configEpoch = VAR_3.cluster->currentEpoch;
    FUNC_0(1);
    FUNC_3(VAR_1,
        "WARNING: configEpoch collision with node %.40s."
        " configEpoch set to %llu",
        VAR_4->name,
        (unsigned long long) VAR_2->configEpoch);
}
