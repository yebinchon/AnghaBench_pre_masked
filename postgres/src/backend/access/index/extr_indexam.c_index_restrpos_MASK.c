
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int kill_prior_tuple; int xs_heap_continue; TYPE_2__* indexRelation; scalar_t__ xs_heapfetch; int xs_snapshot; } ;
struct TYPE_7__ {TYPE_1__* rd_indam; } ;
struct TYPE_6__ {int (* amrestrpos ) (TYPE_3__*) ;} ;
typedef TYPE_3__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(IndexScanDesc VAR_2)
{
 FUNC_0(FUNC_2(VAR_2->xs_snapshot));

 VAR_0;
 FUNC_1(VAR_1);


 if (VAR_2->xs_heapfetch)
  FUNC_4(VAR_2->xs_heapfetch);

 VAR_2->kill_prior_tuple = 0;
 VAR_2->xs_heap_continue = 0;

 VAR_2->indexRelation->rd_indam->amrestrpos(VAR_2);
}
