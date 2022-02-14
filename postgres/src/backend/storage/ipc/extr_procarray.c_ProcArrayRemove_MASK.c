
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_11__ {int latestCompletedXid; } ;
struct TYPE_10__ {int xid; } ;
struct TYPE_9__ {scalar_t__ pid; size_t pgprocno; } ;
struct TYPE_8__ {int numProcs; size_t* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGPROC ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 TYPE_5__* VAR_4 ;
 int FUNC_6 (int ,char*,TYPE_2__*) ;
 int FUNC_7 (size_t*,size_t*,int) ;
 TYPE_1__* VAR_5 ;

void
FUNC_8(PGPROC *VAR_6, TransactionId VAR_7)
{
 ProcArrayStruct *VAR_8 = VAR_5;
 int VAR_9;







 FUNC_2(VAR_2, VAR_1);

 if (FUNC_4(VAR_7))
 {
  FUNC_0(FUNC_4(VAR_4[VAR_6->pgprocno].xid));


  if (FUNC_5(VAR_3->latestCompletedXid,
          VAR_7))
   VAR_3->latestCompletedXid = VAR_7;
 }
 else
 {

  FUNC_0(!FUNC_4(VAR_4[VAR_6->pgprocno].xid));
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->numProcs; VAR_9++)
 {
  if (VAR_8->pgprocnos[VAR_9] == VAR_6->pgprocno)
  {

   FUNC_7(&VAR_8->pgprocnos[VAR_9], &VAR_8->pgprocnos[VAR_9 + 1],
     (VAR_8->numProcs - VAR_9 - 1) * sizeof(int));
   VAR_8->pgprocnos[VAR_8->numProcs - 1] = -1;
   VAR_8->numProcs--;
   FUNC_3(VAR_2);
   return;
  }
 }


 FUNC_3(VAR_2);

 FUNC_6(VAR_0, "failed to find proc %p in ProcArray", VAR_6);
}
