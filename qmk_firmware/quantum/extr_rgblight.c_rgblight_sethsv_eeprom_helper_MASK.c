
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {size_t mode; int val; int hue; int sat; int raw; scalar_t__ enable; } ;
struct TYPE_6__ {scalar_t__ base_mode; } ;
struct TYPE_5__ {int b; int g; int r; } ;
typedef TYPE_1__ LED_TYPE ;


 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int,int,...) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_2 (int*) ;
 TYPE_4__ VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_3__ VAR_12 ;
 int FUNC_5 (int,int,int,TYPE_1__*) ;

void FUNC_6(uint8_t VAR_13, uint8_t VAR_14, uint8_t VAR_15, bool VAR_16) {
    if (VAR_11.enable) {
        VAR_12.base_mode = VAR_10[VAR_11.mode];
        if (VAR_11.mode == VAR_5) {

            LED_TYPE VAR_17;
            FUNC_5(VAR_13, VAR_14, VAR_15, &VAR_17);
            FUNC_4(VAR_17.r, VAR_17.g, VAR_17.b);
        } else {

            if (1 == 0) {
            }
        }





        VAR_11.hue = VAR_13;
        VAR_11.sat = VAR_14;
        VAR_11.val = VAR_15;
        if (VAR_16) {
            FUNC_1(VAR_11.raw);
            FUNC_0("rgblight set hsv [EEPROM]: %u,%u,%u\n", VAR_11.hue, VAR_11.sat, VAR_11.val);
        } else {
            FUNC_0("rgblight set hsv [NOEEPROM]: %u,%u,%u\n", VAR_11.hue, VAR_11.sat, VAR_11.val);
        }
    }
}
