
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
typedef int XLogReaderState ;
typedef scalar_t__ TransactionId ;
struct TYPE_2__ {int nextFullXid; } ;
typedef int FullTransactionId ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;

FullTransactionId
FUNC_7(XLogReaderState *VAR_2)
{
 TransactionId VAR_3,
     VAR_4;
 uint32 VAR_5;





 FUNC_1(FUNC_0() || !VAR_0);

 VAR_3 = FUNC_4(VAR_2);
 VAR_4 = FUNC_5(VAR_1->nextFullXid);
 VAR_5 = FUNC_2(VAR_1->nextFullXid);





 if (FUNC_6(VAR_3 > VAR_4))
  --VAR_5;

 return FUNC_3(VAR_5, VAR_3);
}
