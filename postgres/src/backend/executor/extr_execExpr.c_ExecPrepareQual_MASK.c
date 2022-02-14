
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int es_query_cxt; } ;
typedef int MemoryContext ;
typedef int List ;
typedef int ExprState ;
typedef int Expr ;
typedef TYPE_1__ EState ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

ExprState *
FUNC_3(List *VAR_0, EState *VAR_1)
{
 ExprState *VAR_2;
 MemoryContext VAR_3;

 VAR_3 = FUNC_1(VAR_1->es_query_cxt);

 VAR_0 = (List *) FUNC_2((Expr *) VAR_0);

 VAR_2 = FUNC_0(VAR_0, ((void*)0));

 FUNC_1(VAR_3);

 return VAR_2;
}
