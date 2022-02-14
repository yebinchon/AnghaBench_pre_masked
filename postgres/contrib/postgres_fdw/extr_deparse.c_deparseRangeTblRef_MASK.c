
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ local_conds; int relation_index; int remote_conds; } ;
struct TYPE_10__ {TYPE_1__* reltarget; int relids; scalar_t__ fdw_private; } ;
struct TYPE_9__ {int exprs; } ;
typedef int StringInfo ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_3__ PgFdwRelationInfo ;
typedef int List ;
typedef scalar_t__ Index ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,int *,TYPE_2__*,int,scalar_t__,int **,int **) ;
 int FUNC_8 (int ,int *,TYPE_2__*,scalar_t__,int ,scalar_t__,int,int,int,int **,int **) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(StringInfo VAR_3, PlannerInfo *VAR_4, RelOptInfo *VAR_5,
       bool VAR_6, Index VAR_7, List **VAR_8,
       List **VAR_9)
{
 PgFdwRelationInfo *VAR_10 = (PgFdwRelationInfo *) VAR_5->fdw_private;


 FUNC_0(FUNC_2(VAR_5) || FUNC_1(VAR_5));

 FUNC_0(VAR_10->local_conds == VAR_0);


 if (VAR_6)
 {
  List *VAR_11;
  int VAR_12;






  FUNC_0(VAR_7 == 0 ||
      !FUNC_6(VAR_7, VAR_5->relids));


  FUNC_4(VAR_3, '(');
  FUNC_8(VAR_3, VAR_4, VAR_5, VAR_0,
        VAR_10->remote_conds, VAR_0,
        0, 0, 1,
        &VAR_11, VAR_9);
  FUNC_4(VAR_3, ')');


  FUNC_3(VAR_3, " %s%d", VAR_2,
       VAR_10->relation_index);






  VAR_12 = FUNC_9(VAR_5->reltarget->exprs);
  if (VAR_12 > 0)
  {
   int VAR_13;

   FUNC_4(VAR_3, '(');
   for (VAR_13 = 1; VAR_13 <= VAR_12; VAR_13++)
   {
    if (VAR_13 > 1)
     FUNC_5(VAR_3, ", ");

    FUNC_3(VAR_3, "%s%d", VAR_1, VAR_13);
   }
   FUNC_4(VAR_3, ')');
  }
 }
 else
  FUNC_7(VAR_3, VAR_4, VAR_5, 1, VAR_7,
         VAR_8, VAR_9);
}
