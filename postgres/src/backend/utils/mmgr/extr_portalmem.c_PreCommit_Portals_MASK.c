
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; int cursorOptions; scalar_t__ createSubid; int * resowner; int * holdSnapshot; int autoHeld; scalar_t__ portalPinned; } ;
struct TYPE_5__ {TYPE_2__* portal; } ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_6 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

bool
FUNC_10(bool VAR_7)
{
 bool VAR_8 = 0;
 HASH_SEQ_STATUS VAR_9;
 PortalHashEnt *VAR_10;

 FUNC_7(&VAR_9, VAR_6);

 while ((VAR_10 = (PortalHashEnt *) FUNC_8(&VAR_9)) != ((void*)0))
 {
  Portal VAR_11 = VAR_10->portal;






  if (VAR_11->portalPinned && !VAR_11->autoHeld)
   FUNC_3(VAR_2, "cannot commit while a portal is pinned");
  if (VAR_11->status == VAR_4)
  {
   if (VAR_11->holdSnapshot)
   {
    if (VAR_11->resowner)
     FUNC_2(VAR_11->holdSnapshot,
            VAR_11->resowner);
    VAR_11->holdSnapshot = ((void*)0);
   }
   VAR_11->resowner = ((void*)0);
   continue;
  }


  if ((VAR_11->cursorOptions & VAR_0) &&
   VAR_11->createSubid != VAR_3 &&
   VAR_11->status == VAR_5)
  {
   if (VAR_7)
    FUNC_4(VAR_2,
      (FUNC_5(VAR_1),
       FUNC_6("cannot PREPARE a transaction that has created a cursor WITH HOLD")));

   FUNC_0(VAR_11);


   VAR_8 = 1;
  }
  else if (VAR_11->createSubid == VAR_3)
  {




   continue;
  }
  else
  {

   FUNC_1(VAR_11, 1);


   VAR_8 = 1;
  }






  FUNC_9(&VAR_9);
  FUNC_7(&VAR_9, VAR_6);
 }

 return VAR_8;
}
