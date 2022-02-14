
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int * root; TYPE_2__* foreignrel; int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_15__ {int attrs_used; } ;
struct TYPE_14__ {int relid; } ;
struct TYPE_13__ {int relid; scalar_t__ fdw_private; } ;
typedef int StringInfo ;
typedef int Relation ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef TYPE_4__ PgFdwRelationInfo ;
typedef int List ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int,int **,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_3__*,int ,int ,int,int ,int,int **) ;
 TYPE_3__* FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(List *VAR_1, bool VAR_2, List **VAR_3,
     deparse_expr_cxt *VAR_4)
{
 StringInfo VAR_5 = VAR_4->buf;
 RelOptInfo *VAR_6 = VAR_4->foreignrel;
 PlannerInfo *VAR_7 = VAR_4->root;
 PgFdwRelationInfo *VAR_8 = (PgFdwRelationInfo *) VAR_6->fdw_private;




 FUNC_2(VAR_5, "SELECT ");

 if (VAR_2)
 {





  FUNC_4(VAR_4);
 }
 else if (FUNC_0(VAR_6) || FUNC_1(VAR_6))
 {




  FUNC_3(VAR_1, 0, VAR_3, VAR_4);
 }
 else
 {




  RangeTblEntry *VAR_9 = FUNC_6(VAR_6->relid, VAR_7);





  Relation VAR_10 = FUNC_8(VAR_9->relid, VAR_0);

  FUNC_5(VAR_5, VAR_9, VAR_6->relid, VAR_10, 0,
        VAR_8->attrs_used, 0, VAR_3);
  FUNC_7(VAR_10, VAR_0);
 }
}
