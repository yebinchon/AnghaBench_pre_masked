
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_18__ {void* latestCompletedXid; } ;
struct TYPE_13__ {scalar_t__ xids; } ;
struct TYPE_17__ {TYPE_1__ subxids; } ;
struct TYPE_16__ {int vacuumFlags; void* xmin; void* xid; int nxids; scalar_t__ overflowed; } ;
struct TYPE_15__ {int* pgprocnos; int numProcs; void* replication_slot_catalog_xmin; void* replication_slot_xmin; int lastOverflowedXid; } ;
struct TYPE_14__ {void** xip; void** subxip; int xcnt; int subxcnt; int suboverflowed; int copied; scalar_t__ whenTaken; int lsn; scalar_t__ regd_count; scalar_t__ active_count; int curcid; void* xmax; void* xmin; int takenDuringRecovery; } ;
typedef TYPE_2__* Snapshot ;
typedef TYPE_3__ ProcArrayStruct ;
typedef TYPE_4__ PGXACT ;
typedef TYPE_5__ PGPROC ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (void**,void**,void*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__,void*) ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_10 (void*,void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_11 () ;
 TYPE_9__* VAR_13 ;
 int FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (void*) ;
 scalar_t__ FUNC_14 (void*) ;
 scalar_t__ FUNC_15 (void*,void*) ;
 scalar_t__ FUNC_16 (void*,int ) ;
 void* VAR_14 ;
 void* FUNC_17 (void*) ;
 TYPE_4__* VAR_15 ;
 TYPE_5__* VAR_16 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (void**,void*,int) ;
 scalar_t__ VAR_17 ;
 int FUNC_23 () ;
 TYPE_3__* VAR_18 ;
 void* VAR_19 ;

Snapshot
FUNC_24(Snapshot VAR_20)
{
 ProcArrayStruct *VAR_21 = VAR_18;
 TransactionId VAR_22;
 TransactionId VAR_23;
 TransactionId VAR_24;
 int VAR_25;
 int VAR_26 = 0;
 int VAR_27 = 0;
 bool VAR_28 = 0;
 TransactionId VAR_29 = VAR_3;
 TransactionId VAR_30 = VAR_3;

 FUNC_0(VAR_20 != ((void*)0));
 if (VAR_20->xip == ((void*)0))
 {




  VAR_20->xip = (TransactionId *)
   FUNC_21(FUNC_3() * sizeof(TransactionId));
  if (VAR_20->xip == ((void*)0))
   FUNC_18(VAR_1,
     (FUNC_19(VAR_0),
      FUNC_20("out of memory")));
  FUNC_0(VAR_20->subxip == ((void*)0));
  VAR_20->subxip = (TransactionId *)
   FUNC_21(FUNC_2() * sizeof(TransactionId));
  if (VAR_20->subxip == ((void*)0))
   FUNC_18(VAR_1,
     (FUNC_19(VAR_0),
      FUNC_20("out of memory")));
 }





 FUNC_7(VAR_9, VAR_5);


 VAR_23 = VAR_13->latestCompletedXid;
 FUNC_0(FUNC_13(VAR_23));
 FUNC_12(VAR_23);


 VAR_24 = VAR_22 = VAR_23;

 VAR_20->takenDuringRecovery = FUNC_11();

 if (!VAR_20->takenDuringRecovery)
 {
  int *VAR_31 = VAR_21->pgprocnos;
  int VAR_32;






  VAR_32 = VAR_21->numProcs;
  for (VAR_25 = 0; VAR_25 < VAR_32; VAR_25++)
  {
   int VAR_33 = VAR_31[VAR_25];
   PGXACT *VAR_34 = &VAR_15[VAR_33];
   TransactionId VAR_35;





   if (VAR_34->vacuumFlags &
    (VAR_7 | VAR_8))
    continue;


   VAR_35 = FUNC_17(VAR_34->xmin);
   if (FUNC_13(VAR_35) &&
    FUNC_10(VAR_35, VAR_24))
    VAR_24 = VAR_35;


   VAR_35 = FUNC_17(VAR_34->xid);







   if (!FUNC_13(VAR_35)
    || !FUNC_10(VAR_35, VAR_23))
    continue;





   if (FUNC_10(VAR_35, VAR_22))
    VAR_22 = VAR_35;
   if (VAR_34 == VAR_6)
    continue;


   VAR_20->xip[VAR_26++] = VAR_35;
   if (!VAR_28)
   {
    if (VAR_34->overflowed)
     VAR_28 = 1;
    else
    {
     int VAR_36 = VAR_34->nxids;

     if (VAR_36 > 0)
     {
      PGPROC *VAR_37 = &VAR_16[VAR_33];

      FUNC_23();

      FUNC_22(VAR_20->subxip + VAR_27,
          (void *) VAR_37->subxids.xids,
          VAR_36 * sizeof(TransactionId));
      VAR_27 += VAR_36;
     }
    }
   }
  }
 }
 else
 {
  VAR_27 = FUNC_6(VAR_20->subxip, &VAR_22,
              VAR_23);

  if (FUNC_16(VAR_22, VAR_18->lastOverflowedXid))
   VAR_28 = 1;
 }







 VAR_29 = VAR_18->replication_slot_xmin;
 VAR_30 = VAR_18->replication_slot_catalog_xmin;

 if (!FUNC_14(VAR_6->xmin))
  VAR_6->xmin = VAR_14 = VAR_22;

 FUNC_8(VAR_9);






 if (FUNC_15(VAR_22, VAR_24))
  VAR_24 = VAR_22;


 VAR_11 = VAR_24 - VAR_19;
 if (!FUNC_13(VAR_11))
  VAR_11 = VAR_2;


 if (FUNC_14(VAR_29) &&
  FUNC_10(VAR_29, VAR_11))
  VAR_11 = VAR_29;


 VAR_10 = VAR_11;





 if (FUNC_13(VAR_30) &&
  FUNC_10(VAR_30, VAR_11))
  VAR_11 = VAR_30;

 VAR_12 = VAR_22;

 VAR_20->xmin = VAR_22;
 VAR_20->xmax = VAR_23;
 VAR_20->xcnt = VAR_26;
 VAR_20->subxcnt = VAR_27;
 VAR_20->suboverflowed = VAR_28;

 VAR_20->curcid = FUNC_1(0);





 VAR_20->active_count = 0;
 VAR_20->regd_count = 0;
 VAR_20->copied = 0;

 if (VAR_17 < 0)
 {




  VAR_20->lsn = VAR_4;
  VAR_20->whenTaken = 0;
 }
 else
 {





  VAR_20->lsn = FUNC_5();
  VAR_20->whenTaken = FUNC_4();
  FUNC_9(VAR_20->whenTaken, VAR_22);
 }

 return VAR_20;
}
