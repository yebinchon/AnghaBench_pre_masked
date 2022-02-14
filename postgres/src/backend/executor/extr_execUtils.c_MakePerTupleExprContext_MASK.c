
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * es_per_tuple_exprcontext; } ;
typedef int ExprContext ;
typedef TYPE_1__ EState ;


 int * FUNC_0 (TYPE_1__*) ;

ExprContext *
FUNC_1(EState *VAR_0)
{
 if (VAR_0->es_per_tuple_exprcontext == ((void*)0))
  VAR_0->es_per_tuple_exprcontext = FUNC_0(VAR_0);

 return VAR_0->es_per_tuple_exprcontext;
}
