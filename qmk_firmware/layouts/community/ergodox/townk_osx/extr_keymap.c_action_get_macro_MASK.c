
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
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const* FUNC_1 (int ,int ,...) ;
 int const* VAR_6 ;




 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;

const macro_t *FUNC_4(keyrecord_t *VAR_9, uint8_t VAR_10, uint8_t VAR_11) {

  switch(VAR_10) {
    case 129:
      if (VAR_9->event.pressed) {
        return FUNC_1(FUNC_0(VAR_4), FUNC_2(VAR_0), FUNC_3(VAR_4), FUNC_0(VAR_3), VAR_2);
      }
      return FUNC_1(FUNC_3(VAR_3), VAR_2);
    case 128:
      if (VAR_9->event.pressed) {
        return FUNC_1(FUNC_0(VAR_4), FUNC_2(VAR_0), FUNC_3(VAR_4), FUNC_0(VAR_7), VAR_2);
      }
      return FUNC_1(FUNC_3(VAR_7), VAR_2);
    case 131:
      if (VAR_9->event.pressed) {
        return FUNC_1(FUNC_0(VAR_5), FUNC_0(VAR_1), VAR_2);
      }
      return FUNC_1(FUNC_3(VAR_1), FUNC_3(VAR_5), VAR_2);
    case 130:
      if (VAR_9->event.pressed) {
        return FUNC_1(FUNC_0(VAR_5), FUNC_0(VAR_8), VAR_2);
      }
      return FUNC_1(FUNC_3(VAR_8), FUNC_3(VAR_5), VAR_2);
  }
  return VAR_6;
}
