
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_8__ {int backendId; } ;
typedef TYPE_1__ VirtualTransactionId ;
struct TYPE_10__ {scalar_t__ databaseId; int recoveryConflictPending; scalar_t__ pid; } ;
struct TYPE_9__ {int numProcs; int* pgprocnos; } ;
typedef int ProcSignalReason ;
typedef TYPE_2__ ProcArrayStruct ;
typedef TYPE_3__ PGPROC ;
typedef scalar_t__ Oid ;


 int FUNC_0 (TYPE_1__,TYPE_3__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;

void
FUNC_4(Oid VAR_5, ProcSignalReason VAR_6, bool VAR_7)
{
 ProcArrayStruct *VAR_8 = VAR_4;
 int VAR_9;
 pid_t VAR_10 = 0;


 FUNC_1(VAR_2, VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_8->numProcs; VAR_9++)
 {
  int VAR_11 = VAR_8->pgprocnos[VAR_9];
  PGPROC *VAR_12 = &VAR_3[VAR_11];

  if (VAR_5 == VAR_0 || VAR_12->databaseId == VAR_5)
  {
   VirtualTransactionId VAR_13;

   FUNC_0(VAR_13, *VAR_12);

   VAR_12->recoveryConflictPending = VAR_7;
   VAR_10 = VAR_12->pid;
   if (VAR_10 != 0)
   {




    (void) FUNC_3(VAR_10, VAR_6, VAR_13.backendId);
   }
  }
 }

 FUNC_2(VAR_2);
}
