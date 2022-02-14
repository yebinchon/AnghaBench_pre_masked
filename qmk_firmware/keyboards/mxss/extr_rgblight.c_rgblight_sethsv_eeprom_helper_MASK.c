
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int8_t ;
struct TYPE_7__ {int hue; int sat; } ;
struct TYPE_6__ {int mode; int val; int hue; int sat; int raw; scalar_t__ enable; } ;
struct TYPE_5__ {int b; int g; int r; } ;
typedef TYPE_1__ LED_TYPE ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (int ) ;
 TYPE_4__* VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int,int,TYPE_1__*) ;
 int FUNC_6 (char*,int,int,int) ;

void FUNC_7(uint16_t VAR_5, uint8_t VAR_6, uint8_t VAR_7, bool VAR_8) {
  if (VAR_4.enable) {
    if (VAR_4.mode == 1) {

      LED_TYPE VAR_9;
      FUNC_5(VAR_5, VAR_6, VAR_7, &VAR_9);

      VAR_2[0].hue = VAR_2[1].hue = VAR_5;
      VAR_2[0].sat = VAR_2[1].sat = VAR_6;

      FUNC_4(VAR_9.r, VAR_9.g, VAR_9.b);
    } else {

      if (VAR_4.mode >= 2 && VAR_4.mode <= 5) {

        VAR_7 = VAR_4.val;
      } else if (VAR_4.mode >= 6 && VAR_4.mode <= 14) {

        VAR_5 = VAR_4.hue;
      } else if (VAR_4.mode >= 25 && VAR_4.mode <= 34) {

        uint16_t VAR_10;
        int8_t VAR_11 = ((VAR_4.mode - 25) % 2) ? -1 : 1;
        uint16_t VAR_12 = FUNC_2(&VAR_0[(VAR_4.mode - 25) / 2]);
        for (uint8_t VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
          VAR_10 = (VAR_12 / VAR_1 * VAR_13 * VAR_11 + VAR_5 + 360) % 360;
          FUNC_0("rgblight rainbow set hsv: %u,%u,%d,%u\n", VAR_13, VAR_10, VAR_11, VAR_12);
          FUNC_5(VAR_10, VAR_6, VAR_7, (LED_TYPE *)&VAR_3[VAR_13]);
        }
        FUNC_3();
      }
    }
    VAR_4.hue = VAR_5;
    VAR_4.sat = VAR_6;
    VAR_4.val = VAR_7;
    if (VAR_8) {
      FUNC_1(VAR_4.raw);
      FUNC_6("rgblight set hsv [EEPROM]: %u,%u,%u\n", VAR_4.hue, VAR_4.sat, VAR_4.val);
    } else {
      FUNC_6("rgblight set hsv [NOEEPROM]: %u,%u,%u\n", VAR_4.hue, VAR_4.sat, VAR_4.val);
    }
  }
}
