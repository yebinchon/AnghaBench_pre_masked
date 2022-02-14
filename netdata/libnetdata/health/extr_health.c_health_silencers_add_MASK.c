
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* silencers; } ;
struct TYPE_4__ {int families; int hosts; int contexts; int charts; int alarms; struct TYPE_4__* next; } ;
typedef TYPE_1__ SILENCER ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 TYPE_2__* VAR_1 ;

void FUNC_1(SILENCER *VAR_2) {

    VAR_2->next = VAR_1->silencers;
    VAR_1->silencers = VAR_2;
    FUNC_0(VAR_0, "HEALTH command API: Added silencer %s:%s:%s:%s:%s", VAR_2->alarms,
          VAR_2->charts, VAR_2->contexts, VAR_2->hosts, VAR_2->families
    );
}
