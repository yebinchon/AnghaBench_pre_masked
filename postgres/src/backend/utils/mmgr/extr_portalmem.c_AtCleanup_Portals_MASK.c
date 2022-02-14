
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; scalar_t__ createSubid; int portalPinned; int * cleanup; int name; int * resowner; scalar_t__ autoHeld; } ;
struct TYPE_4__ {TYPE_2__* portal; } ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;

void
FUNC_6(void)
{
 HASH_SEQ_STATUS VAR_4;
 PortalHashEnt *VAR_5;

 FUNC_4(&VAR_4, VAR_2);

 while ((VAR_5 = (PortalHashEnt *) FUNC_5(&VAR_4)) != ((void*)0))
 {
  Portal VAR_6 = VAR_5->portal;





  if (VAR_6->status == VAR_1)
   continue;





  if (VAR_6->createSubid == VAR_0 || VAR_6->autoHeld)
  {
   FUNC_0(VAR_6->status != VAR_1);
   FUNC_0(VAR_6->resowner == ((void*)0));
   continue;
  }






  if (VAR_6->portalPinned)
   VAR_6->portalPinned = 0;





  if (FUNC_1(VAR_6->cleanup))
  {
   FUNC_3(VAR_3, "skipping cleanup for portal \"%s\"", VAR_6->name);
   VAR_6->cleanup = ((void*)0);
  }


  FUNC_2(VAR_6, 0);
 }
}
