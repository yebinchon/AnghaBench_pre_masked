
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int ec_members; int ec_relids; scalar_t__ ec_has_volatile; } ;
struct TYPE_16__ {int em_datatype; int em_nullable_relids; int em_relids; scalar_t__ em_expr; scalar_t__ em_is_child; scalar_t__ em_is_const; } ;
struct TYPE_15__ {int eq_classes; } ;
struct TYPE_14__ {scalar_t__ reloptkind; int relids; int top_parent_relids; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef int Node ;
typedef int Expr ;
typedef TYPE_3__ EquivalenceMember ;
typedef TYPE_4__ EquivalenceClass ;
typedef int Bitmapset ;
typedef int AppendRelInfo ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_4__*,int *,int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int,int **) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int ) ;
 int * FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int) ;

void
FUNC_14(PlannerInfo *VAR_3,
        int VAR_4, AppendRelInfo **VAR_5,
        RelOptInfo *VAR_6,
        RelOptInfo *VAR_7)
{
 Relids VAR_8 = VAR_7->top_parent_relids;
 Relids VAR_9 = VAR_7->relids;
 Bitmapset *VAR_10;
 int VAR_11;

 FUNC_0(FUNC_1(VAR_7) && FUNC_1(VAR_6));


 VAR_10 = FUNC_11(VAR_3, VAR_8);

 VAR_11 = -1;
 while ((VAR_11 = FUNC_9(VAR_10, VAR_11)) >= 0)
 {
  EquivalenceClass *VAR_12 = (EquivalenceClass *) FUNC_13(VAR_3->eq_classes, VAR_11);
  int VAR_13;






  if (VAR_12->ec_has_volatile)
   continue;


  FUNC_0(FUNC_10(VAR_8, VAR_12->ec_relids));






  VAR_13 = FUNC_12(VAR_12->ec_members);
  for (int VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  {
   EquivalenceMember *VAR_15 = (EquivalenceMember *) FUNC_13(VAR_12->ec_members, VAR_14);

   if (VAR_15->em_is_const)
    continue;





   if (VAR_15->em_is_child)
    continue;





   if (FUNC_8(VAR_15->em_relids) != VAR_0)
    continue;


   if (FUNC_10(VAR_15->em_relids, VAR_8))
   {

    Expr *VAR_16;
    Relids VAR_17;
    Relids VAR_18;

    if (VAR_6->reloptkind == VAR_1)
    {

     VAR_16 = (Expr *)
      FUNC_3(VAR_3,
              (Node *) VAR_15->em_expr,
              VAR_4, VAR_5);
    }
    else
    {

     FUNC_0(VAR_6->reloptkind == VAR_2);
     VAR_16 = (Expr *)
      FUNC_4(VAR_3,
                (Node *) VAR_15->em_expr,
                VAR_9,
                VAR_8);
    }







    VAR_17 = FUNC_7(VAR_15->em_relids,
           VAR_8);
    VAR_17 = FUNC_6(VAR_17, VAR_9);





    VAR_18 = VAR_15->em_nullable_relids;
    if (FUNC_10(VAR_18, VAR_8))
     VAR_18 =
      FUNC_5(VAR_3,
                VAR_18,
                VAR_9,
                VAR_8);

    (void) FUNC_2(VAR_12, VAR_16,
          VAR_17, VAR_18,
          1, VAR_15->em_datatype);
   }
  }
 }
}
