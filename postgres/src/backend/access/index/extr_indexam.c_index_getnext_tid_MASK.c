
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* rd_indam; } ;
struct TYPE_7__ {int kill_prior_tuple; int xs_heap_continue; int xs_heaptid; TYPE_4__* indexRelation; scalar_t__ xs_heapfetch; } ;
struct TYPE_6__ {int (* amgettuple ) (TYPE_2__*,int ) ;} ;
typedef int ScanDirection ;
typedef int * ItemPointer ;
typedef TYPE_2__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (scalar_t__) ;

ItemPointer
FUNC_7(IndexScanDesc VAR_3, ScanDirection VAR_4)
{
 bool VAR_5;

 VAR_1;
 FUNC_1(VAR_2);

 FUNC_0(FUNC_3(VAR_0));







 VAR_5 = VAR_3->indexRelation->rd_indam->amgettuple(VAR_3, VAR_4);


 VAR_3->kill_prior_tuple = 0;
 VAR_3->xs_heap_continue = 0;


 if (!VAR_5)
 {

  if (VAR_3->xs_heapfetch)
   FUNC_6(VAR_3->xs_heapfetch);

  return ((void*)0);
 }
 FUNC_0(FUNC_2(&VAR_3->xs_heaptid));

 FUNC_4(VAR_3->indexRelation, 1);


 return &VAR_3->xs_heaptid;
}
