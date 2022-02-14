
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ createSubid; int portalPinned; int * cleanup; int name; } ;
struct TYPE_4__ {TYPE_2__* portal; } ;
typedef scalar_t__ SubTransactionId ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;

void
FUNC_5(SubTransactionId VAR_2)
{
 HASH_SEQ_STATUS VAR_3;
 PortalHashEnt *VAR_4;

 FUNC_3(&VAR_3, VAR_0);

 while ((VAR_4 = (PortalHashEnt *) FUNC_4(&VAR_3)) != ((void*)0))
 {
  Portal VAR_5 = VAR_4->portal;

  if (VAR_5->createSubid != VAR_2)
   continue;






  if (VAR_5->portalPinned)
   VAR_5->portalPinned = 0;





  if (FUNC_0(VAR_5->cleanup))
  {
   FUNC_2(VAR_1, "skipping cleanup for portal \"%s\"", VAR_5->name);
   VAR_5->cleanup = ((void*)0);
  }


  FUNC_1(VAR_5, 0);
 }
}
