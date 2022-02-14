
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int backendId; } ;
struct TYPE_7__ {scalar_t__ procPid; int resetState; int signaled; int hasMessages; int sendOnly; int nextMsgNum; TYPE_5__* proc; int nextLXID; } ;
struct TYPE_6__ {int lastBackend; int maxBackends; int maxMsgNum; TYPE_2__* procState; } ;
typedef TYPE_1__ SISeg ;
typedef TYPE_2__ ProcState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int VAR_10 ;
 int FUNC_8 (int ,int ) ;
 TYPE_1__* VAR_11 ;

void
FUNC_9(bool VAR_12)
{
 int VAR_13;
 ProcState *VAR_14 = ((void*)0);
 SISeg *VAR_15 = VAR_11;






 FUNC_1(VAR_9, VAR_5);


 for (VAR_13 = 0; VAR_13 < VAR_15->lastBackend; VAR_13++)
 {
  if (VAR_15->procState[VAR_13].procPid == 0)
  {
   VAR_14 = &VAR_15->procState[VAR_13];
   break;
  }
 }

 if (VAR_14 == ((void*)0))
 {
  if (VAR_15->lastBackend < VAR_15->maxBackends)
  {
   VAR_14 = &VAR_15->procState[VAR_15->lastBackend];
   FUNC_0(VAR_14->procPid == 0);
   VAR_15->lastBackend++;
  }
  else
  {



   VAR_6 = VAR_4;
   FUNC_2(VAR_9);
   FUNC_5(VAR_3,
     (FUNC_6(VAR_2),
      FUNC_7("sorry, too many clients already")));
  }
 }

 VAR_6 = (VAR_14 - &VAR_15->procState[0]) + 1;


 VAR_7->backendId = VAR_6;


 VAR_10 = VAR_14->nextLXID;


 VAR_14->procPid = VAR_8;
 VAR_14->proc = VAR_7;
 VAR_14->nextMsgNum = VAR_15->maxMsgNum;
 VAR_14->resetState = 0;
 VAR_14->signaled = 0;
 VAR_14->hasMessages = 0;
 VAR_14->sendOnly = VAR_12;

 FUNC_2(VAR_9);


 FUNC_8(VAR_0, FUNC_3(VAR_15));

 FUNC_4(VAR_1, "my backend ID is %d", VAR_6);
}
