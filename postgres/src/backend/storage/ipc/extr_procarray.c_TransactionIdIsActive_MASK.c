
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_9__ {scalar_t__ pid; } ;
struct TYPE_8__ {int xid; } ;
struct TYPE_7__ {int numProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGXACT ;
typedef TYPE_3__ PGPROC ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_2__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_1__* VAR_5 ;

bool
FUNC_6(TransactionId VAR_6)
{
 bool VAR_7 = 0;
 ProcArrayStruct *VAR_8 = VAR_5;
 int VAR_9;





 if (FUNC_4(VAR_6, VAR_2))
  return 0;

 FUNC_0(VAR_1, VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_8->numProcs; VAR_9++)
 {
  int VAR_10 = VAR_8->pgprocnos[VAR_9];
  PGPROC *VAR_11 = &VAR_4[VAR_10];
  PGXACT *VAR_12 = &VAR_3[VAR_10];
  TransactionId VAR_13;


  VAR_13 = FUNC_5(VAR_12->xid);

  if (!FUNC_3(VAR_13))
   continue;

  if (VAR_11->pid == 0)
   continue;

  if (FUNC_2(VAR_13, VAR_6))
  {
   VAR_7 = 1;
   break;
  }
 }

 FUNC_1(VAR_1);

 return VAR_7;
}
