
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phs_nallocated; } ;
typedef int Relation ;
typedef int ParallelTableScanDesc ;
typedef TYPE_1__* ParallelBlockTableScanDesc ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(Relation VAR_0, ParallelTableScanDesc VAR_1)
{
 ParallelBlockTableScanDesc VAR_2 = (ParallelBlockTableScanDesc) VAR_1;

 FUNC_0(&VAR_2->phs_nallocated, 0);
}
