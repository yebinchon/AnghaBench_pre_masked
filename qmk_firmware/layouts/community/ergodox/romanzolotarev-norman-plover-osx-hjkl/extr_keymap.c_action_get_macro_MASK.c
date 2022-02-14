
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
 int const* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

const macro_t *FUNC_2(keyrecord_t *VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{

  switch(VAR_3) {
    case 0:
      if (VAR_2->event.pressed) {
        FUNC_0(VAR_0);
      } else {
        FUNC_1(VAR_0);
      }
      break;
  }
  return VAR_1;
}
