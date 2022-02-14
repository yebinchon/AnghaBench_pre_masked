
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * rs_parallel; } ;
struct TYPE_7__ {scalar_t__ rs_startblock; scalar_t__ rs_cblock; scalar_t__ rs_nblocks; TYPE_1__ rs_base; } ;
struct TYPE_6__ {scalar_t__ phs_startblock; scalar_t__ phs_nblocks; } ;
typedef TYPE_2__* ParallelBlockTableScanDesc ;
typedef TYPE_3__* HeapScanDesc ;
typedef scalar_t__ BlockNumber ;



__attribute__((used)) static BlockNumber
FUNC_0(HeapScanDesc VAR_0)
{
 ParallelBlockTableScanDesc VAR_1 = ((void*)0);
 BlockNumber VAR_2;
 BlockNumber VAR_3;

 if (VAR_0->rs_base.rs_parallel != ((void*)0))
 {
  VAR_1 = (ParallelBlockTableScanDesc) VAR_0->rs_base.rs_parallel;
  VAR_2 = VAR_1->phs_startblock;
 }
 else
  VAR_2 = VAR_0->rs_startblock;





 if (VAR_0->rs_cblock > VAR_2)
  VAR_3 = VAR_0->rs_cblock - VAR_2;
 else
 {
  BlockNumber VAR_4;

  VAR_4 = VAR_1 != ((void*)0) ? VAR_1->phs_nblocks : VAR_0->rs_nblocks;
  VAR_3 = VAR_4 - VAR_2 +
   VAR_0->rs_cblock;
 }

 return VAR_3;
}
