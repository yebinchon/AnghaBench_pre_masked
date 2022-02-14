
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ecxt_callbacks; int ecxt_per_query_memory; } ;
struct TYPE_4__ {struct TYPE_4__* next; int arg; int function; } ;
typedef TYPE_1__ ExprContext_CB ;
typedef int ExprContextCallbackFunction ;
typedef TYPE_2__ ExprContext ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ,int) ;

void
FUNC_1(ExprContext *VAR_0,
       ExprContextCallbackFunction VAR_1,
       Datum VAR_2)
{
 ExprContext_CB *VAR_3;


 VAR_3 = (ExprContext_CB *)
  FUNC_0(VAR_0->ecxt_per_query_memory,
         sizeof(ExprContext_CB));

 VAR_3->function = VAR_1;
 VAR_3->arg = VAR_2;


 VAR_3->next = VAR_0->ecxt_callbacks;
 VAR_0->ecxt_callbacks = VAR_3;
}
