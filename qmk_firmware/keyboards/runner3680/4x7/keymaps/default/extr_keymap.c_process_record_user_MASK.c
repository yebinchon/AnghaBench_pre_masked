
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
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

bool FUNC_6(uint16_t VAR_4, keyrecord_t *VAR_5) {
  switch (VAR_4) {
      case 129:
        if (VAR_5->event.pressed) {
           FUNC_3("mode just switched to qwerty and this is a huge string\n");
          FUNC_5(VAR_2);
        }
        break;

      case 130:
        if (VAR_5->event.pressed) {
          FUNC_2(VAR_1);
        } else {
          FUNC_1(VAR_1);
        }
        break;

      case 128:







        break;
  }
  return 1;
}
