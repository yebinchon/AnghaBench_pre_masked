
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int indirection; } ;
typedef int ParseState ;
typedef int ParseExprKind ;
typedef int Node ;
typedef int List ;
typedef TYPE_1__ A_Indirection ;


 int * FUNC_0 (int *,int *,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int * FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static List *
FUNC_5(ParseState *VAR_0, A_Indirection *VAR_1,
       bool VAR_2, ParseExprKind VAR_3)
{
 Node *VAR_4;


 VAR_1 = FUNC_1(VAR_1);
 VAR_1->indirection = FUNC_3(VAR_1->indirection,
          FUNC_2(VAR_1->indirection) - 1);


 VAR_4 = FUNC_4(VAR_0, (Node *) VAR_1, VAR_3);


 return FUNC_0(VAR_0, VAR_4, VAR_2);
}
