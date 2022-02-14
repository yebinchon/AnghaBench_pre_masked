
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ btps_arrayKeyCount; scalar_t__ btps_pageStatus; int btps_cv; int btps_mutex; } ;
struct TYPE_8__ {scalar_t__ arrayKeyCount; } ;
struct TYPE_7__ {TYPE_1__* parallel_scan; int opaque; } ;
struct TYPE_6__ {int ps_offset; } ;
typedef TYPE_1__* ParallelIndexScanDesc ;
typedef TYPE_2__* IndexScanDesc ;
typedef TYPE_3__* BTScanOpaque ;
typedef TYPE_4__* BTParallelScanDesc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(IndexScanDesc VAR_1)
{
 BTScanOpaque VAR_2 = (BTScanOpaque) VAR_1->opaque;
 ParallelIndexScanDesc VAR_3 = VAR_1->parallel_scan;
 BTParallelScanDesc VAR_4;
 bool VAR_5 = 0;


 if (VAR_3 == ((void*)0))
  return;

 VAR_4 = (BTParallelScanDesc) FUNC_1((void *) VAR_3,
              VAR_3->ps_offset);






 FUNC_2(&VAR_4->btps_mutex);
 if (VAR_2->arrayKeyCount >= VAR_4->btps_arrayKeyCount &&
  VAR_4->btps_pageStatus != VAR_0)
 {
  VAR_4->btps_pageStatus = VAR_0;
  VAR_5 = 1;
 }
 FUNC_3(&VAR_4->btps_mutex);


 if (VAR_5)
  FUNC_0(&VAR_4->btps_cv);
}
