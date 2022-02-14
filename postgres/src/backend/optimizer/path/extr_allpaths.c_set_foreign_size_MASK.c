
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int relid; } ;
struct TYPE_9__ {int rows; TYPE_1__* fdwroutine; } ;
struct TYPE_8__ {int (* GetForeignRelSize ) (int *,TYPE_2__*,int ) ;} ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ RangeTblEntry ;
typedef int PlannerInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(PlannerInfo *VAR_0, RelOptInfo *VAR_1, RangeTblEntry *VAR_2)
{

 FUNC_1(VAR_0, VAR_1);


 VAR_1->fdwroutine->GetForeignRelSize(VAR_0, VAR_1, VAR_2->relid);


 VAR_1->rows = FUNC_0(VAR_1->rows);
}
