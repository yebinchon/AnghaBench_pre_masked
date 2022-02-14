
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

bool FUNC_4(uint16_t VAR_6, keyrecord_t *VAR_7) {
  uint8_t VAR_8;
  uint16_t VAR_9;
  bool *VAR_10;

  switch (VAR_6) {
  case 129:
    VAR_9 = VAR_3;
    VAR_10 = &VAR_4;
    break;
  case 128:
    VAR_9 = VAR_0;
    VAR_10 = &VAR_5;
    break;
  default:
    return 1;
  }

  VAR_8 = FUNC_1() & (FUNC_0(VAR_1)|FUNC_0(VAR_2));


  if (VAR_7->event.pressed && VAR_8) {
    *VAR_10 = 1;
    FUNC_2(VAR_9);
    return 0;


  } else if (!(VAR_7->event.pressed) && *VAR_10) {
    *VAR_10 = 0;
    FUNC_3(VAR_9);
    return 0;

  } else {
    return 1;
  }
}
