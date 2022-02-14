
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ TransactionId ;
struct TYPE_2__ {int nextFullXid; } ;
typedef int FullTransactionId ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int) ;

void
FUNC_10(TransactionId VAR_4)
{
 FullTransactionId VAR_5;
 TransactionId VAR_6;
 uint32 VAR_7;






 FUNC_1(FUNC_0() || !VAR_0);


 VAR_6 = FUNC_8(VAR_2->nextFullXid);
 if (!FUNC_7(VAR_4, VAR_6))
  return;
 FUNC_6(VAR_4);
 VAR_7 = FUNC_2(VAR_2->nextFullXid);
 if (FUNC_9(VAR_4 < VAR_6))
  ++VAR_7;
 VAR_5 = FUNC_3(VAR_7, VAR_4);





 FUNC_4(VAR_3, VAR_1);
 VAR_2->nextFullXid = VAR_5;
 FUNC_5(VAR_3);
}
