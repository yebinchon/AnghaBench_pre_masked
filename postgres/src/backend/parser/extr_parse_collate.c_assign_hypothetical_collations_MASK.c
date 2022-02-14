
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ collation; scalar_t__ strength; int location; scalar_t__ collation2; int location2; int pstate; } ;
typedef TYPE_1__ assign_collations_context ;
struct TYPE_9__ {int * expr; } ;
typedef TYPE_2__ TargetEntry ;
struct TYPE_10__ {int args; int aggdirectargs; int aggfnoid; } ;
typedef int Node ;
typedef int ListCell ;
typedef int Expr ;
typedef TYPE_3__ Aggref ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int *,int ,int ,scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,scalar_t__,int,scalar_t__,int,TYPE_1__*) ;
 int FUNC_18 (int ,int) ;

__attribute__((used)) static void
FUNC_19(Aggref *VAR_6,
          assign_collations_context *VAR_7)
{
 ListCell *VAR_8 = FUNC_13(VAR_6->aggdirectargs);
 ListCell *VAR_9 = FUNC_13(VAR_6->args);
 bool VAR_10;
 int VAR_11;


 VAR_10 = (FUNC_14(VAR_6->args) == 1 &&
        FUNC_11(VAR_6->aggfnoid) == VAR_5);


 VAR_11 = FUNC_14(VAR_6->aggdirectargs) - FUNC_14(VAR_6->args);
 FUNC_0(VAR_11 >= 0);
 while (VAR_11-- > 0)
 {
  (void) FUNC_2((Node *) FUNC_12(VAR_8), VAR_7);
  VAR_8 = FUNC_15(VAR_6->aggdirectargs, VAR_8);
 }


 while (VAR_8 && VAR_9)
 {
  Node *VAR_12 = (Node *) FUNC_12(VAR_8);
  TargetEntry *VAR_13 = (TargetEntry *) FUNC_12(VAR_9);
  assign_collations_context VAR_14;
  VAR_14.pstate = VAR_7->pstate;
  VAR_14.collation = VAR_5;
  VAR_14.strength = VAR_2;
  VAR_14.location = -1;

  VAR_14.collation2 = VAR_5;
  VAR_14.location2 = -1;

  (void) FUNC_2(VAR_12, &VAR_14);
  (void) FUNC_2((Node *) VAR_13->expr, &VAR_14);


  if (VAR_14.strength == VAR_1)
   FUNC_3(VAR_4,
     (FUNC_4(VAR_3),
      FUNC_6("collation mismatch between implicit collations \"%s\" and \"%s\"",
       FUNC_10(VAR_14.collation),
       FUNC_10(VAR_14.collation2)),
      FUNC_5("You can choose the collation by applying the COLLATE clause to one or both expressions."),
      FUNC_18(VAR_14.pstate,
          VAR_14.location2)));
  if (FUNC_1(VAR_14.collation) &&
   VAR_14.collation != FUNC_7((Node *) VAR_13->expr))
  {
   VAR_13->expr = (Expr *)
    FUNC_16(VAR_13->expr,
        FUNC_8((Node *) VAR_13->expr),
        FUNC_9((Node *) VAR_13->expr),
        VAR_14.collation,
        VAR_0);
  }





  if (VAR_10)
   FUNC_17(VAR_14.collation,
          VAR_14.strength,
          VAR_14.location,
          VAR_14.collation2,
          VAR_14.location2,
          VAR_7);

  VAR_8 = FUNC_15(VAR_6->aggdirectargs, VAR_8);
  VAR_9 = FUNC_15(VAR_6->args, VAR_9);
 }
 FUNC_0(VAR_8 == ((void*)0) && VAR_9 == ((void*)0));
}
