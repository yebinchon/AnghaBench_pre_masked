
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_4__ {int fullTransactionId; } ;
typedef int FullTransactionId ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;

FullTransactionId
FUNC_2(void)
{
 TransactionState VAR_1 = VAR_0;

 if (!FUNC_1(VAR_1->fullTransactionId))
  FUNC_0(VAR_1);
 return VAR_1->fullTransactionId;
}
