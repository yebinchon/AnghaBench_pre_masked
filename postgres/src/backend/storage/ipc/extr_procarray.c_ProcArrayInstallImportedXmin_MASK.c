
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ backendId; scalar_t__ localTransactionId; } ;
typedef TYPE_1__ VirtualTransactionId ;
typedef int TransactionId ;
struct TYPE_14__ {int xmin; } ;
struct TYPE_13__ {scalar_t__ backendId; scalar_t__ lxid; scalar_t__ databaseId; } ;
struct TYPE_12__ {int vacuumFlags; int xmin; } ;
struct TYPE_11__ {int numProcs; int* pgprocnos; } ;
typedef TYPE_2__ ProcArrayStruct ;
typedef TYPE_3__ PGXACT ;
typedef TYPE_4__ PGPROC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_9__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 TYPE_3__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_2__* VAR_8 ;

bool
FUNC_6(TransactionId VAR_9,
        VirtualTransactionId *VAR_10)
{
 bool VAR_11 = 0;
 ProcArrayStruct *VAR_12 = VAR_8;
 int VAR_13;

 FUNC_0(FUNC_3(VAR_9));
 if (!VAR_10)
  return 0;


 FUNC_1(VAR_4, VAR_0);

 for (VAR_13 = 0; VAR_13 < VAR_12->numProcs; VAR_13++)
 {
  int VAR_14 = VAR_12->pgprocnos[VAR_13];
  PGPROC *VAR_15 = &VAR_7[VAR_14];
  PGXACT *VAR_16 = &VAR_6[VAR_14];
  TransactionId VAR_17;


  if (VAR_16->vacuumFlags & VAR_3)
   continue;


  if (VAR_15->backendId != VAR_10->backendId)
   continue;
  if (VAR_15->lxid != VAR_10->localTransactionId)
   continue;







  if (VAR_15->databaseId != VAR_1)
   continue;




  VAR_17 = FUNC_5(VAR_16->xmin);
  if (!FUNC_3(VAR_17) ||
   !FUNC_4(VAR_17, VAR_9))
   continue;







  VAR_2->xmin = VAR_5 = VAR_9;

  VAR_11 = 1;
  break;
 }

 FUNC_2(VAR_4);

 return VAR_11;
}
