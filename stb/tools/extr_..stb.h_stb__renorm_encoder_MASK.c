
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int range_low; int range_high; } ;
typedef TYPE_1__ stb_arith ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(stb_arith *VAR_0)
{
   FUNC_0(VAR_0, VAR_0->range_low >> 24);
   VAR_0->range_low <<= 8;
   VAR_0->range_high = (VAR_0->range_high << 8) | 0xff;
}
