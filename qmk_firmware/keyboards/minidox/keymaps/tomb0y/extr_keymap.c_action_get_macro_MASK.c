
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int mods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const* FUNC_0 (int ,int ,int ) ;
 int const* VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;




 int FUNC_3 (int ) ;
 TYPE_3__* VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

const macro_t *FUNC_8(keyrecord_t *VAR_13, uint8_t VAR_14, uint8_t VAR_15)
{
  switch(VAR_14) {
    case 128:
      if (VAR_13->event.pressed) {
        return FUNC_0(FUNC_2(VAR_0), FUNC_2(VAR_10), VAR_1);
      }
      break;
    case 129:
      if (VAR_13->event.pressed) {
        return FUNC_0(FUNC_2(VAR_0), FUNC_2(VAR_2), VAR_1);
      }
      break;
    case 131:
      if (VAR_13->event.pressed) {
        if (VAR_12->mods & FUNC_1(VAR_5) || VAR_12->mods & FUNC_1(VAR_6)) {
          FUNC_5(VAR_4);
        } else {
          FUNC_4(VAR_11);
          FUNC_6(VAR_11, VAR_9);
        }
      } else {
        FUNC_3(VAR_8);
        FUNC_7(VAR_4);
      }
      break;
    case 130:
      if (VAR_13->event.pressed) {
        FUNC_5(VAR_3);
      } else {
        FUNC_3(VAR_8);
        FUNC_7(VAR_3);
      }
      break;
  }

  return VAR_7;
}
