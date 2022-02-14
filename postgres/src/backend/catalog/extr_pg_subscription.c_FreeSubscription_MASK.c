
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int publications; struct TYPE_4__* slotname; struct TYPE_4__* conninfo; struct TYPE_4__* name; } ;
typedef TYPE_1__ Subscription ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(Subscription *VAR_0)
{
 FUNC_1(VAR_0->name);
 FUNC_1(VAR_0->conninfo);
 if (VAR_0->slotname)
  FUNC_1(VAR_0->slotname);
 FUNC_0(VAR_0->publications);
 FUNC_1(VAR_0);
}
