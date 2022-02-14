
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wiphy {int n_cipher_suites; scalar_t__* cipher_suites; } ;



bool FUNC_0(struct wiphy *VAR_0, u32 VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->n_cipher_suites; VAR_2++)
  if (VAR_1 == VAR_0->cipher_suites[VAR_2])
   return 1;
 return 0;
}
