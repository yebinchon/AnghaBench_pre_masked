
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stmt_mcontext; int stmt_mcontext_parent; } ;
typedef TYPE_1__ PLpgSQL_execstate ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(PLpgSQL_execstate *VAR_0)
{

 VAR_0->stmt_mcontext = VAR_0->stmt_mcontext_parent;
 VAR_0->stmt_mcontext_parent = FUNC_0(VAR_0->stmt_mcontext);
}
