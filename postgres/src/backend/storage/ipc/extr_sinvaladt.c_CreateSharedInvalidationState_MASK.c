
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int maxBackends; TYPE_1__* procState; int msgnumLock; scalar_t__ lastBackend; int nextThreshold; scalar_t__ maxMsgNum; scalar_t__ minMsgNum; } ;
struct TYPE_4__ {int resetState; int signaled; int hasMessages; int nextLXID; scalar_t__ nextMsgNum; int * proc; scalar_t__ procPid; } ;
typedef TYPE_2__ SISeg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int ,int*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_3 ;

void
FUNC_3(void)
{
 int VAR_4;
 bool VAR_5;


 VAR_3 = (SISeg *)
  FUNC_1("shmInvalBuffer", FUNC_0(), &VAR_5);
 if (VAR_5)
  return;


 VAR_3->minMsgNum = 0;
 VAR_3->maxMsgNum = 0;
 VAR_3->nextThreshold = VAR_0;
 VAR_3->lastBackend = 0;
 VAR_3->maxBackends = VAR_2;
 FUNC_2(&VAR_3->msgnumLock);




 for (VAR_4 = 0; VAR_4 < VAR_3->maxBackends; VAR_4++)
 {
  VAR_3->procState[VAR_4].procPid = 0;
  VAR_3->procState[VAR_4].proc = ((void*)0);
  VAR_3->procState[VAR_4].nextMsgNum = 0;
  VAR_3->procState[VAR_4].resetState = 0;
  VAR_3->procState[VAR_4].signaled = 0;
  VAR_3->procState[VAR_4].hasMessages = 0;
  VAR_3->procState[VAR_4].nextLXID = VAR_1;
 }
}
