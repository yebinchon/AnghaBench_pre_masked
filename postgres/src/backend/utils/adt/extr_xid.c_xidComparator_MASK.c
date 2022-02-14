
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TransactionId ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 TransactionId VAR_2 = *(const TransactionId *) VAR_0;
 TransactionId VAR_3 = *(const TransactionId *) VAR_1;

 if (VAR_2 > VAR_3)
  return 1;
 if (VAR_2 < VAR_3)
  return -1;
 return 0;
}
