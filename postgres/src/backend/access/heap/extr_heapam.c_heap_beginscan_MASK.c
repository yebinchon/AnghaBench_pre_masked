
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int TableScanDesc ;
struct TYPE_6__ {int rs_nkeys; int rs_flags; int * rs_key; int rs_parallel; scalar_t__ rs_snapshot; int rs_rd; } ;
struct TYPE_5__ {int t_tableOid; } ;
struct TYPE_7__ {TYPE_2__ rs_base; TYPE_1__ rs_ctup; int * rs_strategy; } ;
typedef scalar_t__ Snapshot ;
typedef int ScanKeyData ;
typedef int * ScanKey ;
typedef int Relation ;
typedef int ParallelTableScanDesc ;
typedef int HeapScanDescData ;
typedef TYPE_3__* HeapScanDesc ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_3__*,int *,int) ;
 scalar_t__ FUNC_6 (int) ;

TableScanDesc
FUNC_7(Relation VAR_3, Snapshot VAR_4,
      int VAR_5, ScanKey VAR_6,
      ParallelTableScanDesc VAR_7,
      uint32 VAR_8)
{
 HeapScanDesc VAR_9;
 FUNC_4(VAR_3);




 VAR_9 = (HeapScanDesc) FUNC_6(sizeof(HeapScanDescData));

 VAR_9->rs_base.rs_rd = VAR_3;
 VAR_9->rs_base.rs_snapshot = VAR_4;
 VAR_9->rs_base.rs_nkeys = VAR_5;
 VAR_9->rs_base.rs_flags = VAR_8;
 VAR_9->rs_base.rs_parallel = VAR_7;
 VAR_9->rs_strategy = ((void*)0);




 if (!(VAR_4 && FUNC_1(VAR_4)))
  VAR_9->rs_base.rs_flags &= ~VAR_0;
 if (VAR_9->rs_base.rs_flags & (VAR_2 | VAR_1))
 {





  FUNC_0(VAR_4);
  FUNC_2(VAR_3, VAR_4);
 }


 VAR_9->rs_ctup.t_tableOid = FUNC_3(VAR_3);





 if (VAR_5 > 0)
  VAR_9->rs_base.rs_key = (ScanKey) FUNC_6(sizeof(ScanKeyData) * VAR_5);
 else
  VAR_9->rs_base.rs_key = ((void*)0);

 FUNC_5(VAR_9, VAR_6, 0);

 return (TableScanDesc) VAR_9;
}
