
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VirtualTransactionId ;
typedef int TransactionId ;
struct TYPE_11__ {scalar_t__ databaseId; } ;
struct TYPE_10__ {int vacuumFlags; int xmin; } ;
struct TYPE_9__ {int maxProcs; int numProcs; int* pgprocnos; } ;
typedef TYPE_1__ ProcArrayStruct ;
typedef TYPE_2__ PGXACT ;
typedef TYPE_3__ PGPROC ;


 int FUNC_0 (int ,TYPE_3__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_2__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 scalar_t__ FUNC_7 (int) ;
 TYPE_1__* VAR_6 ;

VirtualTransactionId *
FUNC_8(TransactionId VAR_7, bool VAR_8,
       bool VAR_9, int VAR_10,
       int *VAR_11)
{
 VirtualTransactionId *VAR_12;
 ProcArrayStruct *VAR_13 = VAR_6;
 int VAR_14 = 0;
 int VAR_15;


 VAR_12 = (VirtualTransactionId *)
  FUNC_7(sizeof(VirtualTransactionId) * VAR_13->maxProcs);

 FUNC_1(VAR_3, VAR_0);

 for (VAR_15 = 0; VAR_15 < VAR_13->numProcs; VAR_15++)
 {
  int VAR_16 = VAR_13->pgprocnos[VAR_15];
  PGPROC *VAR_17 = &VAR_5[VAR_16];
  PGXACT *VAR_18 = &VAR_4[VAR_16];

  if (VAR_17 == VAR_2)
   continue;

  if (VAR_10 & VAR_18->vacuumFlags)
   continue;

  if (VAR_9 || VAR_17->databaseId == VAR_1)
  {

   TransactionId VAR_19 = FUNC_5(VAR_18->xmin);

   if (VAR_8 && !FUNC_3(VAR_19))
    continue;





   if (!FUNC_3(VAR_7) ||
    FUNC_4(VAR_19, VAR_7))
   {
    VirtualTransactionId VAR_20;

    FUNC_0(VAR_20, *VAR_17);
    if (FUNC_6(VAR_20))
     VAR_12[VAR_14++] = VAR_20;
   }
  }
 }

 FUNC_2(VAR_3);

 *VAR_11 = VAR_14;
 return VAR_12;
}
