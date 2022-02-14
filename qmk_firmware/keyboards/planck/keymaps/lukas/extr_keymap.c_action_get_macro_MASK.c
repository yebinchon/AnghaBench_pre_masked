
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int const* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

const macro_t *FUNC_5(keyrecord_t *VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{

  switch(VAR_5) {
    case 0:
      if (VAR_4->event.pressed) {
        FUNC_3(VAR_1);



      } else {
        FUNC_4(VAR_1);
      }
      break;
    case 1:
      if (VAR_4->event.pressed) {
        FUNC_3(VAR_0);
        FUNC_2(VAR_3);
      } else {
        FUNC_4(VAR_0);
        FUNC_1(VAR_3);
      }
      break;
  }
  return VAR_2;
}
