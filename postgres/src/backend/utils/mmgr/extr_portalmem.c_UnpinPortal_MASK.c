
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int portalPinned; } ;
typedef TYPE_1__* Portal ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(Portal VAR_1)
{
 if (!VAR_1->portalPinned)
  FUNC_0(VAR_0, "portal not pinned");

 VAR_1->portalPinned = 0;
}
