
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ btps_pageStatus; scalar_t__ btps_arrayKeyCount; int btps_cv; int btps_mutex; int btps_scanPage; } ;
struct TYPE_8__ {scalar_t__ arrayKeyCount; } ;
struct TYPE_7__ {TYPE_1__* parallel_scan; int opaque; } ;
struct TYPE_6__ {int ps_offset; } ;
typedef TYPE_1__* ParallelIndexScanDesc ;
typedef TYPE_2__* IndexScanDesc ;
typedef int BlockNumber ;
typedef TYPE_3__* BTScanOpaque ;
typedef TYPE_4__* BTParallelScanDesc ;
typedef scalar_t__ BTPS_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (void*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

bool
FUNC_5(IndexScanDesc VAR_4, BlockNumber *VAR_5)
{
 BTScanOpaque VAR_6 = (BTScanOpaque) VAR_4->opaque;
 BTPS_State VAR_7;
 bool VAR_8 = 0;
 bool VAR_9 = 1;
 ParallelIndexScanDesc VAR_10 = VAR_4->parallel_scan;
 BTParallelScanDesc VAR_11;

 *VAR_5 = VAR_2;

 VAR_11 = (BTParallelScanDesc) FUNC_2((void *) VAR_10,
              VAR_10->ps_offset);

 while (1)
 {
  FUNC_3(&VAR_11->btps_mutex);
  VAR_7 = VAR_11->btps_pageStatus;

  if (VAR_6->arrayKeyCount < VAR_11->btps_arrayKeyCount)
  {

   VAR_9 = 0;
  }
  else if (VAR_7 == VAR_1)
  {




   VAR_9 = 0;
  }
  else if (VAR_7 != VAR_0)
  {




   VAR_11->btps_pageStatus = VAR_0;
   *VAR_5 = VAR_11->btps_scanPage;
   VAR_8 = 1;
  }
  FUNC_4(&VAR_11->btps_mutex);
  if (VAR_8 || !VAR_9)
   break;
  FUNC_1(&VAR_11->btps_cv, VAR_3);
 }
 FUNC_0();

 return VAR_9;
}
