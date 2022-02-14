
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {scalar_t__ phs_syncscan; } ;
struct TYPE_5__ {int phs_nblocks; int phs_startblock; TYPE_1__ base; int phs_nallocated; } ;
typedef int Relation ;
typedef TYPE_2__* ParallelBlockTableScanDesc ;
typedef int BlockNumber ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int) ;

BlockNumber
FUNC_2(Relation VAR_1, ParallelBlockTableScanDesc VAR_2)
{
 BlockNumber VAR_3;
 uint64 VAR_4;
 VAR_4 = FUNC_0(&VAR_2->phs_nallocated, 1);
 if (VAR_4 >= VAR_2->phs_nblocks)
  VAR_3 = VAR_0;
 else
  VAR_3 = (VAR_4 + VAR_2->phs_startblock) % VAR_2->phs_nblocks;
 if (VAR_2->base.phs_syncscan)
 {
  if (VAR_3 != VAR_0)
   FUNC_1(VAR_1, VAR_3);
  else if (VAR_4 == VAR_2->phs_nblocks)
   FUNC_1(VAR_1, VAR_2->phs_startblock);
 }

 return VAR_3;
}
