
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_4__ {int rs_flags; int rs_snapshot; TYPE_2__* rs_key; int rs_rd; } ;
struct TYPE_5__ {TYPE_1__ rs_base; int * rs_strategy; int rs_cbuf; } ;
typedef TYPE_2__* HeapScanDesc ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(TableScanDesc VAR_1)
{
 HeapScanDesc VAR_2 = (HeapScanDesc) VAR_1;






 if (FUNC_0(VAR_2->rs_cbuf))
  FUNC_3(VAR_2->rs_cbuf);




 FUNC_2(VAR_2->rs_base.rs_rd);

 if (VAR_2->rs_base.rs_key)
  FUNC_5(VAR_2->rs_base.rs_key);

 if (VAR_2->rs_strategy != ((void*)0))
  FUNC_1(VAR_2->rs_strategy);

 if (VAR_2->rs_base.rs_flags & VAR_0)
  FUNC_4(VAR_2->rs_base.rs_snapshot);

 FUNC_5(VAR_2);
}
