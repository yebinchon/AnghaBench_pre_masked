
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* TransactionState ;
struct TYPE_5__ {int * curTransactionContext; TYPE_1__* parent; } ;
struct TYPE_4__ {int curTransactionContext; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 TransactionState VAR_2 = VAR_1;

 FUNC_0(VAR_2->parent != ((void*)0));


 VAR_0 = VAR_2->parent->curTransactionContext;
 FUNC_3(VAR_0);







 if (FUNC_2(VAR_2->curTransactionContext))
 {
  FUNC_1(VAR_2->curTransactionContext);
  VAR_2->curTransactionContext = ((void*)0);
 }
}
