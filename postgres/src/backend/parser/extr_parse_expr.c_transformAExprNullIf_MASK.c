
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int location; int name; int rexpr; int lexpr; } ;
struct TYPE_11__ {scalar_t__ opresulttype; int args; scalar_t__ opretset; } ;
struct TYPE_10__ {int p_last_srf; } ;
typedef TYPE_1__ ParseState ;
typedef TYPE_2__ OpExpr ;
typedef int Node ;
typedef TYPE_3__ A_Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int *,int *,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int * FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static Node *
FUNC_9(ParseState *VAR_4, A_Expr *VAR_5)
{
 Node *VAR_6 = FUNC_8(VAR_4, VAR_5->lexpr);
 Node *VAR_7 = FUNC_8(VAR_4, VAR_5->rexpr);
 OpExpr *VAR_8;

 VAR_8 = (OpExpr *) FUNC_6(VAR_4,
        VAR_5->name,
        VAR_6,
        VAR_7,
        VAR_4->p_last_srf,
        VAR_5->location);




 if (VAR_8->opresulttype != VAR_0)
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),
     FUNC_3("NULLIF requires = operator to yield boolean"),
     FUNC_7(VAR_4, VAR_5->location)));
 if (VAR_8->opretset)
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),

     FUNC_3("%s must not return a set", "NULLIF"),
     FUNC_7(VAR_4, VAR_5->location)));




 VAR_8->opresulttype = FUNC_4((Node *) FUNC_5(VAR_8->args));




 FUNC_0(VAR_8, VAR_3);

 return (Node *) VAR_8;
}
