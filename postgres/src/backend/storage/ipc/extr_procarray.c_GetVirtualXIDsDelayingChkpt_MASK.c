
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VirtualTransactionId ;
struct TYPE_6__ {scalar_t__ delayChkpt; } ;
struct TYPE_5__ {int maxProcs; int numProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGXACT ;
typedef int PGPROC ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__* VAR_4 ;

VirtualTransactionId *
FUNC_5(int *VAR_5)
{
 VirtualTransactionId *VAR_6;
 ProcArrayStruct *VAR_7 = VAR_4;
 int VAR_8 = 0;
 int VAR_9;


 VAR_6 = (VirtualTransactionId *)
  FUNC_4(sizeof(VirtualTransactionId) * VAR_7->maxProcs);

 FUNC_1(VAR_1, VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_7->numProcs; VAR_9++)
 {
  int VAR_10 = VAR_7->pgprocnos[VAR_9];
  PGPROC *VAR_11 = &VAR_3[VAR_10];
  PGXACT *VAR_12 = &VAR_2[VAR_10];

  if (VAR_12->delayChkpt)
  {
   VirtualTransactionId VAR_13;

   FUNC_0(VAR_13, *VAR_11);
   if (FUNC_3(VAR_13))
    VAR_6[VAR_8++] = VAR_13;
  }
 }

 FUNC_2(VAR_1);

 *VAR_5 = VAR_8;
 return VAR_6;
}
