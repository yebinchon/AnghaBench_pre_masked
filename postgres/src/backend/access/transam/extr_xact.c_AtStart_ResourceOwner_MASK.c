
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int * curTransactionOwner; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * FUNC_1 (int *,char*) ;
 int * VAR_3 ;

__attribute__((used)) static void
FUNC_2(void)
{
 TransactionState VAR_4 = VAR_2;




 FUNC_0(VAR_3 == ((void*)0));




 VAR_4->curTransactionOwner = FUNC_1(((void*)0), "TopTransaction");

 VAR_3 = VAR_4->curTransactionOwner;
 VAR_0 = VAR_4->curTransactionOwner;
 VAR_1 = VAR_4->curTransactionOwner;
}
