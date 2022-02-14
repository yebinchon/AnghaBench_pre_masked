
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int eval_econtext; int * simple_eval_estate; } ;
struct TYPE_5__ {struct TYPE_5__* next; int xact_subxid; int stack_econtext; } ;
typedef TYPE_1__ SimpleEcontextStackEntry ;
typedef TYPE_2__ PLpgSQL_execstate ;
typedef int MemoryContext ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_5(PLpgSQL_execstate *VAR_3)
{
 SimpleEcontextStackEntry *VAR_4;
 if (VAR_3->simple_eval_estate == ((void*)0))
 {
  MemoryContext VAR_5;

  if (VAR_1 == ((void*)0))
  {
   VAR_5 = FUNC_4(VAR_0);
   VAR_1 = FUNC_0();
   FUNC_4(VAR_5);
  }
  VAR_3->simple_eval_estate = VAR_1;
 }




 VAR_3->eval_econtext = FUNC_1(VAR_3->simple_eval_estate);





 VAR_4 = (SimpleEcontextStackEntry *)
  FUNC_3(VAR_0,
         sizeof(SimpleEcontextStackEntry));

 VAR_4->stack_econtext = VAR_3->eval_econtext;
 VAR_4->xact_subxid = FUNC_2();

 VAR_4->next = VAR_2;
 VAR_2 = VAR_4;
}
