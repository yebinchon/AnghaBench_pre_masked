
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int range; unsigned int code; } ;
typedef TYPE_1__ stb_arith ;



unsigned int FUNC_0(stb_arith *VAR_0, unsigned int VAR_1)
{
   unsigned int VAR_2 = VAR_0->range >> VAR_1;
   unsigned int VAR_3 = VAR_0->code / VAR_2;
   return VAR_3 >= (1U<<VAR_1) ? (1U<<VAR_1)-1 : VAR_3;
}
