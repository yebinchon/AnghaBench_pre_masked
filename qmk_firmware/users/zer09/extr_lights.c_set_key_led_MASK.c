
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int row; int col; } ;
struct TYPE_6__ {scalar_t__ pressed; TYPE_1__ key; } ;
struct TYPE_7__ {TYPE_2__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int ** VAR_0 ;
 int * VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;

void FUNC_1(keyrecord_t *VAR_4, uint8_t VAR_5) {
  static uint8_t VAR_6 = 5;

  uint8_t VAR_7 = VAR_4->event.key.row;
  uint8_t VAR_8 = VAR_4->event.key.col;
  uint8_t VAR_9;



  if (VAR_7 < 5) {
    VAR_9 = VAR_7 % 2 == 0 ? VAR_7 * VAR_6 + VAR_8 : VAR_7 * VAR_6 + (VAR_6 - (VAR_8 + 1));
  } else {
    VAR_9 = VAR_7 % 2 == 0 ? VAR_7 * VAR_6 + (VAR_6 - (VAR_8 + 1)) : VAR_7 * VAR_6 + VAR_8;
  }

  if (VAR_4->event.pressed) {
    VAR_2[VAR_9] = 1;
    FUNC_0(VAR_1[0], VAR_1[1], VAR_1[2], VAR_3, VAR_9);
  } else {
    VAR_2[VAR_9] = 0;
    FUNC_0(VAR_0[VAR_5][0], VAR_0[VAR_5][1], VAR_0[VAR_5][2], VAR_3, VAR_9);
  }
}
