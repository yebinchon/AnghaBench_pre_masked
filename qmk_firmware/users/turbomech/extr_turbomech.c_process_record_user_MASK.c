
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_8__ {int mode; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 () ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int const) ;

bool FUNC_8(uint16_t VAR_3, keyrecord_t *VAR_4) {
  switch (VAR_3) {
    case 130:
     if (VAR_4->event.pressed) {
        FUNC_1(130);
        VAR_1 = !VAR_1;
      if (VAR_1) {
        FUNC_4(14);
      }
      else if (!VAR_1) {
        FUNC_7(130);
        FUNC_4(VAR_0);
      }
    }
    return 0;
    break;

    case 128:

    if (VAR_4->event.pressed) {
      FUNC_4(VAR_0);
      FUNC_6();
      VAR_0 = VAR_2.mode;

    }
    return 0;
    break;

    case 129:
    if (VAR_4->event.pressed) {
      FUNC_3();
      FUNC_4(1);
      FUNC_5(255, 255, 255);

      FUNC_2();
    }
    return 0;
    break;
  return 1;
  break;
  }
return FUNC_0(VAR_3, VAR_4);
}
