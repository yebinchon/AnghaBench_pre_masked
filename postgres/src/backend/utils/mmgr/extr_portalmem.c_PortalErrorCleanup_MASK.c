
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int portalPinned; scalar_t__ autoHeld; } ;
struct TYPE_4__ {TYPE_2__* portal; } ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(void)
{
 HASH_SEQ_STATUS VAR_1;
 PortalHashEnt *VAR_2;

 FUNC_1(&VAR_1, VAR_0);

 while ((VAR_2 = (PortalHashEnt *) FUNC_2(&VAR_1)) != ((void*)0))
 {
  Portal VAR_3 = VAR_2->portal;

  if (VAR_3->autoHeld)
  {
   VAR_3->portalPinned = 0;
   FUNC_0(VAR_3, 0);
  }
 }
}
