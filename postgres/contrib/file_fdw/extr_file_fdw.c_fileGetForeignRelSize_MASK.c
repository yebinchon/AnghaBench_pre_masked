
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int options; int is_program; int filename; } ;
struct TYPE_6__ {void* fdw_private; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef TYPE_2__ FileFdwPlanState ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(PlannerInfo *VAR_0,
       RelOptInfo *VAR_1,
       Oid VAR_2)
{
 FileFdwPlanState *VAR_3;






 VAR_3 = (FileFdwPlanState *) FUNC_2(sizeof(FileFdwPlanState));
 FUNC_1(VAR_2,
       &VAR_3->filename,
       &VAR_3->is_program,
       &VAR_3->options);
 VAR_1->fdw_private = (void *) VAR_3;


 FUNC_0(VAR_0, VAR_1, VAR_3);
}
