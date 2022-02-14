
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
typedef int TransactionId ;
struct TYPE_4__ {int fullTransactionId; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

TransactionId
FUNC_3(void)
{
 TransactionState VAR_1 = VAR_0;

 if (!FUNC_1(VAR_1->fullTransactionId))
  FUNC_0(VAR_1);
 return FUNC_2(VAR_1->fullTransactionId);
}
