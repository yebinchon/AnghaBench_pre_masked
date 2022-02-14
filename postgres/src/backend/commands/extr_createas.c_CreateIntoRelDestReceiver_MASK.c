
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mydest; int rDestroy; int rShutdown; int rStartup; int receiveSlot; } ;
struct TYPE_4__ {int * into; TYPE_1__ pub; } ;
typedef int IntoClause ;
typedef int DestReceiver ;
typedef TYPE_2__ DR_intorel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

DestReceiver *
FUNC_1(IntoClause *VAR_5)
{
 DR_intorel *VAR_6 = (DR_intorel *) FUNC_0(sizeof(DR_intorel));

 VAR_6->pub.receiveSlot = VAR_2;
 VAR_6->pub.rStartup = VAR_4;
 VAR_6->pub.rShutdown = VAR_3;
 VAR_6->pub.rDestroy = VAR_1;
 VAR_6->pub.mydest = VAR_0;
 VAR_6->into = VAR_5;


 return (DestReceiver *) VAR_6;
}
