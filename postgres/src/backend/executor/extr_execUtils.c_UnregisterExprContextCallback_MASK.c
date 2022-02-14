
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ecxt_callbacks; } ;
struct TYPE_5__ {scalar_t__ function; scalar_t__ arg; struct TYPE_5__* next; } ;
typedef TYPE_1__ ExprContext_CB ;
typedef scalar_t__ ExprContextCallbackFunction ;
typedef TYPE_2__ ExprContext ;
typedef scalar_t__ Datum ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(ExprContext *VAR_0,
         ExprContextCallbackFunction VAR_1,
         Datum VAR_2)
{
 ExprContext_CB **VAR_3;
 ExprContext_CB *VAR_4;

 VAR_3 = &VAR_0->ecxt_callbacks;

 while ((VAR_4 = *VAR_3) != ((void*)0))
 {
  if (VAR_4->function == VAR_1 && VAR_4->arg == VAR_2)
  {
   *VAR_3 = VAR_4->next;
   FUNC_0(VAR_4);
  }
  else
   VAR_3 = &VAR_4->next;
 }
}
