
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int plan; } ;
struct TYPE_10__ {int groupClause; int qual; int path; int subpath; } ;
struct TYPE_9__ {int targetlist; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ Plan ;
typedef int Path ;
typedef int List ;
typedef TYPE_2__ GroupPath ;
typedef TYPE_3__ Group ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int *,int *,int ,int ,int ,int ,TYPE_1__*) ;
 int * FUNC_8 (int *,int ) ;

__attribute__((used)) static Group *
FUNC_9(PlannerInfo *VAR_1, GroupPath *VAR_2)
{
 Group *VAR_3;
 Plan *VAR_4;
 List *VAR_5;
 List *VAR_6;





 VAR_4 = FUNC_2(VAR_1, VAR_2->subpath, VAR_0);

 VAR_5 = FUNC_0(VAR_1, &VAR_2->path);

 VAR_6 = FUNC_8(VAR_1, VAR_2->qual);

 VAR_3 = FUNC_7(VAR_5,
       VAR_6,
       FUNC_6(VAR_2->groupClause),
       FUNC_4(VAR_2->groupClause,
           VAR_4->targetlist),
       FUNC_5(VAR_2->groupClause),
       FUNC_3(VAR_2->groupClause,
              VAR_4->targetlist),
       VAR_4);

 FUNC_1(&VAR_3->plan, (Path *) VAR_2);

 return VAR_3;
}
