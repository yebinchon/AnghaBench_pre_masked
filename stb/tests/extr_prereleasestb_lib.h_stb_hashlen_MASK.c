
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(char *VAR_0, int VAR_1)
{
   unsigned int VAR_2 = 0;
   while (VAR_1-- > 0 && *VAR_0)
      VAR_2 = (VAR_2 << 7) + (VAR_2 >> 25) + *VAR_0++;
   return VAR_2 + (VAR_2 >> 16);
}
