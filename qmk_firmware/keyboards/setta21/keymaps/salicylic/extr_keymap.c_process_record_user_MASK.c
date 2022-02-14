
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mode; } ;




 int VAR_0 ;




 int FUNC_0 (char*) ;

 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

bool FUNC_6(uint16_t VAR_3, keyrecord_t *VAR_4) {
  bool VAR_5 = 0;
  if (VAR_4->event.pressed) {



  }
  switch (VAR_3) {
    case 128:
      if (VAR_4->event.pressed) {
        FUNC_0("_SUM*");
      }
      break;
    case 132:
      if (VAR_4->event.pressed) {
        FUNC_0("_AVERAGE*");
      }
      break;
    case 131:
      if (VAR_4->event.pressed) {
        FUNC_0("_COUNTIF*");
      }
      break;
    case 130:
      if (VAR_4->event.pressed) {
        FUNC_0("_MAX*");
      }
      break;
    case 129:
      if (VAR_4->event.pressed) {
        FUNC_0("_MIN*");
      }
      break;
    default:
      VAR_5 = 1;
      break;
  }

  return VAR_5;
}
