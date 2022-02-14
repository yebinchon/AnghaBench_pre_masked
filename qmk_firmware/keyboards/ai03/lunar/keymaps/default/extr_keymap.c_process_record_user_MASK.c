
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



 int FUNC_0 (char*) ;


bool FUNC_1(uint16_t VAR_0, keyrecord_t *VAR_1) {
  switch (VAR_0) {
    case 129:
      if (VAR_1->event.pressed) {

        FUNC_0("https://kb.ai03.me/redir/lunar/index.html");
      } else {

      }
      break;
    case 128:
      if (VAR_1->event.pressed) {

        FUNC_0("https://switchplate.co/collections/lunar-group-buy");
      } else {

      }
      break;
  }
  return 1;
}
