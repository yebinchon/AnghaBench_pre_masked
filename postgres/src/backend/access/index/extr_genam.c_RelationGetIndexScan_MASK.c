
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numberOfKeys; int numberOfOrderBys; int xs_want_itup; int kill_prior_tuple; int ignore_killed_tuples; int * xs_hitupdesc; int * xs_hitup; int * xs_itupdesc; int * xs_itup; int * opaque; int xactStartedInRecovery; int * orderByData; int * keyData; int xs_snapshot; int indexRelation; int * xs_heapfetch; int * heapRelation; } ;
typedef int ScanKeyData ;
typedef void* ScanKey ;
typedef int Relation ;
typedef int IndexScanDescData ;
typedef TYPE_1__* IndexScanDesc ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

IndexScanDesc
FUNC_2(Relation VAR_1, int VAR_2, int VAR_3)
{
 IndexScanDesc VAR_4;

 VAR_4 = (IndexScanDesc) FUNC_1(sizeof(IndexScanDescData));

 VAR_4->heapRelation = ((void*)0);
 VAR_4->xs_heapfetch = ((void*)0);
 VAR_4->indexRelation = VAR_1;
 VAR_4->xs_snapshot = VAR_0;
 VAR_4->numberOfKeys = VAR_2;
 VAR_4->numberOfOrderBys = VAR_3;




 if (VAR_2 > 0)
  VAR_4->keyData = (ScanKey) FUNC_1(sizeof(ScanKeyData) * VAR_2);
 else
  VAR_4->keyData = ((void*)0);
 if (VAR_3 > 0)
  VAR_4->orderByData = (ScanKey) FUNC_1(sizeof(ScanKeyData) * VAR_3);
 else
  VAR_4->orderByData = ((void*)0);

 VAR_4->xs_want_itup = 0;
 VAR_4->kill_prior_tuple = 0;
 VAR_4->xactStartedInRecovery = FUNC_0();
 VAR_4->ignore_killed_tuples = !VAR_4->xactStartedInRecovery;

 VAR_4->opaque = ((void*)0);

 VAR_4->xs_itup = ((void*)0);
 VAR_4->xs_itupdesc = ((void*)0);
 VAR_4->xs_hitup = ((void*)0);
 VAR_4->xs_hitupdesc = ((void*)0);

 return VAR_4;
}
