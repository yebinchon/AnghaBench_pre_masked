
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ opresulttype; scalar_t__ opretset; } ;
struct TYPE_6__ {int p_last_srf; } ;
typedef TYPE_1__ ParseState ;
typedef TYPE_2__ OpExpr ;
typedef int Node ;
typedef int List ;
typedef int Expr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (TYPE_1__*,int *,int *,int *,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static Expr *
FUNC_6(ParseState *VAR_4, List *VAR_5, Node *VAR_6, Node *VAR_7,
     int VAR_8)
{
 Expr *VAR_9;

 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_4->p_last_srf, VAR_8);
 if (((OpExpr *) VAR_9)->opresulttype != VAR_0)
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),
     FUNC_3("IS DISTINCT FROM requires = operator to yield boolean"),
     FUNC_5(VAR_4, VAR_8)));
 if (((OpExpr *) VAR_9)->opretset)
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),

     FUNC_3("%s must not return a set", "IS DISTINCT FROM"),
     FUNC_5(VAR_4, VAR_8)));




 FUNC_0(VAR_9, VAR_3);

 return VAR_9;
}
