
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;

void FUNC_2(keyrecord_t *VAR_0, uint8_t VAR_1, uint8_t VAR_2) {
  switch (VAR_1) {
    case 0:
      if (VAR_0->event.pressed) {
        FUNC_0(1);
        FUNC_1(206, 255, 255);
      }
  }
}
