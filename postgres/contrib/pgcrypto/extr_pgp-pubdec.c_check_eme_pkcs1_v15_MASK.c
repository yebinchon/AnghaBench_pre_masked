
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;



__attribute__((used)) static uint8 *
FUNC_0(uint8 *VAR_0, int VAR_1)
{
 uint8 *VAR_2 = VAR_0 + VAR_1;
 uint8 *VAR_3 = VAR_0;
 int VAR_4 = 0;

 if (VAR_1 < 1 + 8 + 1)
  return ((void*)0);

 if (*VAR_3++ != 2)
  return ((void*)0);

 while (VAR_3 < VAR_2 && *VAR_3)
 {
  VAR_3++;
  VAR_4++;
 }

 if (VAR_3 == VAR_2)
  return ((void*)0);
 if (*VAR_3 != 0)
  return ((void*)0);
 if (VAR_4 < 8)
  return ((void*)0);
 return VAR_3 + 1;
}
