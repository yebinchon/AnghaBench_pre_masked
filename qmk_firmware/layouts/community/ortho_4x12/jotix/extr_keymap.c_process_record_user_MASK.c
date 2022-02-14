
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_0(uint16_t VAR_3, keyrecord_t *VAR_4) {
  switch (VAR_3) {
    case 128:
      VAR_1 = VAR_4->event.pressed;
      break;
    case 129:
      VAR_2 = VAR_4->event.pressed;
      break;
    case 130:
      VAR_0 = VAR_4->event.pressed;
      break;
  };
  return 1;
}
