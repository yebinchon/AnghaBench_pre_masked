
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inline_cte_walker_context {int levelsup; scalar_t__ refcount; int ctequery; int ctename; } ;
struct TYPE_6__ {scalar_t__ cterefcount; int ctequery; int ctename; } ;
struct TYPE_5__ {scalar_t__ parse; } ;
typedef TYPE_1__ PlannerInfo ;
typedef int Node ;
typedef TYPE_2__ CommonTableExpr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct inline_cte_walker_context*) ;

__attribute__((used)) static void
FUNC_3(PlannerInfo *VAR_1, CommonTableExpr *VAR_2)
{
 struct inline_cte_walker_context VAR_3;

 VAR_3.ctename = VAR_2->ctename;

 VAR_3.levelsup = -1;
 VAR_3.refcount = VAR_2->cterefcount;
 VAR_3.ctequery = FUNC_1(VAR_0, VAR_2->ctequery);

 (void) FUNC_2((Node *) VAR_1->parse, &VAR_3);


 FUNC_0(VAR_3.refcount == 0);
}
