
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VirtualTransactionId ;
struct TYPE_6__ {scalar_t__ delayChkpt; } ;
struct TYPE_5__ {int numProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGXACT ;
typedef int PGPROC ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;

bool
FUNC_5(VirtualTransactionId *VAR_5, int VAR_6)
{
 bool VAR_7 = 0;
 ProcArrayStruct *VAR_8 = VAR_4;
 int VAR_9;

 FUNC_1(VAR_1, VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_8->numProcs; VAR_9++)
 {
  int VAR_10 = VAR_8->pgprocnos[VAR_9];
  PGPROC *VAR_11 = &VAR_3[VAR_10];
  PGXACT *VAR_12 = &VAR_2[VAR_10];
  VirtualTransactionId VAR_13;

  FUNC_0(VAR_13, *VAR_11);

  if (VAR_12->delayChkpt && FUNC_4(VAR_13))
  {
   int VAR_14;

   for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
   {
    if (FUNC_3(VAR_13, VAR_5[VAR_14]))
    {
     VAR_7 = 1;
     break;
    }
   }
   if (VAR_7)
    break;
  }
 }

 FUNC_2(VAR_1);

 return VAR_7;
}
