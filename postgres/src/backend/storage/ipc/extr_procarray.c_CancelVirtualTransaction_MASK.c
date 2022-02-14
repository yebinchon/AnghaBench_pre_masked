
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_9__ {scalar_t__ localTransactionId; int backendId; } ;
typedef TYPE_1__ VirtualTransactionId ;
struct TYPE_11__ {int recoveryConflictPending; scalar_t__ pid; } ;
struct TYPE_10__ {int numProcs; int* pgprocnos; } ;
typedef int ProcSignalReason ;
typedef TYPE_2__ ProcArrayStruct ;
typedef TYPE_3__ PGPROC ;


 int FUNC_0 (TYPE_1__,TYPE_3__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;

pid_t
FUNC_4(VirtualTransactionId VAR_4, ProcSignalReason VAR_5)
{
 ProcArrayStruct *VAR_6 = VAR_3;
 int VAR_7;
 pid_t VAR_8 = 0;

 FUNC_1(VAR_1, VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_6->numProcs; VAR_7++)
 {
  int VAR_9 = VAR_6->pgprocnos[VAR_7];
  PGPROC *VAR_10 = &VAR_2[VAR_9];
  VirtualTransactionId VAR_11;

  FUNC_0(VAR_11, *VAR_10);

  if (VAR_11.backendId == VAR_4.backendId &&
   VAR_11.localTransactionId == VAR_4.localTransactionId)
  {
   VAR_10->recoveryConflictPending = 1;
   VAR_8 = VAR_10->pid;
   if (VAR_8 != 0)
   {




    (void) FUNC_3(VAR_8, VAR_5, VAR_4.backendId);
   }
   break;
  }
 }

 FUNC_2(VAR_1);

 return VAR_8;
}
