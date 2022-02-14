
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int subroot; } ;
struct TYPE_8__ {void* qual; void* targetlist; } ;
struct TYPE_9__ {int scanrelid; TYPE_1__ plan; } ;
struct TYPE_10__ {TYPE_2__ scan; int subplan; } ;
typedef TYPE_3__ SubqueryScan ;
typedef TYPE_4__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Plan ;


 int * FUNC_0 (int *,int ) ;
 TYPE_4__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static Plan *
FUNC_5(PlannerInfo *VAR_0,
       SubqueryScan *VAR_1,
       int VAR_2)
{
 RelOptInfo *VAR_3;
 Plan *VAR_4;


 VAR_3 = FUNC_1(VAR_0, VAR_1->scan.scanrelid);


 VAR_1->subplan = FUNC_3(VAR_3->subroot, VAR_1->subplan);

 if (FUNC_4(VAR_1))
 {



  VAR_4 = FUNC_0((Plan *) VAR_1, VAR_1->subplan);
 }
 else
 {







  VAR_1->scan.scanrelid += VAR_2;
  VAR_1->scan.plan.targetlist =
   FUNC_2(VAR_0, VAR_1->scan.plan.targetlist, VAR_2);
  VAR_1->scan.plan.qual =
   FUNC_2(VAR_0, VAR_1->scan.plan.qual, VAR_2);

  VAR_4 = (Plan *) VAR_1;
 }

 return VAR_4;
}
