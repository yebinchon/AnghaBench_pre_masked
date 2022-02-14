
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;

unsigned int FUNC_1(void *VAR_0)
{
    unsigned int VAR_1 = (unsigned int)(size_t) VAR_0;


   VAR_1 = FUNC_0(VAR_1);
   VAR_1 += VAR_1 << 16;


   VAR_1 ^= VAR_1 << 3;
   VAR_1 += VAR_1 >> 5;
   VAR_1 ^= VAR_1 << 2;
   VAR_1 += VAR_1 >> 15;
   VAR_1 ^= VAR_1 << 10;
   return FUNC_0(VAR_1);
}
