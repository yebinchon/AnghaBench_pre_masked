
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef scalar_t__ TransactionId ;
typedef int FullTransactionId ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(TransactionId VAR_0, uint32 VAR_1)
{
 FullTransactionId VAR_2;
 TransactionId VAR_3;
 uint32 VAR_4;

 VAR_2 = FUNC_1();
 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = FUNC_0(VAR_2);

 if (VAR_0 <= VAR_3)
 {
  if (VAR_1 != VAR_4)
   return 0;
 }
 else
 {
  if (VAR_1 + 1 != VAR_4)
   return 0;
 }

 if (!FUNC_2(VAR_0, VAR_3))
  return 0;

 return 1;
}
