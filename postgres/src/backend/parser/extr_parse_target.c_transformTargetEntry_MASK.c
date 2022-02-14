
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TargetEntry ;
struct TYPE_4__ {int p_next_resno; } ;
typedef TYPE_1__ ParseState ;
typedef scalar_t__ ParseExprKind ;
typedef int Node ;
typedef int Expr ;
typedef int AttrNumber ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int * FUNC_2 (int *,int ,char*,int) ;
 int * FUNC_3 (TYPE_1__*,int *,scalar_t__) ;

TargetEntry *
FUNC_4(ParseState *VAR_2,
      Node *VAR_3,
      Node *VAR_4,
      ParseExprKind VAR_5,
      char *VAR_6,
      bool VAR_7)
{

 if (VAR_4 == ((void*)0))
 {





  if (VAR_5 == VAR_0 && FUNC_1(VAR_3, VAR_1))
   VAR_4 = VAR_3;
  else
   VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_5);
 }

 if (VAR_6 == ((void*)0) && !VAR_7)
 {




  VAR_6 = FUNC_0(VAR_3);
 }

 return FUNC_2((Expr *) VAR_4,
         (AttrNumber) VAR_2->p_next_resno++,
         VAR_6,
         VAR_7);
}
