
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int (* SampleScanGetSampleSize ) (int *,TYPE_3__*,int ,int *,double*) ;} ;
typedef TYPE_1__ TsmRoutine ;
struct TYPE_12__ {int args; int tsmhandler; } ;
typedef TYPE_2__ TableSampleClause ;
struct TYPE_14__ {TYPE_2__* tablesample; } ;
struct TYPE_13__ {double tuples; int pages; } ;
typedef TYPE_3__ RelOptInfo ;
typedef TYPE_4__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef int BlockNumber ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*,int ,int *,double*) ;

__attribute__((used)) static void
FUNC_4(PlannerInfo *VAR_0, RelOptInfo *VAR_1, RangeTblEntry *VAR_2)
{
 TableSampleClause *VAR_3 = VAR_2->tablesample;
 TsmRoutine *VAR_4;
 BlockNumber VAR_5;
 double VAR_6;





 FUNC_1(VAR_0, VAR_1);






 VAR_4 = FUNC_0(VAR_3->tsmhandler);
 VAR_4->SampleScanGetSampleSize(VAR_0, VAR_1, VAR_3->args,
         &VAR_5, &VAR_6);







 VAR_1->pages = VAR_5;
 VAR_1->tuples = VAR_6;


 FUNC_2(VAR_0, VAR_1);
}
