
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned char VAR_0)
{
   VAR_0 = ((VAR_0 & 0xAA) >> 1) + ((VAR_0 & 0x55) << 1);
   VAR_0 = ((VAR_0 & 0xCC) >> 2) + ((VAR_0 & 0x33) << 2);
   return (unsigned char) ((VAR_0 >> 4) + (VAR_0 << 4));
}
