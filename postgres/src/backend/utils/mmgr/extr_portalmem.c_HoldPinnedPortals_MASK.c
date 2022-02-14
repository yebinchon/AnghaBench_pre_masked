
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int autoHeld; scalar_t__ strategy; scalar_t__ status; scalar_t__ portalPinned; } ;
struct TYPE_4__ {TYPE_2__* portal; } ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;

void
FUNC_7(void)
{
 HASH_SEQ_STATUS VAR_5;
 PortalHashEnt *VAR_6;

 FUNC_5(&VAR_5, VAR_4);

 while ((VAR_6 = (PortalHashEnt *) FUNC_6(&VAR_5)) != ((void*)0))
 {
  Portal VAR_7 = VAR_6->portal;

  if (VAR_7->portalPinned && !VAR_7->autoHeld)
  {
   if (VAR_7->strategy != VAR_2)
    FUNC_2(VAR_1,
      (FUNC_3(VAR_0),
       FUNC_4("cannot perform transaction commands inside a cursor loop that is not read-only")));


   if (VAR_7->status != VAR_3)
    FUNC_1(VAR_1, "pinned portal is not ready to be auto-held");

   FUNC_0(VAR_7);
   VAR_7->autoHeld = 1;
  }
 }
}
