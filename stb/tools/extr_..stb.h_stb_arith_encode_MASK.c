
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int range_high; unsigned int range_low; } ;
typedef TYPE_1__ stb_arith ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(stb_arith *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
   unsigned int VAR_4 = VAR_0->range_high - VAR_0->range_low;
   unsigned int VAR_5 = VAR_0->range_low;
   VAR_4 /= VAR_1;
   VAR_0->range_low += VAR_4 * VAR_3;
   VAR_0->range_high = VAR_0->range_low + VAR_4*VAR_2;
   if (VAR_0->range_low < VAR_5)
      FUNC_0(VAR_0);
   while (VAR_0->range_high - VAR_0->range_low < 0x1000000)
      FUNC_1(VAR_0);
}
