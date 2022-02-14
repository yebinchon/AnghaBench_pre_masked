
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int ec_members; int ec_relids; scalar_t__ ec_has_volatile; } ;
struct TYPE_14__ {int em_datatype; int em_nullable_relids; int em_relids; scalar_t__ em_expr; scalar_t__ em_is_child; scalar_t__ em_is_const; } ;
struct TYPE_13__ {int eq_classes; int ec_merging_done; } ;
struct TYPE_12__ {scalar_t__ reloptkind; int eclass_indexes; int relids; int top_parent_relids; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef int Node ;
typedef int Expr ;
typedef TYPE_3__ EquivalenceMember ;
typedef TYPE_4__ EquivalenceClass ;
typedef int AppendRelInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_4__*,int *,int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int,int **) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int) ;

void
FUNC_13(PlannerInfo *VAR_1,
         AppendRelInfo *VAR_2,
         RelOptInfo *VAR_3,
         RelOptInfo *VAR_4)
{
 Relids VAR_5 = VAR_4->top_parent_relids;
 Relids VAR_6 = VAR_4->relids;
 int VAR_7;





 FUNC_0(VAR_1->ec_merging_done);
 FUNC_0(FUNC_1(VAR_3));

 VAR_7 = -1;
 while ((VAR_7 = FUNC_9(VAR_3->eclass_indexes, VAR_7)) >= 0)
 {
  EquivalenceClass *VAR_8 = (EquivalenceClass *) FUNC_12(VAR_1->eq_classes, VAR_7);
  int VAR_9;






  if (VAR_8->ec_has_volatile)
   continue;


  FUNC_0(FUNC_8(VAR_5, VAR_8->ec_relids));






  VAR_9 = FUNC_11(VAR_8->ec_members);
  for (int VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  {
   EquivalenceMember *VAR_11 = (EquivalenceMember *) FUNC_12(VAR_8->ec_members, VAR_10);

   if (VAR_11->em_is_const)
    continue;
   if (VAR_11->em_is_child)
    continue;


   if (FUNC_10(VAR_11->em_relids, VAR_5))
   {

    Expr *VAR_12;
    Relids VAR_13;
    Relids VAR_14;

    if (VAR_3->reloptkind == VAR_0)
    {

     VAR_12 = (Expr *)
      FUNC_3(VAR_1,
              (Node *) VAR_11->em_expr,
              1, &VAR_2);
    }
    else
    {

     VAR_12 = (Expr *)
      FUNC_4(VAR_1,
                (Node *) VAR_11->em_expr,
                VAR_6,
                VAR_5);
    }







    VAR_13 = FUNC_7(VAR_11->em_relids,
           VAR_5);
    VAR_13 = FUNC_6(VAR_13, VAR_6);





    VAR_14 = VAR_11->em_nullable_relids;
    if (FUNC_10(VAR_14, VAR_5))
    {
     VAR_14 = FUNC_7(VAR_14,
               VAR_5);
     VAR_14 = FUNC_6(VAR_14,
                VAR_6);
    }

    (void) FUNC_2(VAR_8, VAR_12,
          VAR_13, VAR_14,
          1, VAR_11->em_datatype);


    VAR_4->eclass_indexes = FUNC_5(VAR_4->eclass_indexes, VAR_7);
   }
  }
 }
}
