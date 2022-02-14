
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int * printed_subplans; int rtable_names; int rtable; int deparse_cxt; TYPE_1__* pstmt; } ;
struct TYPE_18__ {scalar_t__ invisible; } ;
struct TYPE_17__ {scalar_t__ plan; } ;
struct TYPE_16__ {TYPE_3__* planstate; TYPE_1__* plannedstmt; } ;
struct TYPE_15__ {int rtable; } ;
typedef TYPE_2__ QueryDesc ;
typedef TYPE_3__ PlanState ;
typedef TYPE_4__ Gather ;
typedef TYPE_5__ ExplainState ;
typedef int Bitmapset ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int *,int *,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,int **) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int *) ;

void
FUNC_8(ExplainState *VAR_2, QueryDesc *VAR_3)
{
 Bitmapset *VAR_4 = ((void*)0);
 PlanState *VAR_5;


 FUNC_0(VAR_3->plannedstmt != ((void*)0));
 VAR_2->pstmt = VAR_3->plannedstmt;
 VAR_2->rtable = VAR_3->plannedstmt->rtable;
 FUNC_2(VAR_3->planstate, &VAR_4);
 VAR_2->rtable_names = FUNC_7(VAR_2->rtable, VAR_4);
 VAR_2->deparse_cxt = FUNC_5(VAR_2->rtable,
               VAR_2->rtable_names);
 VAR_2->printed_subplans = ((void*)0);







 VAR_5 = VAR_3->planstate;
 if (FUNC_4(VAR_5, VAR_0) &&((Gather *) VAR_5->plan)->invisible)
  VAR_5 = FUNC_6(VAR_5);
 FUNC_1(VAR_5, VAR_1, ((void*)0), ((void*)0), VAR_2);





 FUNC_3(VAR_2);
}
