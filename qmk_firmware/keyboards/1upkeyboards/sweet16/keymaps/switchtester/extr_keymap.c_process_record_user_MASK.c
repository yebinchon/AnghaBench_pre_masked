
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {size_t col; size_t row; } ;
struct TYPE_6__ {scalar_t__ pressed; TYPE_1__ key; } ;
struct TYPE_7__ {TYPE_2__ event; } ;
typedef TYPE_3__ keyrecord_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int ** VAR_1 ;

bool FUNC_3(uint16_t VAR_2, keyrecord_t *VAR_3) {
  uint8_t VAR_4 = VAR_3->event.key.col;
  uint8_t VAR_5 = VAR_3->event.key.row;

  if (VAR_3->event.pressed) {
    char VAR_6[VAR_0];
    FUNC_2(VAR_1[VAR_5][VAR_4], VAR_6);
    FUNC_1(VAR_6);
    FUNC_0("\n");
  }
  return 0;
}
