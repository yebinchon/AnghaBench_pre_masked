
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0)
{
   VAR_0 ^= VAR_0 << 3;
   VAR_0 += VAR_0 >> 5;
   VAR_0 ^= VAR_0 << 4;
   VAR_0 += VAR_0 >> 17;
   VAR_0 ^= VAR_0 << 25;
   VAR_0 += VAR_0 >> 6;
   return VAR_0;
}
