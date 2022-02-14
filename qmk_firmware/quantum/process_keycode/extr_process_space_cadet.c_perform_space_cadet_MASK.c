
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

void FUNC_10(keyrecord_t *VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7) {
    if (VAR_4->event.pressed) {
        VAR_1 = VAR_5;
        VAR_3 = FUNC_8();



        if (FUNC_0(VAR_5)) {
            FUNC_4(FUNC_1(VAR_5));
        }
    } else {
        if (VAR_1 == VAR_5 && FUNC_7(VAR_3) < VAR_0) {
            if (VAR_5 != VAR_6) {
                if (FUNC_0(VAR_5)) {
                    FUNC_9(FUNC_1(VAR_5));
                }
                if (FUNC_0(VAR_6)) {
                    FUNC_4(FUNC_1(VAR_6));
                }
            }



            FUNC_6(VAR_7);



            if (FUNC_0(VAR_6)) {
                FUNC_9(FUNC_1(VAR_6));
            }
        } else {
            if (FUNC_0(VAR_5)) {
                FUNC_9(FUNC_1(VAR_5));
            }
        }
    }
}
