
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(char *VAR_0, unsigned int *VAR_1)
{
   unsigned int VAR_2 = 0x3141592c;
   unsigned int VAR_3 = 0x77f044ed;
   while (*VAR_0) {
      VAR_2 = (VAR_2 << 7) + (VAR_2 >> 25) + *VAR_0;
      VAR_3 = (VAR_3 << 11) + (VAR_3 >> 21) + *VAR_0;
      ++VAR_0;
   }
   *VAR_1 = VAR_3 + (VAR_2 >> 16);
   return VAR_2 + (VAR_3 >> 16);
}
