
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* scanrel; TYPE_4__* root; int buf; } ;
typedef TYPE_2__ deparse_expr_cxt ;
struct TYPE_15__ {int lower_subquery_rels; } ;
struct TYPE_14__ {int strength; } ;
struct TYPE_13__ {int rowMarks; TYPE_1__* parse; } ;
struct TYPE_12__ {int relids; scalar_t__ fdw_private; } ;
struct TYPE_10__ {int resultRelation; scalar_t__ commandType; } ;
typedef int StringInfo ;
typedef TYPE_3__ RelOptInfo ;
typedef TYPE_4__ PlannerInfo ;
typedef TYPE_5__ PlanRowMark ;
typedef TYPE_6__ PgFdwRelationInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;





 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 TYPE_5__* FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(deparse_expr_cxt *VAR_4)
{
 StringInfo VAR_5 = VAR_4->buf;
 PlannerInfo *VAR_6 = VAR_4->root;
 RelOptInfo *VAR_7 = VAR_4->scanrel;
 PgFdwRelationInfo *VAR_8 = (PgFdwRelationInfo *) VAR_7->fdw_private;
 int VAR_9 = -1;

 while ((VAR_9 = FUNC_5(VAR_7->relids, VAR_9)) >= 0)
 {




  if (FUNC_3(VAR_9, VAR_8->lower_subquery_rels))
   continue;
  if (VAR_9 == VAR_6->parse->resultRelation &&
   (VAR_6->parse->commandType == VAR_2 ||
    VAR_6->parse->commandType == VAR_1))
  {

   FUNC_2(VAR_5, " FOR UPDATE");


   if (FUNC_0(VAR_7))
    FUNC_1(VAR_5, " OF %s%d", VAR_3, VAR_9);
  }
  else
  {
   PlanRowMark *VAR_10 = FUNC_6(VAR_6->rowMarks, VAR_9);

   if (VAR_10)
   {
    switch (VAR_10->strength)
    {
     case 128:

      break;
     case 132:
     case 130:
      FUNC_2(VAR_5, " FOR SHARE");
      break;
     case 131:
     case 129:
      FUNC_2(VAR_5, " FOR UPDATE");
      break;
    }


    if (FUNC_4(VAR_7->relids) == VAR_0 &&
     VAR_10->strength != 128)
     FUNC_1(VAR_5, " OF %s%d", VAR_3, VAR_9);
   }
  }
 }
}
