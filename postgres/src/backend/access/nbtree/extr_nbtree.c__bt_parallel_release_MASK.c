
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int btps_cv; int btps_mutex; int btps_pageStatus; int btps_scanPage; } ;
struct TYPE_6__ {TYPE_1__* parallel_scan; } ;
struct TYPE_5__ {int ps_offset; } ;
typedef TYPE_1__* ParallelIndexScanDesc ;
typedef TYPE_2__* IndexScanDesc ;
typedef int BlockNumber ;
typedef TYPE_3__* BTParallelScanDesc ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(IndexScanDesc VAR_1, BlockNumber VAR_2)
{
 ParallelIndexScanDesc VAR_3 = VAR_1->parallel_scan;
 BTParallelScanDesc VAR_4;

 VAR_4 = (BTParallelScanDesc) FUNC_1((void *) VAR_3,
              VAR_3->ps_offset);

 FUNC_2(&VAR_4->btps_mutex);
 VAR_4->btps_scanPage = VAR_2;
 VAR_4->btps_pageStatus = VAR_0;
 FUNC_3(&VAR_4->btps_mutex);
 FUNC_0(&VAR_4->btps_cv);
}
