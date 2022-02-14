
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {int kill_prior_tuple; int xactStartedInRecovery; int indexRelation; int xs_heap_continue; int xs_snapshot; int xs_heaptid; int xs_heapfetch; } ;
typedef TYPE_1__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int *,int *,int*) ;

bool
FUNC_2(IndexScanDesc VAR_0, TupleTableSlot *VAR_1)
{
 bool VAR_2 = 0;
 bool VAR_3;

 VAR_3 = FUNC_1(VAR_0->xs_heapfetch, &VAR_0->xs_heaptid,
         VAR_0->xs_snapshot, VAR_1,
         &VAR_0->xs_heap_continue, &VAR_2);

 if (VAR_3)
  FUNC_0(VAR_0->indexRelation);
 if (!VAR_0->xactStartedInRecovery)
  VAR_0->kill_prior_tuple = VAR_2;

 return VAR_3;
}
