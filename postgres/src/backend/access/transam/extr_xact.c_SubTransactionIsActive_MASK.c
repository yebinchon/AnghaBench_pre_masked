
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
struct TYPE_3__ {scalar_t__ state; scalar_t__ subTransactionId; struct TYPE_3__* parent; } ;
typedef scalar_t__ SubTransactionId ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

bool
FUNC_0(SubTransactionId VAR_2)
{
 TransactionState VAR_3;

 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->parent)
 {
  if (VAR_3->state == VAR_1)
   continue;
  if (VAR_3->subTransactionId == VAR_2)
   return 1;
 }
 return 0;
}
