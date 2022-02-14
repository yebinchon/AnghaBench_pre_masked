
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int * curTransactionContext; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 TransactionState VAR_3 = VAR_2;

 FUNC_1(VAR_1 != ((void*)0));






 VAR_1 = FUNC_0(VAR_1,
              "CurTransactionContext",
              VAR_0);
 VAR_3->curTransactionContext = VAR_1;


 FUNC_2(VAR_1);
}
