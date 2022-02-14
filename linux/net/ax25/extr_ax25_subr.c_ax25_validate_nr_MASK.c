
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short va; unsigned short vs; unsigned short modulus; } ;
typedef TYPE_1__ ax25_cb ;



int FUNC_0(ax25_cb *VAR_0, unsigned short VAR_1)
{
 unsigned short VAR_2 = VAR_0->va;

 while (VAR_2 != VAR_0->vs) {
  if (VAR_1 == VAR_2) return 1;
  VAR_2 = (VAR_2 + 1) % VAR_0->modulus;
 }

 if (VAR_1 == VAR_0->vs) return 1;

 return 0;
}
