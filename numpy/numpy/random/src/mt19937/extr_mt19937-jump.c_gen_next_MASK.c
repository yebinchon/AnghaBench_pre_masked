
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pos; unsigned long* key; } ;
typedef TYPE_1__ mt19937_state ;


 unsigned long VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 unsigned long VAR_3 ;

void FUNC_0(mt19937_state *VAR_4) {
  int VAR_5;
  unsigned long VAR_6;
  static unsigned long VAR_7[2] = {0x0ul, 128};

  VAR_5 = VAR_4->pos;
  if (VAR_5 < VAR_2 - VAR_1) {
    VAR_6 = (VAR_4->key[VAR_5] & VAR_3) | (VAR_4->key[VAR_5 + 1] & VAR_0);
    VAR_4->key[VAR_5] = VAR_4->key[VAR_5 + VAR_1] ^ (VAR_6 >> 1) ^ VAR_7[VAR_6 % 2];
    VAR_4->pos++;
  } else if (VAR_5 < VAR_2 - 1) {
    VAR_6 = (VAR_4->key[VAR_5] & VAR_3) | (VAR_4->key[VAR_5 + 1] & VAR_0);
    VAR_4->key[VAR_5] = VAR_4->key[VAR_5 + (VAR_1 - VAR_2)] ^ (VAR_6 >> 1) ^ VAR_7[VAR_6 % 2];
    VAR_4->pos++;
  } else if (VAR_5 == VAR_2 - 1) {
    VAR_6 = (VAR_4->key[VAR_2 - 1] & VAR_3) | (VAR_4->key[0] & VAR_0);
    VAR_4->key[VAR_2 - 1] = VAR_4->key[VAR_1 - 1] ^ (VAR_6 >> 1) ^ VAR_7[VAR_6 % 2];
    VAR_4->pos = 0;
  }
}
