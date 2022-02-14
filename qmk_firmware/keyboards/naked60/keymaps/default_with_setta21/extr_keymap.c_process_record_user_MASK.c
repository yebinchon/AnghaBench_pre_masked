
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mode; } ;




 int VAR_0 ;




 int FUNC_0 (char*) ;

 int FUNC_1 () ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

bool FUNC_5(uint16_t VAR_2, keyrecord_t *VAR_3) {

  bool VAR_4 = 0;
  switch (VAR_2) {
    case 128:
      if (VAR_3->event.pressed) {
        FUNC_0("=SUM(");
      }
      break;
    case 132:
      if (VAR_3->event.pressed) {
        FUNC_0("=AVERAGE(");
      }
      break;
    case 131:
      if (VAR_3->event.pressed) {
        FUNC_0("=COUNTIF(");
      }
      break;
    case 130:
      if (VAR_3->event.pressed) {
        FUNC_0("=MAX(");
      }
      break;
    case 129:
      if (VAR_3->event.pressed) {
        FUNC_0("=MIN(");
      }
      break;
    default:
      VAR_4 = 1;
      break;
  }

  return VAR_4;
}
