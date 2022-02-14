
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* rd_indam; } ;
struct TYPE_8__ {int xs_snapshot; scalar_t__ xs_temp_snap; TYPE_5__* indexRelation; int * xs_heapfetch; } ;
struct TYPE_7__ {int (* amendscan ) (TYPE_2__*) ;} ;
typedef TYPE_2__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(IndexScanDesc VAR_2)
{
 VAR_0;
 FUNC_0(VAR_1);


 if (VAR_2->xs_heapfetch)
 {
  FUNC_5(VAR_2->xs_heapfetch);
  VAR_2->xs_heapfetch = ((void*)0);
 }


 VAR_2->indexRelation->rd_indam->amendscan(VAR_2);


 FUNC_2(VAR_2->indexRelation);

 if (VAR_2->xs_temp_snap)
  FUNC_3(VAR_2->xs_snapshot);


 FUNC_1(VAR_2);
}
