
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int plan; } ;
struct TYPE_10__ {int numGroups; int groupClause; int aggsplit; int aggstrategy; int qual; int path; int subpath; } ;
struct TYPE_9__ {int targetlist; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ Plan ;
typedef int Path ;
typedef int List ;
typedef TYPE_2__ AggPath ;
typedef TYPE_3__ Agg ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int *,int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int * FUNC_8 (int *,int ) ;

__attribute__((used)) static Agg *
FUNC_9(PlannerInfo *VAR_2, AggPath *VAR_3)
{
 Agg *VAR_4;
 Plan *VAR_5;
 List *VAR_6;
 List *VAR_7;





 VAR_5 = FUNC_2(VAR_2, VAR_3->subpath, VAR_0);

 VAR_6 = FUNC_0(VAR_2, &VAR_3->path);

 VAR_7 = FUNC_8(VAR_2, VAR_3->qual);

 VAR_4 = FUNC_7(VAR_6, VAR_7,
     VAR_3->aggstrategy,
     VAR_3->aggsplit,
     FUNC_6(VAR_3->groupClause),
     FUNC_4(VAR_3->groupClause,
            VAR_5->targetlist),
     FUNC_5(VAR_3->groupClause),
     FUNC_3(VAR_3->groupClause,
            VAR_5->targetlist),
     VAR_1,
     VAR_1,
     VAR_3->numGroups,
     VAR_5);

 FUNC_1(&VAR_4->plan, (Path *) VAR_3);

 return VAR_4;
}
