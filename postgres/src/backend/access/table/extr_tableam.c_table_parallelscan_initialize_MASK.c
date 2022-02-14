
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int phs_snapshot_any; int phs_snapshot_off; } ;
struct TYPE_9__ {TYPE_1__* rd_tableam; } ;
struct TYPE_8__ {int (* parallelscan_initialize ) (TYPE_2__*,TYPE_3__*) ;} ;
typedef scalar_t__ Snapshot ;
typedef int Size ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* ParallelTableScanDesc ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;

void
FUNC_4(Relation VAR_1, ParallelTableScanDesc VAR_2,
         Snapshot VAR_3)
{
 Size VAR_4 = VAR_1->rd_tableam->parallelscan_initialize(VAR_1, VAR_2);

 VAR_2->phs_snapshot_off = VAR_4;

 if (FUNC_1(VAR_3))
 {
  FUNC_2(VAR_3, (char *) VAR_2 + VAR_2->phs_snapshot_off);
  VAR_2->phs_snapshot_any = 0;
 }
 else
 {
  FUNC_0(VAR_3 == VAR_0);
  VAR_2->phs_snapshot_any = 1;
 }
}
