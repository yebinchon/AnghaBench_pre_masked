
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ toplevel_xid; scalar_t__ xid; scalar_t__ base_snapshot_lsn; int * base_snapshot; int base_snapshot_node; } ;
typedef TYPE_1__ ReorderBufferTXN ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(ReorderBufferTXN *VAR_1,
          ReorderBufferTXN *VAR_2)
{
 FUNC_0(VAR_2->toplevel_xid == VAR_1->xid);

 if (VAR_2->base_snapshot != ((void*)0))
 {
  if (VAR_1->base_snapshot == ((void*)0) ||
   VAR_2->base_snapshot_lsn < VAR_1->base_snapshot_lsn)
  {




   if (VAR_1->base_snapshot != ((void*)0))
   {
    FUNC_1(VAR_1->base_snapshot);
    FUNC_2(&VAR_1->base_snapshot_node);
   }






   VAR_1->base_snapshot = VAR_2->base_snapshot;
   VAR_1->base_snapshot_lsn = VAR_2->base_snapshot_lsn;
   FUNC_3(&VAR_2->base_snapshot_node,
        &VAR_1->base_snapshot_node);





   VAR_2->base_snapshot = ((void*)0);
   VAR_2->base_snapshot_lsn = VAR_0;
   FUNC_2(&VAR_2->base_snapshot_node);
  }
  else
  {

   FUNC_1(VAR_2->base_snapshot);
   FUNC_2(&VAR_2->base_snapshot_node);
   VAR_2->base_snapshot = ((void*)0);
   VAR_2->base_snapshot_lsn = VAR_0;
  }
 }
}
