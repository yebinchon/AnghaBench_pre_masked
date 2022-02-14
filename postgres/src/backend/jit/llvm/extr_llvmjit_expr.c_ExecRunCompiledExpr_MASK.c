
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int funcname; int context; } ;
struct TYPE_7__ {int (* evalfunc ) (TYPE_1__*,int *,int*) ;TYPE_3__* evalfunc_private; } ;
typedef int (* ExprStateEvalFunc ) (TYPE_1__*,int *,int*) ;
typedef TYPE_1__ ExprState ;
typedef int ExprContext ;
typedef int Datum ;
typedef TYPE_3__ CompiledExprState ;


 int FUNC_0 (int (*) (TYPE_1__*,int *,int*)) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static Datum
FUNC_5(ExprState *VAR_0, ExprContext *VAR_1, bool *VAR_2)
{
 CompiledExprState *VAR_3 = VAR_0->evalfunc_private;
 ExprStateEvalFunc VAR_4;

 FUNC_1(VAR_0, VAR_1);

 FUNC_2();
 VAR_4 = (ExprStateEvalFunc) FUNC_3(VAR_3->context,
             VAR_3->funcname);
 FUNC_4();
 FUNC_0(VAR_4);


 VAR_0->evalfunc = VAR_4;

 return VAR_4(VAR_0, VAR_1, VAR_2);
}
