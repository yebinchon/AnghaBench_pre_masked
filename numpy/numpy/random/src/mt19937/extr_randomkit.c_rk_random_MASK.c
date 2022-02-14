
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pos; unsigned long* key; } ;
typedef TYPE_1__ rk_state ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;

unsigned long FUNC_0(rk_state *VAR_6) {
  unsigned long VAR_7;

  if (VAR_6->pos == VAR_4) {
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_3 - VAR_1; VAR_8++) {
      VAR_7 = (VAR_6->key[VAR_8] & VAR_5) | (VAR_6->key[VAR_8 + 1] & VAR_0);
      VAR_6->key[VAR_8] = VAR_6->key[VAR_8 + VAR_1] ^ (VAR_7 >> 1) ^ (-(VAR_7 & 1) & VAR_2);
    }
    for (; VAR_8 < VAR_3 - 1; VAR_8++) {
      VAR_7 = (VAR_6->key[VAR_8] & VAR_5) | (VAR_6->key[VAR_8 + 1] & VAR_0);
      VAR_6->key[VAR_8] =
          VAR_6->key[VAR_8 + (VAR_1 - VAR_3)] ^ (VAR_7 >> 1) ^ (-(VAR_7 & 1) & VAR_2);
    }
    VAR_7 = (VAR_6->key[VAR_3 - 1] & VAR_5) | (VAR_6->key[0] & VAR_0);
    VAR_6->key[VAR_3 - 1] = VAR_6->key[VAR_1 - 1] ^ (VAR_7 >> 1) ^ (-(VAR_7 & 1) & VAR_2);

    VAR_6->pos = 0;
  }
  VAR_7 = VAR_6->key[VAR_6->pos++];


  VAR_7 ^= (VAR_7 >> 11);
  VAR_7 ^= (VAR_7 << 7) & 0x9d2c5680UL;
  VAR_7 ^= (VAR_7 << 15) & 0xefc60000UL;
  VAR_7 ^= (VAR_7 >> 18);

  return VAR_7;
}
