
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int xcnt; int subxcnt; int copied; struct TYPE_8__* subxip; scalar_t__ takenDuringRecovery; int suboverflowed; struct TYPE_8__* xip; scalar_t__ active_count; scalar_t__ regd_count; } ;
typedef TYPE_1__ TransactionId ;
typedef int SnapshotData ;
typedef TYPE_1__* Snapshot ;
typedef int Size ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static Snapshot
FUNC_3(Snapshot VAR_2)
{
 Snapshot VAR_3;
 Size VAR_4;
 Size VAR_5;

 FUNC_0(VAR_2 != VAR_0);


 VAR_5 = VAR_4 = sizeof(SnapshotData) +
  VAR_2->xcnt * sizeof(TransactionId);
 if (VAR_2->subxcnt > 0)
  VAR_5 += VAR_2->subxcnt * sizeof(TransactionId);

 VAR_3 = (Snapshot) FUNC_1(VAR_1, VAR_5);
 FUNC_2(VAR_3, VAR_2, sizeof(SnapshotData));

 VAR_3->regd_count = 0;
 VAR_3->active_count = 0;
 VAR_3->copied = 1;


 if (VAR_2->xcnt > 0)
 {
  VAR_3->xip = (TransactionId *) (VAR_3 + 1);
  FUNC_2(VAR_3->xip, VAR_2->xip,
      VAR_2->xcnt * sizeof(TransactionId));
 }
 else
  VAR_3->xip = ((void*)0);







 if (VAR_2->subxcnt > 0 &&
  (!VAR_2->suboverflowed || VAR_2->takenDuringRecovery))
 {
  VAR_3->subxip = (TransactionId *) ((char *) VAR_3 + VAR_4);
  FUNC_2(VAR_3->subxip, VAR_2->subxip,
      VAR_2->subxcnt * sizeof(TransactionId));
 }
 else
  VAR_3->subxip = ((void*)0);

 return VAR_3;
}
