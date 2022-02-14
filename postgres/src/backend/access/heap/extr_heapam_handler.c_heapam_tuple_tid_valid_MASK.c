
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_2__ {scalar_t__ rs_nblocks; } ;
typedef int ItemPointer ;
typedef TYPE_1__* HeapScanDesc ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(TableScanDesc VAR_0, ItemPointer VAR_1)
{
 HeapScanDesc VAR_2 = (HeapScanDesc) VAR_0;

 return FUNC_1(VAR_1) &&
  FUNC_0(VAR_1) < VAR_2->rs_nblocks;
}
