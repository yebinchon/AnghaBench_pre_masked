
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lateral_relids; int rows; scalar_t__ fdw_private; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Path ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int FileFdwPlanState ;
typedef int Cost ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int **) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int *,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int *,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_6(PlannerInfo *VAR_1,
     RelOptInfo *VAR_2,
     Oid VAR_3)
{
 FileFdwPlanState *VAR_4 = (FileFdwPlanState *) VAR_2->fdw_private;
 Cost VAR_5;
 Cost VAR_6;
 List *VAR_7;
 List *VAR_8 = VAR_0;


 if (FUNC_1(VAR_2,
            VAR_3,
            &VAR_7))
  VAR_8 = FUNC_4(FUNC_5("convert_selectively",
            (Node *) VAR_7, -1));


 FUNC_3(VAR_1, VAR_2, VAR_4,
       &VAR_5, &VAR_6);
 FUNC_0(VAR_2, (Path *)
    FUNC_2(VAR_1, VAR_2,
          ((void*)0),
          VAR_2->rows,
          VAR_5,
          VAR_6,
          VAR_0,
          VAR_2->lateral_relids,
          ((void*)0),
          VAR_8));






}
