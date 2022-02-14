
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
 int VAR_2 ;
 int const* FUNC_0 (int ,int ) ;
 int const* VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

const macro_t *FUNC_3(keyrecord_t *VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
  switch(VAR_5) {

    case 0:
      if (VAR_4->event.pressed) {
        FUNC_1("#include <>");
        return FUNC_0( FUNC_2(VAR_2), VAR_0);
      }
      break;
    case 1:
      if (VAR_4->event.pressed) {
        FUNC_1("git pull");
        return FUNC_0( FUNC_2(VAR_1), VAR_0 );
      }
      break;
    case 2:
      if (VAR_4->event.pressed){
        FUNC_1("git push");
        return FUNC_0( FUNC_2(VAR_1), VAR_0 );
      }
      break;
    case 3:
      if (VAR_4->event.pressed){



      }
      break;
    case 4:
      if (VAR_4->event.pressed){



      }
      break;
  }
  return VAR_3;
}
