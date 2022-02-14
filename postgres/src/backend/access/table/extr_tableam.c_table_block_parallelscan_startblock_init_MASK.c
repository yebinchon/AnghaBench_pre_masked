
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int phs_syncscan; } ;
struct TYPE_5__ {scalar_t__ phs_startblock; int phs_mutex; int phs_nblocks; TYPE_1__ base; } ;
typedef int Relation ;
typedef TYPE_2__* ParallelBlockTableScanDesc ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void
FUNC_3(Relation VAR_1, ParallelBlockTableScanDesc VAR_2)
{
 BlockNumber VAR_3 = VAR_0;

retry:

 FUNC_0(&VAR_2->phs_mutex);
 if (VAR_2->phs_startblock == VAR_0)
 {
  if (!VAR_2->base.phs_syncscan)
   VAR_2->phs_startblock = 0;
  else if (VAR_3 != VAR_0)
   VAR_2->phs_startblock = VAR_3;
  else
  {
   FUNC_1(&VAR_2->phs_mutex);
   VAR_3 = FUNC_2(VAR_1, VAR_2->phs_nblocks);
   goto retry;
  }
 }
 FUNC_1(&VAR_2->phs_mutex);
}
