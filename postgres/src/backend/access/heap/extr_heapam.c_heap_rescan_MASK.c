
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_4__ {int rs_flags; scalar_t__ rs_snapshot; } ;
struct TYPE_5__ {int rs_cbuf; TYPE_1__ rs_base; } ;
typedef int ScanKey ;
typedef TYPE_2__* HeapScanDesc ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

void
FUNC_4(TableScanDesc VAR_3, ScanKey VAR_4, bool VAR_5,
   bool VAR_6, bool VAR_7, bool VAR_8)
{
 HeapScanDesc VAR_9 = (HeapScanDesc) VAR_3;

 if (VAR_5)
 {
  if (VAR_6)
   VAR_9->rs_base.rs_flags |= VAR_1;
  else
   VAR_9->rs_base.rs_flags &= ~VAR_1;

  if (VAR_7)
   VAR_9->rs_base.rs_flags |= VAR_2;
  else
   VAR_9->rs_base.rs_flags &= ~VAR_2;

  if (VAR_8 && VAR_9->rs_base.rs_snapshot &&
   FUNC_1(VAR_9->rs_base.rs_snapshot))
   VAR_9->rs_base.rs_flags |= VAR_0;
  else
   VAR_9->rs_base.rs_flags &= ~VAR_0;
 }




 if (FUNC_0(VAR_9->rs_cbuf))
  FUNC_2(VAR_9->rs_cbuf);




 FUNC_3(VAR_9, VAR_4, 1);
}
