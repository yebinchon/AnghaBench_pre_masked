
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_4__ {scalar_t__ snapshot_type; scalar_t__ xcnt; scalar_t__ subxcnt; scalar_t__ takenDuringRecovery; int suboverflowed; } ;
typedef TYPE_1__* Snapshot ;
typedef int Size ;
typedef int SerializedSnapshotData ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__,int) ;

Size
FUNC_3(Snapshot VAR_2)
{
 Size VAR_3;

 FUNC_0(VAR_2 != VAR_0);
 FUNC_0(VAR_2->snapshot_type == VAR_1);


 VAR_3 = FUNC_1(sizeof(SerializedSnapshotData),
     FUNC_2(VAR_2->xcnt, sizeof(TransactionId)));
 if (VAR_2->subxcnt > 0 &&
  (!VAR_2->suboverflowed || VAR_2->takenDuringRecovery))
  VAR_3 = FUNC_1(VAR_3,
      FUNC_2(VAR_2->subxcnt, sizeof(TransactionId)));

 return VAR_3;
}
