
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ xact_subxid; struct TYPE_4__* next; int stack_econtext; } ;
typedef scalar_t__ SubXactEvent ;
typedef scalar_t__ SubTransactionId ;
typedef TYPE_1__ SimpleEcontextStackEntry ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

void
FUNC_2(SubXactEvent VAR_3, SubTransactionId VAR_4,
       SubTransactionId VAR_5, void *VAR_6)
{
 if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
 {
  while (VAR_2 != ((void*)0) &&
      VAR_2->xact_subxid == VAR_4)
  {
   SimpleEcontextStackEntry *VAR_7;

   FUNC_0(VAR_2->stack_econtext,
       (VAR_3 == VAR_1));
   VAR_7 = VAR_2->next;
   FUNC_1(VAR_2);
   VAR_2 = VAR_7;
  }
 }
}
