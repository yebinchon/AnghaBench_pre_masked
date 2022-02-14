
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mydest; int rDestroy; int rShutdown; int rStartup; int receiveSlot; } ;
struct TYPE_4__ {TYPE_1__ pub; } ;
typedef int DestReceiver ;
typedef TYPE_2__ DR_sqlfunction ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

DestReceiver *
FUNC_1(void)
{
 DR_sqlfunction *VAR_5 = (DR_sqlfunction *) FUNC_0(sizeof(DR_sqlfunction));

 VAR_5->pub.receiveSlot = VAR_2;
 VAR_5->pub.rStartup = VAR_4;
 VAR_5->pub.rShutdown = VAR_3;
 VAR_5->pub.rDestroy = VAR_1;
 VAR_5->pub.mydest = VAR_0;



 return (DestReceiver *) VAR_5;
}
