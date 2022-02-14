
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_5__ {TYPE_2__ event; } ;
typedef TYPE_1__ keyrecord_t ;
typedef TYPE_2__ keyevent_t ;
struct TYPE_7__ {int swap_lalt_lgui; int swap_ralt_rgui; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int const* FUNC_1 (int ,...) ;
 int const* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_3__ VAR_16 ;

const macro_t *FUNC_6(keyrecord_t *VAR_17, uint8_t VAR_18, uint8_t VAR_19)
{

  keyevent_t VAR_20 = VAR_17->event;

  if (!FUNC_5()) {
    FUNC_4();
  }
  bool VAR_21 = 1;


  if(VAR_16.swap_lalt_lgui == 1 && VAR_16.swap_ralt_rgui == 1) {
    VAR_21 = 0;
  }
    switch(VAR_18) {
      case 137:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_2(VAR_4), FUNC_3(VAR_7), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_3), FUNC_2(VAR_6), FUNC_3(VAR_3), VAR_0 ) : FUNC_1(VAR_0));
          }
      case 135:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_2(VAR_12), FUNC_3(VAR_7), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_3), FUNC_2(VAR_13), FUNC_3(VAR_3), VAR_0 ) : FUNC_1(VAR_0));
          }
      case 131:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_0(VAR_14), FUNC_2(VAR_4), FUNC_3(VAR_14), FUNC_3(VAR_7), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_5), FUNC_0(VAR_14), FUNC_2(VAR_15), FUNC_3(VAR_14), FUNC_3(VAR_5), VAR_0 ) : FUNC_1(VAR_0));
          }
      case 133:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_0(VAR_14), FUNC_2(VAR_12), FUNC_3(VAR_14), FUNC_3(VAR_7), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_5), FUNC_2(VAR_15), FUNC_3(VAR_5), VAR_0 ) : FUNC_1(VAR_0));
          }
      case 128:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_2(VAR_10), FUNC_3(VAR_7), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_5), FUNC_2(VAR_10), FUNC_3(VAR_5), VAR_0 ) : FUNC_1(VAR_0));
          }
          break;
      case 129:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_2(VAR_2), FUNC_3(VAR_7), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_5), FUNC_2(VAR_2), FUNC_3(VAR_5), VAR_0 ) : FUNC_1(VAR_0));
          }
          break;
      case 136:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_2(VAR_1), FUNC_3(VAR_7), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_5), FUNC_2(VAR_1), FUNC_3(VAR_5), VAR_0 ) : FUNC_1(VAR_0));
          }
      case 130:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_0(VAR_5), FUNC_0(VAR_8), FUNC_2(4), FUNC_3(VAR_8), FUNC_3(VAR_7), FUNC_3(VAR_5), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_2(VAR_11) ) : FUNC_1(VAR_0));
          }
      case 134:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_5), FUNC_2(VAR_13), FUNC_3(VAR_5), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_2(VAR_13), FUNC_3(VAR_7), VAR_0 ) : FUNC_1(VAR_0));
          }
          break;
      case 132:

          if (VAR_21) {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_5), FUNC_2(VAR_6), FUNC_3(VAR_5), VAR_0 ) : FUNC_1(VAR_0));
          } else {
              return (VAR_20.pressed ? FUNC_1( FUNC_0(VAR_7), FUNC_2(VAR_6), FUNC_3(VAR_7), VAR_0 ) : FUNC_1(VAR_0));
          }
        default:
            break;
    }
  return VAR_9;
}
