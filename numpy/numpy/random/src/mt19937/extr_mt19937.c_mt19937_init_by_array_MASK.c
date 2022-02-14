
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* key; } ;
typedef TYPE_1__ mt19937_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned long) ;

void FUNC_1(mt19937_state *VAR_1, uint32_t *VAR_2,
                           int VAR_3) {

  int VAR_4 = 1;
  int VAR_5 = 0;
  uint32_t *VAR_6 = VAR_1->key;
  int VAR_7;

  FUNC_0(VAR_1, 19650218UL);
  VAR_7 = (VAR_0 > VAR_3 ? VAR_0 : VAR_3);
  for (; VAR_7; VAR_7--) {

    VAR_6[VAR_4] = (VAR_6[VAR_4] ^ ((VAR_6[VAR_4 - 1] ^ (VAR_6[VAR_4 - 1] >> 30)) * 1664525UL)) +
            VAR_2[VAR_5] + VAR_5;

    VAR_6[VAR_4] &= 0xffffffffUL;
    VAR_4++;
    VAR_5++;
    if (VAR_4 >= VAR_0) {
      VAR_6[0] = VAR_6[VAR_0 - 1];
      VAR_4 = 1;
    }
    if (VAR_5 >= VAR_3) {
      VAR_5 = 0;
    }
  }
  for (VAR_7 = VAR_0 - 1; VAR_7; VAR_7--) {
    VAR_6[VAR_4] = (VAR_6[VAR_4] ^ ((VAR_6[VAR_4 - 1] ^ (VAR_6[VAR_4 - 1] >> 30)) * 1566083941UL)) -
            VAR_4;
    VAR_6[VAR_4] &= 0xffffffffUL;
    VAR_4++;
    if (VAR_4 >= VAR_0) {
      VAR_6[0] = VAR_6[VAR_0 - 1];
      VAR_4 = 1;
    }
  }

  VAR_6[0] = 0x80000000UL;
}
