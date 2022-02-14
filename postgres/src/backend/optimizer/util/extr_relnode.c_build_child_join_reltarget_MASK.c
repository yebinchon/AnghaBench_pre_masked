
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* reltarget; } ;
struct TYPE_6__ {int per_tuple; int startup; } ;
struct TYPE_7__ {int width; TYPE_1__ cost; int * exprs; } ;
typedef TYPE_3__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int List ;
typedef int AppendRelInfo ;


 scalar_t__ FUNC_0 (int *,int *,int,int **) ;

__attribute__((used)) static void
FUNC_1(PlannerInfo *VAR_0,
         RelOptInfo *VAR_1,
         RelOptInfo *VAR_2,
         int VAR_3,
         AppendRelInfo **VAR_4)
{

 VAR_2->reltarget->exprs = (List *)
  FUNC_0(VAR_0,
          (Node *) VAR_1->reltarget->exprs,
          VAR_3, VAR_4);


 VAR_2->reltarget->cost.startup = VAR_1->reltarget->cost.startup;
 VAR_2->reltarget->cost.per_tuple = VAR_1->reltarget->cost.per_tuple;
 VAR_2->reltarget->width = VAR_1->reltarget->width;
}
