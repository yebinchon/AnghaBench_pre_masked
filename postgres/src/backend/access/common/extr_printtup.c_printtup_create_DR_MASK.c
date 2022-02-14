
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * data; } ;
struct TYPE_4__ {scalar_t__ mydest; int rDestroy; int rShutdown; int rStartup; int receiveSlot; } ;
struct TYPE_6__ {int sendDescrip; int * tmpcontext; TYPE_2__ buf; int * myinfo; scalar_t__ nattrs; int * attrinfo; TYPE_1__ pub; } ;
typedef int DestReceiver ;
typedef TYPE_3__ DR_printtup ;
typedef scalar_t__ CommandDest ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

DestReceiver *
FUNC_1(CommandDest VAR_5)
{
 DR_printtup *VAR_6 = (DR_printtup *) FUNC_0(sizeof(DR_printtup));

 VAR_6->pub.receiveSlot = VAR_1;
 VAR_6->pub.rStartup = VAR_4;
 VAR_6->pub.rShutdown = VAR_3;
 VAR_6->pub.rDestroy = VAR_2;
 VAR_6->pub.mydest = VAR_5;





 VAR_6->sendDescrip = (VAR_5 == VAR_0);

 VAR_6->attrinfo = ((void*)0);
 VAR_6->nattrs = 0;
 VAR_6->myinfo = ((void*)0);
 VAR_6->buf.data = ((void*)0);
 VAR_6->tmpcontext = ((void*)0);

 return (DestReceiver *) VAR_6;
}
