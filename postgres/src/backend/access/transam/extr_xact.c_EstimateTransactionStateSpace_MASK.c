
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
typedef int TransactionId ;
struct TYPE_3__ {int nChildXids; int fullTransactionId; struct TYPE_3__* parent; } ;
typedef int Size ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;

Size
FUNC_3(void)
{
 TransactionState VAR_2;
 Size VAR_3 = 0;
 Size VAR_4 = VAR_1;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->parent)
 {
  if (FUNC_0(VAR_2->fullTransactionId))
   VAR_3 = FUNC_1(VAR_3, 1);
  VAR_3 = FUNC_1(VAR_3, VAR_2->nChildXids);
 }

 return FUNC_1(VAR_4, FUNC_2(sizeof(TransactionId), VAR_3));
}
