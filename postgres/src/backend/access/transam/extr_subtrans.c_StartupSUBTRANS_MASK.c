
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int nextFullXid; } ;
typedef int FullTransactionId ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void
FUNC_5(TransactionId VAR_4)
{
 FullTransactionId VAR_5;
 int VAR_6;
 int VAR_7;







 FUNC_0(VAR_3, VAR_0);

 VAR_6 = FUNC_2(VAR_4);
 VAR_5 = VAR_2->nextFullXid;
 VAR_7 = FUNC_2(FUNC_3(VAR_5));

 while (VAR_6 != VAR_7)
 {
  (void) FUNC_4(VAR_6);
  VAR_6++;

  if (VAR_6 > FUNC_2(VAR_1))
   VAR_6 = 0;
 }
 (void) FUNC_4(VAR_6);

 FUNC_1(VAR_3);
}
