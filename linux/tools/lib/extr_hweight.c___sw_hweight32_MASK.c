
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0)
{






 unsigned int VAR_1 = VAR_0 - ((VAR_0 >> 1) & 0x55555555);
 VAR_1 = (VAR_1 & 0x33333333) + ((VAR_1 >> 2) & 0x33333333);
 VAR_1 = (VAR_1 + (VAR_1 >> 4)) & 0x0F0F0F0F;
 VAR_1 = VAR_1 + (VAR_1 >> 8);
 return (VAR_1 + (VAR_1 >> 16)) & 0x000000FF;

}
