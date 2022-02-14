
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32 ;
typedef scalar_t__ TransactionId ;


 int FUNC_0 (scalar_t__) ;

bool
FUNC_1(TransactionId VAR_0, TransactionId VAR_1)
{




 int32 VAR_2;

 if (!FUNC_0(VAR_0) || !FUNC_0(VAR_1))
  return (VAR_0 < VAR_1);

 VAR_2 = (int32) (VAR_0 - VAR_1);
 return (VAR_2 < 0);
}
