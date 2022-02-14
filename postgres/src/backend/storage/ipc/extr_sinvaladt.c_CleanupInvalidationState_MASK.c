
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ procPid; int resetState; int signaled; scalar_t__ nextMsgNum; int * proc; int nextLXID; } ;
struct TYPE_4__ {int lastBackend; TYPE_2__* procState; } ;
typedef TYPE_1__ SISeg ;
typedef TYPE_2__ ProcState ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(int VAR_4, Datum VAR_5)
{
 SISeg *VAR_6 = (SISeg *) FUNC_1(VAR_5);
 ProcState *VAR_7;
 int VAR_8;

 FUNC_0(FUNC_4(VAR_6));

 FUNC_2(VAR_2, VAR_0);

 VAR_7 = &VAR_6->procState[VAR_1 - 1];


 VAR_7->nextLXID = VAR_3;


 VAR_7->procPid = 0;
 VAR_7->proc = ((void*)0);
 VAR_7->nextMsgNum = 0;
 VAR_7->resetState = 0;
 VAR_7->signaled = 0;


 for (VAR_8 = VAR_6->lastBackend; VAR_8 > 0; VAR_8--)
 {
  if (VAR_6->procState[VAR_8 - 1].procPid != 0)
   break;
 }
 VAR_6->lastBackend = VAR_8;

 FUNC_3(VAR_2);
}
