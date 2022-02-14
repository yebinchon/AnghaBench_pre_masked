
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* control; } ;
typedef TYPE_2__ dsa_area ;
struct TYPE_5__ {int refcnt; int pinned; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(dsa_area *VAR_2)
{
 FUNC_2(FUNC_1(VAR_2), VAR_1);
 FUNC_0(VAR_2->control->refcnt > 1);
 if (!VAR_2->control->pinned)
 {
  FUNC_3(FUNC_1(VAR_2));
  FUNC_4(VAR_0, "dsa_area not pinned");
 }
 VAR_2->control->pinned = 0;
 --VAR_2->control->refcnt;
 FUNC_3(FUNC_1(VAR_2));
}
