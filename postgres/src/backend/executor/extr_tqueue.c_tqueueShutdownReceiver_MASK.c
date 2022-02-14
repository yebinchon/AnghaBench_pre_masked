
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * queue; } ;
typedef TYPE_1__ TQueueDestReceiver ;
typedef int DestReceiver ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(DestReceiver *VAR_0)
{
 TQueueDestReceiver *VAR_1 = (TQueueDestReceiver *) VAR_0;

 if (VAR_1->queue != ((void*)0))
  FUNC_0(VAR_1->queue);
 VAR_1->queue = ((void*)0);
}
