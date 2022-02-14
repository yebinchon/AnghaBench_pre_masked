
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int mode; int val; int enable; int raw; } ;
typedef TYPE_1__ rgblight_config_t ;
struct TYPE_4__ {int octave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;

void FUNC_3(void) {
    rgblight_config_t VAR_12;
    VAR_12.raw = FUNC_2();

    if (!VAR_12.enable || VAR_12.mode != 1) { return; }

    uint32_t VAR_13 = VAR_10;
    uint8_t VAR_14 = VAR_12.val;

    if (VAR_13 & (1<<VAR_6)) {
      if (VAR_13 & (1<<VAR_7)) {
        FUNC_0(VAR_3, VAR_14);
      } else if (VAR_13 & (1<<VAR_5)) {
        FUNC_0(VAR_1, VAR_14);
      } else {
        FUNC_0(VAR_2, VAR_14);
      }
    } else if (VAR_13 & (1<<VAR_9)) {
      FUNC_0(VAR_4, VAR_14);




    } else {
        FUNC_0(VAR_0, VAR_14);
    }
}
