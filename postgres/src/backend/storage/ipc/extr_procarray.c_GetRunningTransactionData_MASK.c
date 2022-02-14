
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef void* TransactionId ;
struct TYPE_13__ {scalar_t__ xids; } ;
struct TYPE_17__ {TYPE_1__ subxids; } ;
struct TYPE_16__ {int nxids; scalar_t__ overflowed; int xid; } ;
struct TYPE_15__ {int numProcs; int* pgprocnos; } ;
struct TYPE_14__ {void** xids; int xcnt; int subxcnt; int subxid_overflow; void* nextXid; void* oldestRunningXid; void* latestCompletedXid; } ;
struct TYPE_12__ {int nextFullXid; void* latestCompletedXid; } ;
typedef TYPE_2__ RunningTransactionsData ;
typedef TYPE_2__* RunningTransactions ;
typedef TYPE_4__ ProcArrayStruct ;
typedef TYPE_5__ PGXACT ;
typedef TYPE_6__ PGPROC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 TYPE_10__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*,void*) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 TYPE_6__* VAR_8 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (void**,void*,int) ;
 int FUNC_13 () ;
 TYPE_4__* VAR_9 ;

RunningTransactions
FUNC_14(void)
{

 static RunningTransactionsData VAR_10;

 ProcArrayStruct *VAR_11 = VAR_9;
 RunningTransactions VAR_12 = &VAR_10;
 TransactionId VAR_13;
 TransactionId VAR_14;
 TransactionId *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 bool VAR_19;

 FUNC_0(!FUNC_2());
 if (VAR_12->xids == ((void*)0))
 {



  VAR_12->xids = (TransactionId *)
   FUNC_11(VAR_5 * sizeof(TransactionId));
  if (VAR_12->xids == ((void*)0))
   FUNC_8(VAR_1,
     (FUNC_9(VAR_0),
      FUNC_10("out of memory")));
 }

 VAR_15 = VAR_12->xids;

 VAR_17 = VAR_18 = 0;
 VAR_19 = 0;





 FUNC_1(VAR_3, VAR_2);
 FUNC_1(VAR_6, VAR_2);

 VAR_13 = VAR_4->latestCompletedXid;

 VAR_14 = FUNC_7(VAR_4->nextFullXid);




 for (VAR_16 = 0; VAR_16 < VAR_11->numProcs; VAR_16++)
 {
  int VAR_20 = VAR_11->pgprocnos[VAR_16];
  PGXACT *VAR_21 = &VAR_7[VAR_20];
  TransactionId VAR_22;


  VAR_22 = FUNC_6(VAR_21->xid);





  if (!FUNC_4(VAR_22))
   continue;






  if (FUNC_5(VAR_22, VAR_14))
   VAR_14 = VAR_22;

  if (VAR_21->overflowed)
   VAR_19 = 1;
  VAR_15[VAR_17++] = VAR_22;
 }





 if (!VAR_19)
 {
  for (VAR_16 = 0; VAR_16 < VAR_11->numProcs; VAR_16++)
  {
   int VAR_23 = VAR_11->pgprocnos[VAR_16];
   PGPROC *VAR_24 = &VAR_8[VAR_23];
   PGXACT *VAR_25 = &VAR_7[VAR_23];
   int VAR_26;





   VAR_26 = VAR_25->nxids;
   if (VAR_26 > 0)
   {

    FUNC_13();

    FUNC_12(&VAR_15[VAR_17], (void *) VAR_24->subxids.xids,
        VAR_26 * sizeof(TransactionId));
    VAR_17 += VAR_26;
    VAR_18 += VAR_26;






   }
  }
 }
 VAR_12->xcnt = VAR_17 - VAR_18;
 VAR_12->subxcnt = VAR_18;
 VAR_12->subxid_overflow = VAR_19;
 VAR_12->nextXid = FUNC_7(VAR_4->nextFullXid);
 VAR_12->oldestRunningXid = VAR_14;
 VAR_12->latestCompletedXid = VAR_13;

 FUNC_0(FUNC_4(VAR_12->nextXid));
 FUNC_0(FUNC_4(VAR_12->oldestRunningXid));
 FUNC_0(FUNC_3(VAR_12->latestCompletedXid));



 return VAR_12;
}
