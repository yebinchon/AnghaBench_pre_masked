
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos; int * key; } ;
typedef TYPE_1__ mt19937_state ;


 int VAR_0 ;

void FUNC_0(mt19937_state *VAR_1, mt19937_state *VAR_2) {
  int VAR_3, VAR_4 = VAR_1->pos, VAR_5 = VAR_2->pos;

  if (VAR_5 - VAR_4 >= 0) {
    for (VAR_3 = 0; VAR_3 < VAR_0 - VAR_5; VAR_3++)
      VAR_1->key[VAR_3 + VAR_4] ^= VAR_2->key[VAR_3 + VAR_5];
    for (; VAR_3 < VAR_0 - VAR_4; VAR_3++)
      VAR_1->key[VAR_3 + VAR_4] ^= VAR_2->key[VAR_3 + (VAR_5 - VAR_0)];
    for (; VAR_3 < VAR_0; VAR_3++)
      VAR_1->key[VAR_3 + (VAR_4 - VAR_0)] ^= VAR_2->key[VAR_3 + (VAR_5 - VAR_0)];
  } else {
    for (VAR_3 = 0; VAR_3 < VAR_0 - VAR_4; VAR_3++)
      VAR_1->key[VAR_3 + VAR_4] ^= VAR_2->key[VAR_3 + VAR_5];
    for (; VAR_3 < VAR_0 - VAR_5; VAR_3++)
      VAR_1->key[VAR_3 + (VAR_4 - VAR_0)] ^= VAR_2->key[VAR_3 + VAR_5];
    for (; VAR_3 < VAR_0; VAR_3++)
      VAR_1->key[VAR_3 + (VAR_4 - VAR_0)] ^= VAR_2->key[VAR_3 + (VAR_5 - VAR_0)];
  }
}
