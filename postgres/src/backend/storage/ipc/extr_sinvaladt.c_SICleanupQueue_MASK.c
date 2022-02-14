
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_5__ {int nextMsgNum; scalar_t__ procPid; int resetState; int signaled; scalar_t__ sendOnly; } ;
struct TYPE_4__ {int maxMsgNum; int lastBackend; int minMsgNum; int nextThreshold; TYPE_2__* procState; } ;
typedef TYPE_1__ SISeg ;
typedef TYPE_2__ ProcState ;
typedef int BackendId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_1__* VAR_10 ;

void
FUNC_4(bool VAR_11, int VAR_12)
{
 SISeg *VAR_13 = VAR_10;
 int VAR_14,
    VAR_15,
    VAR_16,
    VAR_17,
    VAR_18;
 ProcState *VAR_19 = ((void*)0);


 if (!VAR_11)
  FUNC_0(VAR_9, VAR_3);
 FUNC_0(VAR_8, VAR_3);
 VAR_14 = VAR_13->maxMsgNum;
 VAR_15 = VAR_14 - VAR_7;
 VAR_16 = VAR_14 - VAR_4 + VAR_12;

 for (VAR_18 = 0; VAR_18 < VAR_13->lastBackend; VAR_18++)
 {
  ProcState *VAR_20 = &VAR_13->procState[VAR_18];
  int VAR_21 = VAR_20->nextMsgNum;


  if (VAR_20->procPid == 0 || VAR_20->resetState || VAR_20->sendOnly)
   continue;





  if (VAR_21 < VAR_16)
  {
   VAR_20->resetState = 1;

   continue;
  }


  if (VAR_21 < VAR_14)
   VAR_14 = VAR_21;


  if (VAR_21 < VAR_15 && !VAR_20->signaled)
  {
   VAR_15 = VAR_21;
   VAR_19 = VAR_20;
  }
 }
 VAR_13->minMsgNum = VAR_14;






 if (VAR_14 >= VAR_5)
 {
  VAR_13->minMsgNum -= VAR_5;
  VAR_13->maxMsgNum -= VAR_5;
  for (VAR_18 = 0; VAR_18 < VAR_13->lastBackend; VAR_18++)
  {

   VAR_13->procState[VAR_18].nextMsgNum -= VAR_5;
  }
 }





 VAR_17 = VAR_13->maxMsgNum - VAR_13->minMsgNum;
 if (VAR_17 < VAR_0)
  VAR_13->nextThreshold = VAR_0;
 else
  VAR_13->nextThreshold = (VAR_17 / VAR_1 + 1) * VAR_1;






 if (VAR_19)
 {
  pid_t VAR_22 = VAR_19->procPid;
  BackendId VAR_23 = (VAR_19 - &VAR_13->procState[0]) + 1;

  VAR_19->signaled = 1;
  FUNC_1(VAR_8);
  FUNC_1(VAR_9);
  FUNC_3(VAR_2, "sending sinval catchup signal to PID %d", (int) VAR_22);
  FUNC_2(VAR_22, VAR_6, VAR_23);
  if (VAR_11)
   FUNC_0(VAR_9, VAR_3);
 }
 else
 {
  FUNC_1(VAR_8);
  if (!VAR_11)
   FUNC_1(VAR_9);
 }
}
