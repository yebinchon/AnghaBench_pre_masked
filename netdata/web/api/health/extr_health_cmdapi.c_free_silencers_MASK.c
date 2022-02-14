
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* families; struct TYPE_9__* hosts; struct TYPE_9__* contexts; struct TYPE_9__* charts; struct TYPE_9__* alarms; int families_pattern; int hosts_pattern; int contexts_pattern; int charts_pattern; int alarms_pattern; struct TYPE_9__* next; } ;
typedef TYPE_1__ SILENCER ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(SILENCER *VAR_1) {
    if (!VAR_1) return;
    if (VAR_1->next) FUNC_3(VAR_1->next);
    FUNC_0(VAR_0, "HEALTH command API: Freeing silencer %s:%s:%s:%s:%s", VAR_1->alarms,
          VAR_1->charts, VAR_1->contexts, VAR_1->hosts, VAR_1->families);
    FUNC_2(VAR_1->alarms_pattern);
    FUNC_2(VAR_1->charts_pattern);
    FUNC_2(VAR_1->contexts_pattern);
    FUNC_2(VAR_1->hosts_pattern);
    FUNC_2(VAR_1->families_pattern);
    FUNC_1(VAR_1->alarms);
    FUNC_1(VAR_1->charts);
    FUNC_1(VAR_1->contexts);
    FUNC_1(VAR_1->hosts);
    FUNC_1(VAR_1->families);
    FUNC_1(VAR_1);
    return;
}
