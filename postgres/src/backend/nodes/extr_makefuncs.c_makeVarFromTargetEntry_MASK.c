
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Var ;
struct TYPE_3__ {scalar_t__ expr; int resno; } ;
typedef TYPE_1__ TargetEntry ;
typedef int Node ;
typedef int Index ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int ,int ,int ,int ) ;

Var *
FUNC_4(Index VAR_0,
        TargetEntry *VAR_1)
{
 return FUNC_3(VAR_0,
       VAR_1->resno,
       FUNC_1((Node *) VAR_1->expr),
       FUNC_2((Node *) VAR_1->expr),
       FUNC_0((Node *) VAR_1->expr),
       0);
}
