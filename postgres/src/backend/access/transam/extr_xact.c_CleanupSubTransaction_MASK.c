
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* TransactionState ;
struct TYPE_5__ {scalar_t__ state; int * curTransactionOwner; TYPE_1__* parent; int subTransactionId; } ;
struct TYPE_4__ {int curTransactionOwner; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_7(void)
{
 TransactionState VAR_6 = VAR_2;

 FUNC_4("CleanupSubTransaction");

 if (VAR_6->state != VAR_3)
  FUNC_6(VAR_5, "CleanupSubTransaction while in %s state",
    FUNC_5(VAR_6->state));

 FUNC_1(VAR_6->subTransactionId);

 VAR_1 = VAR_6->parent->curTransactionOwner;
 VAR_0 = VAR_6->parent->curTransactionOwner;
 if (VAR_6->curTransactionOwner)
  FUNC_3(VAR_6->curTransactionOwner);
 VAR_6->curTransactionOwner = ((void*)0);

 FUNC_0();

 VAR_6->state = VAR_4;

 FUNC_2();
}
