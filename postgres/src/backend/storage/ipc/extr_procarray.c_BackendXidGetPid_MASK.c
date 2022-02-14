
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_9__ {int pid; } ;
struct TYPE_8__ {scalar_t__ xid; } ;
struct TYPE_7__ {int numProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGXACT ;
typedef TYPE_3__ PGPROC ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_1__* VAR_5 ;

int
FUNC_2(TransactionId VAR_6)
{
 int VAR_7 = 0;
 ProcArrayStruct *VAR_8 = VAR_5;
 int VAR_9;

 if (VAR_6 == VAR_0)
  return 0;

 FUNC_0(VAR_2, VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_8->numProcs; VAR_9++)
 {
  int VAR_10 = VAR_8->pgprocnos[VAR_9];
  PGPROC *VAR_11 = &VAR_4[VAR_10];
  PGXACT *VAR_12 = &VAR_3[VAR_10];

  if (VAR_12->xid == VAR_6)
  {
   VAR_7 = VAR_11->pid;
   break;
  }
 }

 FUNC_1(VAR_2);

 return VAR_7;
}
