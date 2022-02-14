
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hasMessages; int resetState; int nextMsgNum; int signaled; } ;
struct TYPE_4__ {int maxMsgNum; int * buffer; int msgnumLock; TYPE_2__* procState; } ;
typedef int SharedInvalidationMessage ;
typedef TYPE_1__ SISeg ;
typedef TYPE_2__ ProcState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_4 ;

int
FUNC_4(SharedInvalidationMessage *VAR_5, int VAR_6)
{
 SISeg *VAR_7;
 ProcState *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_7 = VAR_4;
 VAR_8 = &VAR_7->procState[VAR_2 - 1];
 if (!VAR_8->hasMessages)
  return 0;

 FUNC_0(VAR_3, VAR_0);
 VAR_8->hasMessages = 0;


 FUNC_2(&VAR_7->msgnumLock);
 VAR_9 = VAR_7->maxMsgNum;
 FUNC_3(&VAR_7->msgnumLock);

 if (VAR_8->resetState)
 {





  VAR_8->nextMsgNum = VAR_9;
  VAR_8->resetState = 0;
  VAR_8->signaled = 0;
  FUNC_1(VAR_3);
  return -1;
 }
 VAR_10 = 0;
 while (VAR_10 < VAR_6 && VAR_8->nextMsgNum < VAR_9)
 {
  VAR_5[VAR_10++] = VAR_7->buffer[VAR_8->nextMsgNum % VAR_1];
  VAR_8->nextMsgNum++;
 }
 if (VAR_8->nextMsgNum >= VAR_9)
  VAR_8->signaled = 0;
 else
  VAR_8->hasMessages = 1;

 FUNC_1(VAR_3);
 return VAR_10;
}
