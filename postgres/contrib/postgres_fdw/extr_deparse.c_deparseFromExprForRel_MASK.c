
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int ** params_list; int * root; TYPE_3__* scanrel; TYPE_3__* foreignrel; int buf; } ;
typedef TYPE_1__ deparse_expr_cxt ;
struct TYPE_17__ {scalar_t__ jointype; scalar_t__ joinclauses; int make_innerrel_subquery; int make_outerrel_subquery; TYPE_3__* innerrel; TYPE_3__* outerrel; } ;
struct TYPE_16__ {int relid; } ;
struct TYPE_15__ {int relid; int relids; scalar_t__ fdw_private; } ;
struct TYPE_14__ {int data; int len; } ;
typedef TYPE_2__ StringInfoData ;
typedef int StringInfo ;
typedef int Relation ;
typedef TYPE_3__ RelOptInfo ;
typedef TYPE_4__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef TYPE_5__ PgFdwRelationInfo ;
typedef int List ;
typedef int Index ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ,int ,...) ;
 int FUNC_5 (int ,char) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*,int *,TYPE_3__*,int ,int ,int **,int **) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*) ;
 int * FUNC_12 (int *,scalar_t__) ;
 TYPE_4__* FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(StringInfo VAR_4, PlannerInfo *VAR_5, RelOptInfo *VAR_6,
       bool VAR_7, Index VAR_8, List **VAR_9,
       List **VAR_10)
{
 PgFdwRelationInfo *VAR_11 = (PgFdwRelationInfo *) VAR_6->fdw_private;

 if (FUNC_1(VAR_6))
 {
  StringInfoData VAR_12;
  StringInfoData VAR_13;
  RelOptInfo *VAR_14 = VAR_11->outerrel;
  RelOptInfo *VAR_15 = VAR_11->innerrel;
  bool VAR_16 = 0;
  bool VAR_17 = 0;

  if (VAR_8 > 0 && FUNC_7(VAR_8, VAR_6->relids))
  {
   if (VAR_11->jointype == VAR_0)
   {
    *VAR_9 = FUNC_12(*VAR_9,
           VAR_11->joinclauses);
    VAR_11->joinclauses = VAR_1;
   }




   if (VAR_14->relid == VAR_8)
    VAR_16 = 1;
   else if (VAR_15->relid == VAR_8)
    VAR_17 = 1;
  }


  if (!VAR_16)
  {
   FUNC_11(&VAR_12);
   FUNC_8(&VAR_12, VAR_5, VAR_14,
          VAR_11->make_outerrel_subquery,
          VAR_8, VAR_9, VAR_10);
   if (VAR_17)
   {
    FUNC_0(VAR_11->jointype == VAR_0);
    FUNC_0(VAR_11->joinclauses == VAR_1);
    FUNC_2(VAR_4, VAR_12.data, VAR_12.len);
    return;
   }
  }


  if (!VAR_17)
  {
   FUNC_11(&VAR_13);
   FUNC_8(&VAR_13, VAR_5, VAR_15,
          VAR_11->make_innerrel_subquery,
          VAR_8, VAR_9, VAR_10);





   if (VAR_16)
   {
    FUNC_0(VAR_11->jointype == VAR_0);
    FUNC_0(VAR_11->joinclauses == VAR_1);
    FUNC_2(VAR_4, VAR_13.data, VAR_13.len);
    return;
   }
  }


  FUNC_0(!VAR_16 && !VAR_17);






  FUNC_4(VAR_4, "(%s %s JOIN %s ON ", VAR_12.data,
       FUNC_10(VAR_11->jointype), VAR_13.data);


  if (VAR_11->joinclauses)
  {
   deparse_expr_cxt VAR_18;

   VAR_18.buf = VAR_4;
   VAR_18.foreignrel = VAR_6;
   VAR_18.scanrel = VAR_6;
   VAR_18.root = VAR_5;
   VAR_18.params_list = VAR_10;

   FUNC_5(VAR_4, '(');
   FUNC_3(VAR_11->joinclauses, &VAR_18);
   FUNC_5(VAR_4, ')');
  }
  else
   FUNC_6(VAR_4, "(TRUE)");


  FUNC_5(VAR_4, ')');
 }
 else
 {
  RangeTblEntry *VAR_19 = FUNC_13(VAR_6->relid, VAR_5);





  Relation VAR_20 = FUNC_15(VAR_19->relid, VAR_2);

  FUNC_9(VAR_4, VAR_20);






  if (VAR_7)
   FUNC_4(VAR_4, " %s%d", VAR_3, VAR_6->relid);

  FUNC_14(VAR_20, VAR_2);
 }
}
