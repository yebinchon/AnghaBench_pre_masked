
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mydest; int rDestroy; int rShutdown; int rStartup; int receiveSlot; } ;
struct TYPE_4__ {scalar_t__ processed; int * cstate; TYPE_1__ pub; } ;
typedef int DestReceiver ;
typedef TYPE_2__ DR_copy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

DestReceiver *
FUNC_1(void)
{
 DR_copy *VAR_5 = (DR_copy *) FUNC_0(sizeof(DR_copy));

 VAR_5->pub.receiveSlot = VAR_2;
 VAR_5->pub.rStartup = VAR_4;
 VAR_5->pub.rShutdown = VAR_3;
 VAR_5->pub.rDestroy = VAR_1;
 VAR_5->pub.mydest = VAR_0;

 VAR_5->cstate = ((void*)0);
 VAR_5->processed = 0;

 return (DestReceiver *) VAR_5;
}
