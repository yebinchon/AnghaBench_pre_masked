
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ param_info; TYPE_4__* parent; } ;
struct TYPE_12__ {scalar_t__ relid; scalar_t__ rtekind; int subplan_params; int subroot; } ;
struct TYPE_9__ {int plan; } ;
struct TYPE_11__ {TYPE_1__ scan; } ;
struct TYPE_10__ {TYPE_8__ path; int subpath; } ;
typedef TYPE_2__ SubqueryScanPath ;
typedef TYPE_3__ SubqueryScan ;
typedef TYPE_4__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Node ;
typedef int List ;
typedef scalar_t__ Index ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_8__*) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *,int) ;
 TYPE_3__* FUNC_4 (int *,int *,scalar_t__,int *) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;

__attribute__((used)) static SubqueryScan *
FUNC_8(PlannerInfo *VAR_1, SubqueryScanPath *VAR_2,
       List *VAR_3, List *VAR_4)
{
 SubqueryScan *VAR_5;
 RelOptInfo *VAR_6 = VAR_2->path.parent;
 Index VAR_7 = VAR_6->relid;
 Plan *VAR_8;


 FUNC_0(VAR_7 > 0);
 FUNC_0(VAR_6->rtekind == VAR_0);






 VAR_8 = FUNC_2(VAR_6->subroot, VAR_2->subpath);


 VAR_4 = FUNC_5(VAR_1, VAR_4);


 VAR_4 = FUNC_3(VAR_4, 0);


 if (VAR_2->path.param_info)
 {
  VAR_4 = (List *)
   FUNC_7(VAR_1, (Node *) VAR_4);
  FUNC_6(VAR_1,
           VAR_6->subplan_params);
 }

 VAR_5 = FUNC_4(VAR_3,
          VAR_4,
          VAR_7,
          VAR_8);

 FUNC_1(&VAR_5->scan.plan, &VAR_2->path);

 return VAR_5;
}
