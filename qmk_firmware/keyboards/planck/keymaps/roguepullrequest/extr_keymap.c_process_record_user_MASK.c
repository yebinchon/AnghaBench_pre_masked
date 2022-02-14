
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
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

bool FUNC_8(uint16_t VAR_5, keyrecord_t *VAR_6) {
  static uint16_t VAR_7;

  switch (VAR_5) {
    case 129:
      if (VAR_6->event.pressed) {
        if (!VAR_4) {
          VAR_4 = 1;
          FUNC_2(VAR_0);
        }
        VAR_3 = FUNC_5();
        FUNC_2(VAR_2);
      } else {
        FUNC_6(VAR_2);
      }
      break;
  }

  switch (VAR_5){
    case 128:
      if(VAR_6->event.pressed){
        VAR_7 = FUNC_5();
        FUNC_3(FUNC_0(VAR_1));
      } else {
        FUNC_7(FUNC_0(VAR_1));
        if (FUNC_4(VAR_7) < 150) {
          FUNC_1("!$");
        }
      }
    return 0;
  }
  return 1;
}
