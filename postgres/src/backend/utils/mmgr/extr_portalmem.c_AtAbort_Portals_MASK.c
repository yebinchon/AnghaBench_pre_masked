
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ status; scalar_t__ createSubid; int portalContext; int * resowner; int (* cleanup ) (TYPE_2__*) ;scalar_t__ autoHeld; } ;
struct TYPE_7__ {TYPE_2__* portal; } ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int (*) (TYPE_2__*)) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(void)
{
 HASH_SEQ_STATUS VAR_5;
 PortalHashEnt *VAR_6;

 FUNC_4(&VAR_5, VAR_3);

 while ((VAR_6 = (PortalHashEnt *) FUNC_5(&VAR_5)) != ((void*)0))
 {
  Portal VAR_7 = VAR_6->portal;





  if (VAR_7->status == VAR_1 && VAR_4)
   FUNC_0(VAR_7);




  if (VAR_7->createSubid == VAR_0)
   continue;






  if (VAR_7->autoHeld)
   continue;







  if (VAR_7->status == VAR_2)
   FUNC_0(VAR_7);





  if (FUNC_2(VAR_7->cleanup))
  {
   VAR_7->cleanup(VAR_7);
   VAR_7->cleanup = ((void*)0);
  }


  FUNC_3(VAR_7);






  VAR_7->resowner = ((void*)0);







  if (VAR_7->status != VAR_1)
   FUNC_1(VAR_7->portalContext);
 }
}
