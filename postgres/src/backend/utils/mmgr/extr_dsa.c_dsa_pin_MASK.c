
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* control; } ;
typedef TYPE_2__ dsa_area ;
struct TYPE_5__ {int pinned; int refcnt; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(dsa_area *VAR_2)
{
 FUNC_1(FUNC_0(VAR_2), VAR_1);
 if (VAR_2->control->pinned)
 {
  FUNC_2(FUNC_0(VAR_2));
  FUNC_3(VAR_0, "dsa_area already pinned");
 }
 VAR_2->control->pinned = 1;
 ++VAR_2->control->refcnt;
 FUNC_2(FUNC_0(VAR_2));
}
