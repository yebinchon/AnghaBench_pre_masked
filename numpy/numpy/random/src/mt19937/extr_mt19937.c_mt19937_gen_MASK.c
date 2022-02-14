
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* key; scalar_t__ pos; } ;
typedef TYPE_1__ mt19937_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(mt19937_state *VAR_5) {
  uint32_t VAR_6;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_3 - VAR_1; VAR_7++) {
    VAR_6 = (VAR_5->key[VAR_7] & VAR_4) | (VAR_5->key[VAR_7 + 1] & VAR_0);
    VAR_5->key[VAR_7] = VAR_5->key[VAR_7 + VAR_1] ^ (VAR_6 >> 1) ^ (-(VAR_6 & 1) & VAR_2);
  }
  for (; VAR_7 < VAR_3 - 1; VAR_7++) {
    VAR_6 = (VAR_5->key[VAR_7] & VAR_4) | (VAR_5->key[VAR_7 + 1] & VAR_0);
    VAR_5->key[VAR_7] = VAR_5->key[VAR_7 + (VAR_1 - VAR_3)] ^ (VAR_6 >> 1) ^ (-(VAR_6 & 1) & VAR_2);
  }
  VAR_6 = (VAR_5->key[VAR_3 - 1] & VAR_4) | (VAR_5->key[0] & VAR_0);
  VAR_5->key[VAR_3 - 1] = VAR_5->key[VAR_1 - 1] ^ (VAR_6 >> 1) ^ (-(VAR_6 & 1) & VAR_2);

  VAR_5->pos = 0;
}
