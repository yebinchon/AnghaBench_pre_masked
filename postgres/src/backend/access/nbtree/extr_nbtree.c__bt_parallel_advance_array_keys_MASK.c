
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ btps_pageStatus; int btps_mutex; int btps_arrayKeyCount; int btps_scanPage; } ;
struct TYPE_8__ {int arrayKeyCount; } ;
struct TYPE_7__ {TYPE_1__* parallel_scan; int opaque; } ;
struct TYPE_6__ {int ps_offset; } ;
typedef TYPE_1__* ParallelIndexScanDesc ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__* BTScanOpaque ;
typedef TYPE_4__* BTParallelScanDesc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(IndexScanDesc VAR_3)
{
 BTScanOpaque VAR_4 = (BTScanOpaque) VAR_3->opaque;
 ParallelIndexScanDesc VAR_5 = VAR_3->parallel_scan;
 BTParallelScanDesc VAR_6;

 VAR_6 = (BTParallelScanDesc) FUNC_0((void *) VAR_5,
              VAR_5->ps_offset);

 VAR_4->arrayKeyCount++;
 FUNC_1(&VAR_6->btps_mutex);
 if (VAR_6->btps_pageStatus == VAR_0)
 {
  VAR_6->btps_scanPage = VAR_2;
  VAR_6->btps_pageStatus = VAR_1;
  VAR_6->btps_arrayKeyCount++;
 }
 FUNC_2(&VAR_6->btps_mutex);
}
