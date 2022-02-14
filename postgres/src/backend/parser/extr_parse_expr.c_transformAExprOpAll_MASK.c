
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int location; int name; int * rexpr; int * lexpr; } ;
typedef int ParseState ;
typedef int Node ;
typedef TYPE_1__ A_Expr ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *,int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int,int *,int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static Node *
FUNC_5(ParseState *VAR_2, A_Expr *VAR_3)
{
 Node *VAR_4 = VAR_3->lexpr;
 Node *VAR_5 = VAR_3->rexpr;

 if (VAR_1)
  FUNC_0(VAR_2, VAR_0,
         FUNC_3(FUNC_1(VAR_3->name)),
         VAR_4, ((void*)0),
         VAR_3->location);

 VAR_4 = FUNC_4(VAR_2, VAR_4);
 VAR_5 = FUNC_4(VAR_2, VAR_5);

 return (Node *) FUNC_2(VAR_2,
           VAR_3->name,
           0,
           VAR_4,
           VAR_5,
           VAR_3->location);
}
