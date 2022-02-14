
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* key; int pos; scalar_t__ has_binomial; scalar_t__ has_gauss; scalar_t__ gauss; } ;
typedef TYPE_1__ rk_state ;


 int VAR_0 ;

void FUNC_0(unsigned long VAR_1, rk_state *VAR_2) {
  int VAR_3;
  VAR_1 &= 0xffffffffUL;


  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    VAR_2->key[VAR_3] = VAR_1;
    VAR_1 = (1812433253UL * (VAR_1 ^ (VAR_1 >> 30)) + VAR_3 + 1) & 0xffffffffUL;
  }
  VAR_2->pos = VAR_0;
  VAR_2->gauss = 0;
  VAR_2->has_gauss = 0;
  VAR_2->has_binomial = 0;
}
