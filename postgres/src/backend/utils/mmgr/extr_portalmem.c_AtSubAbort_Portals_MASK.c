
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ createSubid; scalar_t__ activeSubid; scalar_t__ status; int portalContext; int * resowner; int (* cleanup ) (TYPE_2__*) ;} ;
struct TYPE_7__ {TYPE_2__* portal; } ;
typedef scalar_t__ SubTransactionId ;
typedef int ResourceOwner ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int (*) (TYPE_2__*)) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;

void
FUNC_8(SubTransactionId VAR_4,
       SubTransactionId VAR_5,
       ResourceOwner VAR_6,
       ResourceOwner VAR_7)
{
 HASH_SEQ_STATUS VAR_8;
 PortalHashEnt *VAR_9;

 FUNC_5(&VAR_8, VAR_3);

 while ((VAR_9 = (PortalHashEnt *) FUNC_6(&VAR_8)) != ((void*)0))
 {
  Portal VAR_10 = VAR_9->portal;


  if (VAR_10->createSubid != VAR_4)
  {

   if (VAR_10->activeSubid == VAR_4)
   {

    VAR_10->activeSubid = VAR_5;
    if (VAR_10->status == VAR_0)
     FUNC_0(VAR_10);
    if (VAR_10->status == VAR_1 && VAR_10->resowner)
    {
     FUNC_4(VAR_10->resowner, VAR_6);
     VAR_10->resowner = ((void*)0);
    }
   }

   continue;
  }
  if (VAR_10->status == VAR_2 ||
   VAR_10->status == VAR_0)
   FUNC_0(VAR_10);





  if (FUNC_2(VAR_10->cleanup))
  {
   VAR_10->cleanup(VAR_10);
   VAR_10->cleanup = ((void*)0);
  }


  FUNC_3(VAR_10);






  VAR_10->resowner = ((void*)0);







  FUNC_1(VAR_10->portalContext);
 }
}
