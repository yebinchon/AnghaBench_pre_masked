
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int btps_mutex; scalar_t__ btps_arrayKeyCount; int btps_pageStatus; int btps_scanPage; } ;
struct TYPE_7__ {TYPE_1__* parallel_scan; } ;
struct TYPE_6__ {int ps_offset; } ;
typedef TYPE_1__* ParallelIndexScanDesc ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__* BTParallelScanDesc ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(IndexScanDesc VAR_2)
{
 BTParallelScanDesc VAR_3;
 ParallelIndexScanDesc VAR_4 = VAR_2->parallel_scan;

 FUNC_0(VAR_4);

 VAR_3 = (BTParallelScanDesc) FUNC_1((void *) VAR_4,
              VAR_4->ps_offset);






 FUNC_2(&VAR_3->btps_mutex);
 VAR_3->btps_scanPage = VAR_1;
 VAR_3->btps_pageStatus = VAR_0;
 VAR_3->btps_arrayKeyCount = 0;
 FUNC_3(&VAR_3->btps_mutex);
}
