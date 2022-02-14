
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {int hasLateralRTEs; int hasPseudoConstantQuals; int * full_join_clauses; int * right_join_clauses; int * left_join_clauses; TYPE_1__* parse; } ;
struct TYPE_21__ {int * left_relids; int * right_relids; scalar_t__ can_join; scalar_t__ mergeopfamilies; int * relids; int * qual; } ;
struct TYPE_20__ {scalar_t__ jointree; } ;
typedef TYPE_2__ RestrictInfo ;
typedef int * Relids ;
typedef TYPE_2__ PostponedQual ;
typedef TYPE_4__ PlannerInfo ;
typedef int Node ;
typedef int List ;
typedef scalar_t__ JoinType ;
typedef int Index ;
typedef int Expr ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_4__*,int *,int *,int) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_4__*,int **,int **,int) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_13 (int ,char*) ;
 int * FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_4__*,TYPE_2__*) ;
 void* FUNC_16 (int *,TYPE_2__*) ;
 int FUNC_17 (int *) ;
 TYPE_2__* FUNC_18 (int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (TYPE_4__*,TYPE_2__**,int) ;
 int * FUNC_21 (int *,int) ;
 int * FUNC_22 (int *) ;

__attribute__((used)) static void
FUNC_23(PlannerInfo *VAR_7, Node *VAR_8,
      bool VAR_9,
      bool VAR_10,
      JoinType VAR_11,
      Index VAR_12,
      Relids VAR_13,
      Relids VAR_14,
      Relids VAR_15,
      Relids VAR_16,
      List **VAR_17)
{
 Relids VAR_18;
 bool VAR_19;
 bool VAR_20;
 bool VAR_21 = 0;
 bool VAR_22;
 bool VAR_23;
 Relids VAR_24;
 RestrictInfo *VAR_25;




 VAR_18 = FUNC_22(VAR_8);
 if (!FUNC_4(VAR_18, VAR_13))
 {
  PostponedQual *VAR_26 = (PostponedQual *) FUNC_19(sizeof(PostponedQual));

  FUNC_0(VAR_7->hasLateralRTEs);
  FUNC_0(VAR_11 == VAR_3);
  FUNC_0(!VAR_9);
  VAR_26->qual = VAR_8;
  VAR_26->relids = VAR_18;
  *VAR_17 = FUNC_16(*VAR_17, VAR_26);
  return;
 }





 if (VAR_14 && !FUNC_4(VAR_18, VAR_14))
  FUNC_13(VAR_1, "JOIN qualification cannot refer to other relations");
 if (FUNC_3(VAR_18))
 {
  if (VAR_14)
  {

   VAR_18 = FUNC_2(VAR_14);

  }
  else
  {

   VAR_18 = FUNC_2(VAR_13);
   if (!FUNC_11(VAR_8))
   {

    VAR_21 = 1;

    VAR_7->hasPseudoConstantQuals = 1;

    if (!VAR_10)
    {
     VAR_18 =
      FUNC_14((Node *) VAR_7->parse->jointree,
              0);
     VAR_13 = FUNC_2(VAR_18);
    }
   }
  }
 }
 if (VAR_9)
 {







  FUNC_0(!VAR_14);
  VAR_19 = 1;
  VAR_20 = 0;
  VAR_24 = VAR_16;

  VAR_22 = 0;
  VAR_23 = 0;
 }
 else if (FUNC_6(VAR_18, VAR_15))
 {
  VAR_19 = 0;
  VAR_22 = 0;
  VAR_23 = 1;


  VAR_20 = FUNC_9(VAR_7,
              &VAR_18,
              &VAR_24,
              0);
  FUNC_0(*VAR_14);
  VAR_18 = VAR_14;
  FUNC_0(!VAR_21);
 }
 else
 {




  VAR_19 = 1;


  VAR_20 = FUNC_9(VAR_7,
              &VAR_18,
              &VAR_24,
              1);

  if (VAR_20)
  {

   FUNC_0(VAR_7->hasLateralRTEs || FUNC_4(VAR_18, VAR_13));
   FUNC_0(VAR_14 == ((void*)0) || FUNC_4(VAR_18, VAR_14));





   VAR_22 = 0;







   if (FUNC_10(VAR_7, VAR_8))
    return;
  }
  else
  {







   VAR_22 = 1;
   if (VAR_15 != ((void*)0))
    VAR_10 = 1;
  }





  VAR_23 = 0;
 }




 VAR_25 = FUNC_18((Expr *) VAR_8,
          VAR_19,
          VAR_20,
          VAR_21,
          VAR_12,
          VAR_18,
          VAR_15,
          VAR_24);
 if (FUNC_5(VAR_18) == VAR_0)
 {
  List *VAR_27 = FUNC_21(VAR_8,
             VAR_5 |
             VAR_6 |
             VAR_4);

  FUNC_1(VAR_7, VAR_27, VAR_18, 0);
  FUNC_17(VAR_27);
 }






 FUNC_8(VAR_25);
 if (VAR_25->mergeopfamilies)
 {
  if (VAR_22)
  {
   if (FUNC_7(VAR_7, VAR_25) &&
    FUNC_20(VAR_7, &VAR_25, VAR_10))
    return;

   if (VAR_25->mergeopfamilies)
    FUNC_15(VAR_7, VAR_25);

  }
  else if (VAR_23 && VAR_25->can_join)
  {

   FUNC_15(VAR_7, VAR_25);

   if (FUNC_4(VAR_25->left_relids,
         VAR_15) &&
    !FUNC_6(VAR_25->right_relids,
        VAR_15))
   {

    VAR_7->left_join_clauses = FUNC_16(VAR_7->left_join_clauses,
              VAR_25);
    return;
   }
   if (FUNC_4(VAR_25->right_relids,
         VAR_15) &&
    !FUNC_6(VAR_25->left_relids,
        VAR_15))
   {

    VAR_7->right_join_clauses = FUNC_16(VAR_7->right_join_clauses,
               VAR_25);
    return;
   }
   if (VAR_11 == VAR_2)
   {

    VAR_7->full_join_clauses = FUNC_16(VAR_7->full_join_clauses,
              VAR_25);
    return;
   }

  }
  else
  {

   FUNC_15(VAR_7, VAR_25);
  }
 }


 FUNC_12(VAR_7, VAR_25);
}
