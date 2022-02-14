
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* key; int pos; } ;
typedef TYPE_1__ mt19937_state ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(mt19937_state *VAR_1, uint32_t VAR_2) {
  int VAR_3;
  uint32_t *VAR_4 = VAR_1->key;

  VAR_4[0] = VAR_2 & 0xffffffffUL;
  for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {






    VAR_4[VAR_3] = (1812433253UL * (VAR_4[VAR_3 - 1] ^ (VAR_4[VAR_3 - 1] >> 30)) + VAR_3);

    VAR_4[VAR_3] &= 0xffffffffUL;
  }
  VAR_1->pos = VAR_3;
  return;
}
