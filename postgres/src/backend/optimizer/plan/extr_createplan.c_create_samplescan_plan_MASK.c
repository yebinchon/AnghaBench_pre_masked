
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int TableSampleClause ;
struct TYPE_15__ {scalar_t__ param_info; TYPE_1__* parent; } ;
struct TYPE_14__ {scalar_t__ rtekind; int * tablesample; } ;
struct TYPE_12__ {int plan; } ;
struct TYPE_13__ {TYPE_2__ scan; } ;
struct TYPE_11__ {scalar_t__ relid; } ;
typedef TYPE_3__ SampleScan ;
typedef TYPE_4__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef TYPE_5__ Path ;
typedef int Node ;
typedef int List ;
typedef scalar_t__ Index ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int * FUNC_2 (int *,int) ;
 TYPE_3__* FUNC_3 (int *,int *,scalar_t__,int *) ;
 int * FUNC_4 (int *,int *) ;
 TYPE_4__* FUNC_5 (scalar_t__,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;

__attribute__((used)) static SampleScan *
FUNC_7(PlannerInfo *VAR_1, Path *VAR_2,
        List *VAR_3, List *VAR_4)
{
 SampleScan *VAR_5;
 Index VAR_6 = VAR_2->parent->relid;
 RangeTblEntry *VAR_7;
 TableSampleClause *VAR_8;


 FUNC_0(VAR_6 > 0);
 VAR_7 = FUNC_5(VAR_6, VAR_1);
 FUNC_0(VAR_7->rtekind == VAR_0);
 VAR_8 = VAR_7->tablesample;
 FUNC_0(VAR_8 != ((void*)0));


 VAR_4 = FUNC_4(VAR_1, VAR_4);


 VAR_4 = FUNC_2(VAR_4, 0);


 if (VAR_2->param_info)
 {
  VAR_4 = (List *)
   FUNC_6(VAR_1, (Node *) VAR_4);
  VAR_8 = (TableSampleClause *)
   FUNC_6(VAR_1, (Node *) VAR_8);
 }

 VAR_5 = FUNC_3(VAR_3,
        VAR_4,
        VAR_6,
        VAR_8);

 FUNC_1(&VAR_5->scan.plan, VAR_2);

 return VAR_5;
}
