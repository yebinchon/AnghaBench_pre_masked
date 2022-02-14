
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mydest; int receiveSlot; } ;
struct TYPE_7__ {TYPE_1__ pub; TYPE_2__* portal; } ;
struct TYPE_6__ {scalar_t__* formats; } ;
typedef TYPE_2__* Portal ;
typedef int DestReceiver ;
typedef TYPE_3__ DR_printtup ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_2(DestReceiver *VAR_5, Portal VAR_6)
{
 DR_printtup *VAR_7 = (DR_printtup *) VAR_5;

 FUNC_0(VAR_7->pub.mydest == VAR_0 ||
     VAR_7->pub.mydest == VAR_1);

 VAR_7->portal = VAR_6;

 if (FUNC_1(VAR_2) < 3)
 {





  if (VAR_6->formats && VAR_6->formats[0] != 0)
   VAR_7->pub.receiveSlot = VAR_4;
  else
   VAR_7->pub.receiveSlot = VAR_3;
 }
}
