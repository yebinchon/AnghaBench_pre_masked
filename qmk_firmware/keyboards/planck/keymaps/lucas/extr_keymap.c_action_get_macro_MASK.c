
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

const macro_t *FUNC_4(keyrecord_t *VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
  switch(VAR_4) {
    case 0:
        if (VAR_3->event.pressed) {
            FUNC_2(VAR_1);
            FUNC_1(1);
        } else {
            FUNC_0(1);
            FUNC_3(VAR_1);
        }
        break;
    case 1:
        if (VAR_3->event.pressed) {
            FUNC_3(VAR_1);
            FUNC_2(VAR_0);
        } else {
            FUNC_3(VAR_0);
        }
        break;
  }
  return VAR_2;

}
