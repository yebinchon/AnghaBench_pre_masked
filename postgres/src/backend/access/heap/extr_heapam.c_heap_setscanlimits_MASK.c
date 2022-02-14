
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_3__ {int rs_flags; } ;
struct TYPE_4__ {scalar_t__ rs_nblocks; scalar_t__ rs_numblocks; scalar_t__ rs_startblock; TYPE_1__ rs_base; int rs_inited; } ;
typedef TYPE_2__* HeapScanDesc ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;

void
FUNC_1(TableScanDesc VAR_1, BlockNumber VAR_2, BlockNumber VAR_3)
{
 HeapScanDesc VAR_4 = (HeapScanDesc) VAR_1;

 FUNC_0(!VAR_4->rs_inited);

 FUNC_0(!(VAR_4->rs_base.rs_flags & VAR_0));


 FUNC_0(VAR_2 == 0 || VAR_2 < VAR_4->rs_nblocks);

 VAR_4->rs_startblock = VAR_2;
 VAR_4->rs_numblocks = VAR_3;
}
