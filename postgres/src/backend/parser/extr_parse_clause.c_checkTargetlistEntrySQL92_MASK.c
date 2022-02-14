
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expr; } ;
typedef TYPE_1__ TargetEntry ;
struct TYPE_7__ {int p_hasWindowFuncs; int p_hasAggs; } ;
typedef TYPE_2__ ParseState ;
typedef int ParseExprKind ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_10(ParseState *VAR_3, TargetEntry *VAR_4,
        ParseExprKind VAR_5)
{
 switch (VAR_5)
 {
  case 129:

   if (VAR_3->p_hasAggs &&
    FUNC_1((Node *) VAR_4->expr, 0))
    FUNC_4(VAR_2,
      (FUNC_5(VAR_0),

       FUNC_6("aggregate functions are not allowed in %s",
        FUNC_0(VAR_5)),
       FUNC_9(VAR_3,
           FUNC_7((Node *) VAR_4->expr, 0))));
   if (VAR_3->p_hasWindowFuncs &&
    FUNC_2((Node *) VAR_4->expr))
    FUNC_4(VAR_2,
      (FUNC_5(VAR_1),

       FUNC_6("window functions are not allowed in %s",
        FUNC_0(VAR_5)),
       FUNC_9(VAR_3,
           FUNC_8((Node *) VAR_4->expr))));
   break;
  case 128:

   break;
  case 130:

   break;
  default:
   FUNC_3(VAR_2, "unexpected exprKind in checkTargetlistEntrySQL92");
   break;
 }
}
