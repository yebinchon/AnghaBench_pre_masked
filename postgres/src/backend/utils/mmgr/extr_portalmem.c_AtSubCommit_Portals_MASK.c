
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ createSubid; scalar_t__ activeSubid; scalar_t__ resowner; } ;
struct TYPE_3__ {TYPE_2__* portal; } ;
typedef scalar_t__ SubTransactionId ;
typedef int ResourceOwner ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(SubTransactionId VAR_1,
     SubTransactionId VAR_2,
     ResourceOwner VAR_3)
{
 HASH_SEQ_STATUS VAR_4;
 PortalHashEnt *VAR_5;

 FUNC_1(&VAR_4, VAR_0);

 while ((VAR_5 = (PortalHashEnt *) FUNC_2(&VAR_4)) != ((void*)0))
 {
  Portal VAR_6 = VAR_5->portal;

  if (VAR_6->createSubid == VAR_1)
  {
   VAR_6->createSubid = VAR_2;
   if (VAR_6->resowner)
    FUNC_0(VAR_6->resowner, VAR_3);
  }
  if (VAR_6->activeSubid == VAR_1)
   VAR_6->activeSubid = VAR_2;
 }
}
