
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {scalar_t__ parallelModeLevel; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1(void)
{
 TransactionState VAR_1 = VAR_0;

 FUNC_0(VAR_1->parallelModeLevel >= 0);

 ++VAR_1->parallelModeLevel;
}
