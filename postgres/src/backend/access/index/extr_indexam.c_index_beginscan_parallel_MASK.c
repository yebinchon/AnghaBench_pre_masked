
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int xs_heapfetch; int xs_snapshot; int heapRelation; } ;
struct TYPE_7__ {scalar_t__ ps_relid; int ps_snapshot_data; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef TYPE_1__* ParallelIndexScanDesc ;
typedef TYPE_2__* IndexScanDesc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int ,int,int,int ,TYPE_1__*,int) ;
 int FUNC_5 (int ) ;

IndexScanDesc
FUNC_6(Relation VAR_0, Relation VAR_1, int VAR_2,
       int VAR_3, ParallelIndexScanDesc VAR_4)
{
 Snapshot VAR_5;
 IndexScanDesc VAR_6;

 FUNC_0(FUNC_2(VAR_0) == VAR_4->ps_relid);
 VAR_5 = FUNC_3(VAR_4->ps_snapshot_data);
 FUNC_1(VAR_5);
 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_5,
         VAR_4, 1);





 VAR_6->heapRelation = VAR_0;
 VAR_6->xs_snapshot = VAR_5;


 VAR_6->xs_heapfetch = FUNC_5(VAR_0);

 return VAR_6;
}
