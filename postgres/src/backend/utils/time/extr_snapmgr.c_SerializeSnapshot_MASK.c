
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char TransactionId ;
struct TYPE_6__ {int xcnt; scalar_t__ subxcnt; scalar_t__ suboverflowed; int lsn; int whenTaken; int curcid; int takenDuringRecovery; int xmax; int xmin; } ;
struct TYPE_5__ {scalar_t__ subxcnt; int xcnt; TYPE_2__* subxip; TYPE_2__* xip; int takenDuringRecovery; int lsn; int whenTaken; int curcid; scalar_t__ suboverflowed; int xmax; int xmin; } ;
typedef TYPE_1__* Snapshot ;
typedef int Size ;
typedef TYPE_2__ SerializedSnapshotData ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_2__*,int) ;

void
FUNC_2(Snapshot VAR_0, char *VAR_1)
{
 SerializedSnapshotData VAR_2;

 FUNC_0(VAR_0->subxcnt >= 0);


 VAR_2.xmin = VAR_0->xmin;
 VAR_2.xmax = VAR_0->xmax;
 VAR_2.xcnt = VAR_0->xcnt;
 VAR_2.subxcnt = VAR_0->subxcnt;
 VAR_2.suboverflowed = VAR_0->suboverflowed;
 VAR_2.takenDuringRecovery = VAR_0->takenDuringRecovery;
 VAR_2.curcid = VAR_0->curcid;
 VAR_2.whenTaken = VAR_0->whenTaken;
 VAR_2.lsn = VAR_0->lsn;






 if (VAR_2.suboverflowed && !VAR_0->takenDuringRecovery)
  VAR_2.subxcnt = 0;


 FUNC_1(VAR_1,
     &VAR_2, sizeof(SerializedSnapshotData));


 if (VAR_0->xcnt > 0)
  FUNC_1((TransactionId *) (VAR_1 +
          sizeof(SerializedSnapshotData)),
      VAR_0->xip, VAR_0->xcnt * sizeof(TransactionId));







 if (VAR_2.subxcnt > 0)
 {
  Size VAR_3 = sizeof(SerializedSnapshotData) +
  VAR_0->xcnt * sizeof(TransactionId);

  FUNC_1((TransactionId *) (VAR_1 + VAR_3),
      VAR_0->subxip, VAR_0->subxcnt * sizeof(TransactionId));
 }
}
