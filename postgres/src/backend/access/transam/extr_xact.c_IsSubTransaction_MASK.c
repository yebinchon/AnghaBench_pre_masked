
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {int nestingLevel; } ;


 TYPE_1__* VAR_0 ;

bool
FUNC_0(void)
{
 TransactionState VAR_1 = VAR_0;

 if (VAR_1->nestingLevel >= 2)
  return 1;

 return 0;
}
