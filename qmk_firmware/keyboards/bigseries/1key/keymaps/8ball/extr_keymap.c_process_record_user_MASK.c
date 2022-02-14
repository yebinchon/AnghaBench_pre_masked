
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int * VAR_0 ;

 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

bool FUNC_7(uint16_t VAR_6, keyrecord_t *VAR_7) {
  switch (VAR_6) {
  case 128:
    if (VAR_7->event.pressed) {
      uint8_t VAR_8 = FUNC_0() / (VAR_3 / VAR_2 + 1);
      FUNC_1(1);
      if (VAR_8 < VAR_4) {
        FUNC_2();
      } else if (VAR_8 < VAR_1) {
        FUNC_4();
      } else {
        FUNC_3();
      }
      FUNC_5(VAR_0[VAR_8]);
      VAR_5 = FUNC_6();
      return 0;
    }
  }
  return 1;
}
