
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;


 scalar_t__ FUNC_0 (int ,int const) ;

TransactionId
FUNC_1(TransactionId VAR_0,
     int VAR_1, const TransactionId *VAR_2)
{
 TransactionId VAR_3;
 VAR_3 = VAR_0;
 while (--VAR_1 >= 0)
 {
  if (FUNC_0(VAR_3, VAR_2[VAR_1]))
   VAR_3 = VAR_2[VAR_1];
 }
 return VAR_3;
}
