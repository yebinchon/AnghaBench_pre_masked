
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
typedef int TransactionId ;
struct TYPE_3__ {scalar_t__ nChildXids; int * childXids; } ;


 TYPE_1__* VAR_0 ;

int
FUNC_0(TransactionId **VAR_1)
{
 TransactionState VAR_2 = VAR_0;

 if (VAR_2->nChildXids == 0)
  *VAR_1 = ((void*)0);
 else
  *VAR_1 = VAR_2->childXids;

 return VAR_2->nChildXids;
}
