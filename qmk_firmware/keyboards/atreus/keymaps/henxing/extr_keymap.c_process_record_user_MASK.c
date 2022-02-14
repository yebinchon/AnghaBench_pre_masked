
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
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;

bool FUNC_3(uint16_t VAR_3, keyrecord_t *VAR_4) {


  bool VAR_5 = 0;

  switch (VAR_3) {
    case 129:
      if (VAR_4->event.pressed) {
        FUNC_2(1UL<<VAR_1);
      }
      break;

    case 130:

      if (VAR_4->event.pressed) {
        FUNC_1(VAR_0);
      } else {
        FUNC_0(VAR_0);
      }
      break;

    case 128:
      if (VAR_4->event.pressed) {
        FUNC_2(1UL<<VAR_2);
      }
      break;

    default:



      VAR_5 = 1;
      break;
  }

  return VAR_5;
}
