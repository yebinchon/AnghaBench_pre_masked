
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned short FUNC_0(unsigned int VAR_0)
{
   unsigned short VAR_1;
   for (VAR_1 = 0; VAR_0; VAR_0 = VAR_0 & (VAR_0 - 1))
      VAR_1++;
   return VAR_1;
}
