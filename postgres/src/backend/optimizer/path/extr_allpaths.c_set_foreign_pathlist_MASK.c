
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int relid; } ;
struct TYPE_8__ {TYPE_1__* fdwroutine; } ;
struct TYPE_7__ {int (* GetForeignPaths ) (int *,TYPE_2__*,int ) ;} ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ RangeTblEntry ;
typedef int PlannerInfo ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_1(PlannerInfo *VAR_0, RelOptInfo *VAR_1, RangeTblEntry *VAR_2)
{

 VAR_1->fdwroutine->GetForeignPaths(VAR_0, VAR_1, VAR_2->relid);
}
