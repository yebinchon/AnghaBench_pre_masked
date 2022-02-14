
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


 int FUNC_0 (int ,int) ;
 int VAR_1 ;

bool FUNC_1(uint16_t VAR_2, keyrecord_t *VAR_3) {
  switch (VAR_2) {
  case 128:
    if (VAR_3->event.pressed && VAR_1 > 0) {
      VAR_1--;
      FUNC_0(VAR_0, VAR_1);
    }

    return 1;
    break;
  case 129:
    if (VAR_3->event.pressed && VAR_1 < 8) {
      VAR_1++;
      FUNC_0(VAR_0, VAR_1);
    }

    return 1;
    break;
  default:
    return 0;
    break;
  }
}
