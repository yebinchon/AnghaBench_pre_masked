
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int range; unsigned int code; } ;
typedef TYPE_1__ stb_arith ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(stb_arith *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
   unsigned int VAR_4 = VAR_0->range / VAR_1;
   VAR_0->code -= VAR_4 * VAR_3;
   VAR_0->range = VAR_4 * VAR_2;
   while (VAR_0->range < 0x1000000)
      FUNC_0(VAR_0);
}
