
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* TransactionState ;
typedef scalar_t__ TransactionId ;
struct TYPE_3__ {scalar_t__ state; int nChildXids; scalar_t__* childXids; int fullTransactionId; struct TYPE_3__* parent; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;

bool
FUNC_6(TransactionId VAR_4)
{
 TransactionState VAR_5;
 if (!FUNC_3(VAR_4))
  return 0;

 if (FUNC_2(VAR_4, FUNC_1()))
  return 1;







 if (VAR_3 > 0)
 {
  int VAR_6,
     VAR_7;

  VAR_6 = 0;
  VAR_7 = VAR_3 - 1;
  while (VAR_6 <= VAR_7)
  {
   int VAR_8;
   TransactionId VAR_9;

   VAR_8 = VAR_6 + (VAR_7 - VAR_6) / 2;
   VAR_9 = VAR_1[VAR_8];
   if (VAR_9 == VAR_4)
    return 1;
   else if (VAR_9 < VAR_4)
    VAR_6 = VAR_8 + 1;
   else
    VAR_7 = VAR_8 - 1;
  }
  return 0;
 }
 for (VAR_5 = VAR_0; VAR_5 != ((void*)0); VAR_5 = VAR_5->parent)
 {
  int VAR_10,
     VAR_11;

  if (VAR_5->state == VAR_2)
   continue;
  if (!FUNC_0(VAR_5->fullTransactionId))
   continue;
  if (FUNC_2(VAR_4, FUNC_5(VAR_5->fullTransactionId)))
   return 1;

  VAR_10 = 0;
  VAR_11 = VAR_5->nChildXids - 1;
  while (VAR_10 <= VAR_11)
  {
   int VAR_12;
   TransactionId VAR_13;

   VAR_12 = VAR_10 + (VAR_11 - VAR_10) / 2;
   VAR_13 = VAR_5->childXids[VAR_12];
   if (FUNC_2(VAR_13, VAR_4))
    return 1;
   else if (FUNC_4(VAR_13, VAR_4))
    VAR_10 = VAR_12 + 1;
   else
    VAR_11 = VAR_12 - 1;
  }
 }

 return 0;
}
