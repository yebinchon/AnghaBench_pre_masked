
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

bool FUNC_4(uint16_t VAR_3, keyrecord_t *VAR_4) {
  uint8_t VAR_5;
  switch (VAR_3) {
    case 129:
    case 128:


      VAR_5 = (VAR_3 == 129) ? VAR_1 : VAR_0;
      if (VAR_4->event.pressed) {
          FUNC_3(VAR_2);
          FUNC_0(VAR_5);
          FUNC_2();
      } else {
          FUNC_1(VAR_5);
          FUNC_2();
      }
      return 0;
    default:
      return 1;
  }
}
