
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ecxt_callbacks; int ecxt_per_tuple_memory; } ;
struct TYPE_5__ {int arg; int (* function ) (int ) ;struct TYPE_5__* next; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ExprContext_CB ;
typedef TYPE_2__ ExprContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(ExprContext *VAR_0, bool VAR_1)
{
 ExprContext_CB *VAR_2;
 MemoryContext VAR_3;


 if (VAR_0->ecxt_callbacks == ((void*)0))
  return;





 VAR_3 = FUNC_0(VAR_0->ecxt_per_tuple_memory);




 while ((VAR_2 = VAR_0->ecxt_callbacks) != ((void*)0))
 {
  VAR_0->ecxt_callbacks = VAR_2->next;
  if (VAR_1)
   VAR_2->function(VAR_2->arg);
  FUNC_1(VAR_2);
 }

 FUNC_0(VAR_3);
}
