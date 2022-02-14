
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* indexRelation; scalar_t__ xs_heapfetch; } ;
struct TYPE_7__ {TYPE_1__* rd_indam; } ;
struct TYPE_6__ {int (* amparallelrescan ) (TYPE_3__*) ;} ;
typedef TYPE_3__* IndexScanDesc ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(IndexScanDesc VAR_1)
{
 VAR_0;

 if (VAR_1->xs_heapfetch)
  FUNC_1(VAR_1->xs_heapfetch);


 if (VAR_1->indexRelation->rd_indam->amparallelrescan != ((void*)0))
  VAR_1->indexRelation->rd_indam->amparallelrescan(VAR_1);
}
