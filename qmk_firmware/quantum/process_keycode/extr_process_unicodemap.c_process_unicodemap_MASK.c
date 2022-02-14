
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__) ;

bool FUNC_7(uint16_t VAR_5, keyrecord_t *VAR_6) {
    if (VAR_5 >= VAR_0 && VAR_5 <= VAR_1 && VAR_6->event.pressed) {
        FUNC_5();

        uint32_t VAR_7 = FUNC_1(VAR_4 + FUNC_6(VAR_5));
        uint8_t VAR_8 = FUNC_0();

        if (VAR_7 > 0x10FFFF || (VAR_7 > 0xFFFF && VAR_8 == VAR_3)) {

            FUNC_3();
        } else if (VAR_7 > 0xFFFF && VAR_8 == VAR_2) {

            VAR_7 -= 0x10000;
            uint32_t VAR_9 = VAR_7 & 0x3FF, VAR_10 = (VAR_7 & 0xFFC00) >> 10;
            FUNC_2(VAR_10 + 0xD800);
            FUNC_2(VAR_9 + 0xDC00);
            FUNC_4();
        } else {
            FUNC_2(VAR_7);
            FUNC_4();
        }
    }
    return 1;
}
