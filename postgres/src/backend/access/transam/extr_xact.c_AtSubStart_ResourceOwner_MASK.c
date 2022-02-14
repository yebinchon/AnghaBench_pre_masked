
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* TransactionState ;
struct TYPE_5__ {int curTransactionOwner; TYPE_1__* parent; } ;
struct TYPE_4__ {int curTransactionOwner; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 TransactionState VAR_3 = VAR_2;

 FUNC_0(VAR_3->parent != ((void*)0));





 VAR_3->curTransactionOwner =
  FUNC_1(VAR_3->parent->curTransactionOwner,
       "SubTransaction");

 VAR_0 = VAR_3->curTransactionOwner;
 VAR_1 = VAR_3->curTransactionOwner;
}
