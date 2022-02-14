
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_4__ {scalar_t__ state; struct TYPE_4__* name; int curTransactionOwner; struct TYPE_4__* parent; int curTransactionContext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 TransactionState VAR_7 = VAR_3;

 if (VAR_7->state != VAR_5)
  FUNC_2(VAR_6, "PopTransaction while in %s state",
    FUNC_1(VAR_7->state));

 if (VAR_7->parent == ((void*)0))
  FUNC_2(VAR_4, "PopTransaction with no parent");

 VAR_3 = VAR_7->parent;


 VAR_0 = VAR_7->parent->curTransactionContext;
 FUNC_0(VAR_0);


 VAR_1 = VAR_7->parent->curTransactionOwner;
 VAR_2 = VAR_7->parent->curTransactionOwner;


 if (VAR_7->name)
  FUNC_3(VAR_7->name);
 FUNC_3(VAR_7);
}
