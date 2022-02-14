
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
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
 TransactionState VAR_3 = VAR_1;

 FUNC_0(VAR_3->parent != ((void*)0));


 FUNC_3(VAR_3->parent->curTransactionContext);
 VAR_0 = VAR_3->parent->curTransactionContext;




 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_2);






 if (VAR_3->curTransactionContext)
  FUNC_1(VAR_3->curTransactionContext);
 VAR_3->curTransactionContext = ((void*)0);
}
