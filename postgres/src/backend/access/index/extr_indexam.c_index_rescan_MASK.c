
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int numberOfKeys; int numberOfOrderBys; int kill_prior_tuple; int xs_heap_continue; TYPE_2__* indexRelation; scalar_t__ xs_heapfetch; } ;
struct TYPE_7__ {TYPE_1__* rd_indam; } ;
struct TYPE_6__ {int (* amrescan ) (TYPE_3__*,int ,int,int ,int) ;} ;
typedef int ScanKey ;
typedef TYPE_3__* IndexScanDesc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ,int,int ,int) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(IndexScanDesc VAR_2,
    ScanKey VAR_3, int VAR_4,
    ScanKey VAR_5, int VAR_6)
{
 VAR_0;
 FUNC_1(VAR_1);

 FUNC_0(VAR_4 == VAR_2->numberOfKeys);
 FUNC_0(VAR_6 == VAR_2->numberOfOrderBys);


 if (VAR_2->xs_heapfetch)
  FUNC_3(VAR_2->xs_heapfetch);

 VAR_2->kill_prior_tuple = 0;
 VAR_2->xs_heap_continue = 0;

 VAR_2->indexRelation->rd_indam->amrescan(VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6);
}
