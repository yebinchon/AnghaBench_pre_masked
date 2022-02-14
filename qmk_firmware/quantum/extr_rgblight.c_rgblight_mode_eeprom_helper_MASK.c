
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int restart; } ;
struct TYPE_3__ {int val; int sat; int hue; scalar_t__ mode; int raw; int enable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(uint8_t VAR_5, bool VAR_6) {
    if (!VAR_4.enable) {
        return;
    }
    if (VAR_5 < VAR_1) {
        VAR_4.mode = VAR_1;
    } else if (VAR_5 > VAR_0) {
        VAR_4.mode = VAR_0;
    } else {
        VAR_4.mode = VAR_5;
    }
    VAR_2;
    if (VAR_6) {
        FUNC_1(VAR_4.raw);
        FUNC_0("rgblight mode [EEPROM]: %u\n", VAR_4.mode);
    } else {
        FUNC_0("rgblight mode [NOEEPROM]: %u\n", VAR_4.mode);
    }
    if (FUNC_2(VAR_4.mode)) {



    } else {



    }



    FUNC_3(VAR_4.hue, VAR_4.sat, VAR_4.val);
}
