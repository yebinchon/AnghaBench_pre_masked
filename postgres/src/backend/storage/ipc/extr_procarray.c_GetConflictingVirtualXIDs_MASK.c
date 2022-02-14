
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int localTransactionId; int backendId; } ;
typedef TYPE_1__ VirtualTransactionId ;
typedef int TransactionId ;
struct TYPE_15__ {scalar_t__ pid; scalar_t__ databaseId; } ;
struct TYPE_14__ {int xmin; } ;
struct TYPE_13__ {int maxProcs; int numProcs; int* pgprocnos; } ;
typedef TYPE_2__ ProcArrayStruct ;
typedef TYPE_3__ PGXACT ;
typedef TYPE_4__ PGPROC ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__,TYPE_4__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__) ;
 TYPE_3__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int) ;
 TYPE_2__* VAR_8 ;

VirtualTransactionId *
FUNC_12(TransactionId VAR_9, Oid VAR_10)
{
 static VirtualTransactionId *VAR_11;
 ProcArrayStruct *VAR_12 = VAR_8;
 int VAR_13 = 0;
 int VAR_14;






 if (VAR_11 == ((void*)0))
 {
  VAR_11 = (VirtualTransactionId *)
   FUNC_11(sizeof(VirtualTransactionId) * (VAR_12->maxProcs + 1));
  if (VAR_11 == ((void*)0))
   FUNC_8(VAR_1,
     (FUNC_9(VAR_0),
      FUNC_10("out of memory")));
 }

 FUNC_1(VAR_5, VAR_4);

 for (VAR_14 = 0; VAR_14 < VAR_12->numProcs; VAR_14++)
 {
  int VAR_15 = VAR_12->pgprocnos[VAR_14];
  PGPROC *VAR_16 = &VAR_7[VAR_15];
  PGXACT *VAR_17 = &VAR_6[VAR_15];


  if (VAR_16->pid == 0)
   continue;

  if (!FUNC_3(VAR_10) ||
   VAR_16->databaseId == VAR_10)
  {

   TransactionId VAR_18 = FUNC_6(VAR_17->xmin);
   if (!FUNC_5(VAR_9) ||
    (FUNC_5(VAR_18) && !FUNC_4(VAR_18, VAR_9)))
   {
    VirtualTransactionId VAR_19;

    FUNC_0(VAR_19, *VAR_16);
    if (FUNC_7(VAR_19))
     VAR_11[VAR_13++] = VAR_19;
   }
  }
 }

 FUNC_2(VAR_5);


 VAR_11[VAR_13].backendId = VAR_2;
 VAR_11[VAR_13].localTransactionId = VAR_3;

 return VAR_11;
}
