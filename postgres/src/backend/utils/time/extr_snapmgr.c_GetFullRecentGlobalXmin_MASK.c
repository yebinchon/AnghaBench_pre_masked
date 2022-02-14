
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef scalar_t__ TransactionId ;
typedef int FullTransactionId ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

FullTransactionId
FUNC_6(void)
{
 FullTransactionId VAR_1;
 uint32 VAR_2;
 TransactionId VAR_3;
 uint32 VAR_4;

 FUNC_0(FUNC_4(VAR_0));






 VAR_1 = FUNC_3();
 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_5(VAR_1);

 if (VAR_0 > VAR_3)
  VAR_4 = VAR_2 - 1;
 else
  VAR_4 = VAR_2;

 return FUNC_2(VAR_4, VAR_0);
}
