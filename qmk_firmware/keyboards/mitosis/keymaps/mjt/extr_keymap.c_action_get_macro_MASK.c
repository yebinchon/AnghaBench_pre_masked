
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


 int const VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;

 int VAR_3 ;
 int const* FUNC_0 (int ,int ) ;
 int const* VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_1 (int const) ;


 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

const macro_t *FUNC_4(keyrecord_t *VAR_8, uint8_t VAR_9, uint8_t VAR_10)
{

  switch(VAR_9) {


  case 128:
    if (VAR_8->event.pressed) {
      VAR_7 = FUNC_3();
    } else {
      if (FUNC_2(VAR_7) > VAR_3) {
        return FUNC_0(FUNC_1(VAR_6), VAR_1);
      } else {
        return FUNC_0(FUNC_1(128), VAR_1);
      }
    }
    break;


  case 129:
    if (VAR_8->event.pressed) {
      VAR_7 = FUNC_3();
    } else {
      if (FUNC_2(VAR_7) > VAR_3) {
        return FUNC_0(FUNC_1(VAR_5), VAR_1);
      } else {
        return FUNC_0(FUNC_1(129), VAR_1);
      }
    }
    break;


  case 130:
    if (VAR_8->event.pressed) {
      VAR_7 = FUNC_3();
    } else {
      if (FUNC_2(VAR_7) > VAR_3) {
        return FUNC_0(FUNC_1(VAR_0), VAR_1);
      } else {
        return FUNC_0(FUNC_1(VAR_2), VAR_1);
      }
    }
    break;
  }
  return VAR_4;
}
