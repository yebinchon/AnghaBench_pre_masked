
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mydest; int rDestroy; int rShutdown; int rStartup; int receiveSlot; } ;
struct TYPE_4__ {int transientoid; TYPE_1__ pub; } ;
typedef int Oid ;
typedef int DestReceiver ;
typedef TYPE_2__ DR_transientrel ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

DestReceiver *
FUNC_1(Oid VAR_5)
{
 DR_transientrel *VAR_6 = (DR_transientrel *) FUNC_0(sizeof(DR_transientrel));

 VAR_6->pub.receiveSlot = VAR_2;
 VAR_6->pub.rStartup = VAR_4;
 VAR_6->pub.rShutdown = VAR_3;
 VAR_6->pub.rDestroy = VAR_1;
 VAR_6->pub.mydest = VAR_0;
 VAR_6->transientoid = VAR_5;

 return (DestReceiver *) VAR_6;
}
