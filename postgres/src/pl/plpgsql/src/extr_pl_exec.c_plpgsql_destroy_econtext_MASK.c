
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * eval_econtext; } ;
struct TYPE_6__ {struct TYPE_6__* next; int * stack_econtext; } ;
typedef TYPE_1__ SimpleEcontextStackEntry ;
typedef TYPE_2__ PLpgSQL_execstate ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_3(PLpgSQL_execstate *VAR_1)
{
 SimpleEcontextStackEntry *VAR_2;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_0->stack_econtext == VAR_1->eval_econtext);

 VAR_2 = VAR_0->next;
 FUNC_2(VAR_0);
 VAR_0 = VAR_2;

 FUNC_1(VAR_1->eval_econtext, 1);
 VAR_1->eval_econtext = ((void*)0);
}
