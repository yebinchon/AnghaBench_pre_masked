
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int btps_cv; scalar_t__ btps_arrayKeyCount; int btps_pageStatus; int btps_scanPage; int btps_mutex; } ;
typedef TYPE_1__* BTParallelScanDesc ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

void
FUNC_2(void *VAR_2)
{
 BTParallelScanDesc VAR_3 = (BTParallelScanDesc) VAR_2;

 FUNC_1(&VAR_3->btps_mutex);
 VAR_3->btps_scanPage = VAR_1;
 VAR_3->btps_pageStatus = VAR_0;
 VAR_3->btps_arrayKeyCount = 0;
 FUNC_0(&VAR_3->btps_cv);
}
