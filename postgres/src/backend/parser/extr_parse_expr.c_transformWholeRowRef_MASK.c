
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int location; } ;
typedef TYPE_1__ Var ;
typedef int RangeTblEntry ;
typedef int ParseState ;
typedef int Node ;


 int FUNC_0 (int *,int *,int*) ;
 TYPE_1__* FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static Node *
FUNC_3(ParseState *VAR_0, RangeTblEntry *VAR_1, int VAR_2)
{
 Var *VAR_3;
 int VAR_4;
 int VAR_5;


 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 VAR_3 = FUNC_1(VAR_1, VAR_4, VAR_5, 1);


 VAR_3->location = VAR_2;


 FUNC_2(VAR_0, VAR_3, VAR_1);

 return (Node *) VAR_3;
}
