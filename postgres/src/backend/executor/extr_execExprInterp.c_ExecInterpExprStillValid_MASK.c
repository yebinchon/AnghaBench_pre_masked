
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* evalfunc ) (TYPE_1__*,int *,int*) ;scalar_t__ evalfunc_private; } ;
typedef int (* ExprStateEvalFunc ) (TYPE_1__*,int *,int*) ;
typedef TYPE_1__ ExprState ;
typedef int ExprContext ;
typedef int Datum ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int*) ;

Datum
FUNC_2(ExprState *VAR_0, ExprContext *VAR_1, bool *VAR_2)
{




 FUNC_0(VAR_0, VAR_1);


 VAR_0->evalfunc = (ExprStateEvalFunc) VAR_0->evalfunc_private;


 return VAR_0->evalfunc(VAR_0, VAR_1, VAR_2);
}
