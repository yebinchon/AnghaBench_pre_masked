
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ** params_list; int buf; TYPE_2__* scanrel; TYPE_2__* foreignrel; int * root; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_8__ {scalar_t__ reloptkind; } ;
typedef int StringInfo ;
typedef int Relation ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;
typedef int Index ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int,int **,TYPE_1__*) ;
 int FUNC_4 (int ,int *,TYPE_2__*,int,int ,int **,int **) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int,int *,int *,int **) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int *) ;

void
FUNC_9(StringInfo VAR_3, PlannerInfo *VAR_4,
        Index VAR_5, Relation VAR_6,
        RelOptInfo *VAR_7,
        List *VAR_8,
        List **VAR_9,
        List *VAR_10,
        List **VAR_11)
{
 deparse_expr_cxt VAR_12;


 VAR_12.root = VAR_4;
 VAR_12.foreignrel = VAR_7;
 VAR_12.scanrel = VAR_7;
 VAR_12.buf = VAR_3;
 VAR_12.params_list = VAR_9;

 FUNC_2(VAR_3, "DELETE FROM ");
 FUNC_5(VAR_3, VAR_6);
 if (VAR_7->reloptkind == VAR_1)
  FUNC_1(VAR_3, " %s%d", VAR_2, VAR_5);

 if (VAR_7->reloptkind == VAR_1)
 {
  List *VAR_13 = VAR_0;

  FUNC_2(VAR_3, " USING ");
  FUNC_4(VAR_3, VAR_4, VAR_7, 1, VAR_5,
         &VAR_13, VAR_9);
  VAR_8 = FUNC_7(VAR_8, VAR_13);
 }

 if (VAR_8)
 {
  FUNC_2(VAR_3, " WHERE ");
  FUNC_0(VAR_8, &VAR_12);
 }

 if (VAR_7->reloptkind == VAR_1)
  FUNC_3(VAR_10, 1, VAR_11,
          &VAR_12);
 else
  FUNC_6(VAR_3, FUNC_8(VAR_5, VAR_4),
        VAR_5, VAR_6, 0,
        VAR_0, VAR_10, VAR_11);
}
