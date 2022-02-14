
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

bool FUNC_8(uint16_t VAR_1, keyrecord_t *VAR_2) {
    if (VAR_1 == VAR_0 && VAR_2->event.pressed) {
        bool VAR_3 = 1;
        uint8_t VAR_4 = 0;
        if ((VAR_4 = FUNC_3()) && !FUNC_4()) {
            FUNC_1();
            FUNC_7(VAR_4);
            VAR_3 = 0;
        }
        if ((VAR_4 = FUNC_2())) {
            FUNC_0();
            FUNC_7(VAR_4);
            VAR_3 = 0;
        }
        if (FUNC_5()) {
            FUNC_6();
            VAR_3 = 0;
        }
        return VAR_3;
    }
    return 1;
}
