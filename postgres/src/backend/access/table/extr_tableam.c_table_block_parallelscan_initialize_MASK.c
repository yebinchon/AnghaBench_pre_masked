
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phs_syncscan; int phs_relid; } ;
struct TYPE_4__ {int phs_nblocks; int phs_nallocated; int phs_startblock; int phs_mutex; TYPE_1__ base; } ;
typedef int Size ;
typedef int Relation ;
typedef int ParallelTableScanDesc ;
typedef int ParallelBlockTableScanDescData ;
typedef TYPE_2__* ParallelBlockTableScanDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_2 ;

Size
FUNC_5(Relation VAR_3, ParallelTableScanDesc VAR_4)
{
 ParallelBlockTableScanDesc VAR_5 = (ParallelBlockTableScanDesc) VAR_4;

 VAR_5->base.phs_relid = FUNC_1(VAR_3);
 VAR_5->phs_nblocks = FUNC_0(VAR_3);

 VAR_5->base.phs_syncscan = VAR_2 &&
  !FUNC_2(VAR_3) &&
  VAR_5->phs_nblocks > VAR_1 / 4;
 FUNC_3(&VAR_5->phs_mutex);
 VAR_5->phs_startblock = VAR_0;
 FUNC_4(&VAR_5->phs_nallocated, 0);

 return sizeof(ParallelBlockTableScanDescData);
}
