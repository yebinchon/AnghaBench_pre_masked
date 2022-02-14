
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int ** params_list; TYPE_2__* scanrel; TYPE_2__* foreignrel; int * root; int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_17__ {int * remote_conds; TYPE_2__* outerrel; } ;
struct TYPE_16__ {scalar_t__ fdw_private; } ;
typedef int StringInfo ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_3__ PgFdwRelationInfo ;
typedef int List ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int,TYPE_1__*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *,int,int **,TYPE_1__*) ;

void
FUNC_12(StringInfo VAR_0, PlannerInfo *VAR_1, RelOptInfo *VAR_2,
      List *VAR_3, List *VAR_4, List *VAR_5,
      bool VAR_6, bool VAR_7, bool VAR_8,
      List **VAR_9, List **VAR_10)
{
 deparse_expr_cxt VAR_11;
 PgFdwRelationInfo *VAR_12 = (PgFdwRelationInfo *) VAR_2->fdw_private;
 List *VAR_13;





 FUNC_0(FUNC_1(VAR_2) || FUNC_2(VAR_2) || FUNC_3(VAR_2));


 VAR_11.buf = VAR_0;
 VAR_11.root = VAR_1;
 VAR_11.foreignrel = VAR_2;
 VAR_11.scanrel = FUNC_3(VAR_2) ? VAR_12->outerrel : VAR_2;
 VAR_11.params_list = VAR_10;


 FUNC_11(VAR_3, VAR_8, VAR_9, &VAR_11);






 if (FUNC_3(VAR_2))
 {
  PgFdwRelationInfo *VAR_14;

  VAR_14 = (PgFdwRelationInfo *) VAR_12->outerrel->fdw_private;
  VAR_13 = VAR_14->remote_conds;
 }
 else
  VAR_13 = VAR_4;


 FUNC_9(VAR_13, &VAR_11);

 if (FUNC_3(VAR_2))
 {

  FUNC_5(VAR_3, &VAR_11);


  if (VAR_4)
  {
   FUNC_8(VAR_0, " HAVING ");
   FUNC_4(VAR_4, &VAR_11);
  }
 }


 if (VAR_5)
  FUNC_7(VAR_5, VAR_6, &VAR_11);


 if (VAR_7)
  FUNC_6(&VAR_11);


 FUNC_10(&VAR_11);
}
