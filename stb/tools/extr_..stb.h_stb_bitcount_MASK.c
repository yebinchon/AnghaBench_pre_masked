
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned int VAR_0)
{
   VAR_0 = (VAR_0 & 0x55555555) + ((VAR_0 >> 1) & 0x55555555);
   VAR_0 = (VAR_0 & 0x33333333) + ((VAR_0 >> 2) & 0x33333333);
   VAR_0 = (VAR_0 + (VAR_0 >> 4)) & 0x0f0f0f0f;
   VAR_0 = (VAR_0 + (VAR_0 >> 8));
   VAR_0 = (VAR_0 + (VAR_0 >> 16));
   return VAR_0 & 0xff;
}
