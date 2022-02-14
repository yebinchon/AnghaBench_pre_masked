
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int shm_mq_handle ;
struct TYPE_3__ {int mydest; int rDestroy; int rShutdown; int rStartup; int receiveSlot; } ;
struct TYPE_4__ {int * queue; TYPE_1__ pub; } ;
typedef TYPE_2__ TQueueDestReceiver ;
typedef int DestReceiver ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

DestReceiver *
FUNC_1(shm_mq_handle *VAR_5)
{
 TQueueDestReceiver *VAR_6;

 VAR_6 = (TQueueDestReceiver *) FUNC_0(sizeof(TQueueDestReceiver));

 VAR_6->pub.receiveSlot = VAR_2;
 VAR_6->pub.rStartup = VAR_4;
 VAR_6->pub.rShutdown = VAR_3;
 VAR_6->pub.rDestroy = VAR_1;
 VAR_6->pub.mydest = VAR_0;
 VAR_6->queue = VAR_5;

 return (DestReceiver *) VAR_6;
}
