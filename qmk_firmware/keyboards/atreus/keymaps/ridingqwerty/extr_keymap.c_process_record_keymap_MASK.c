
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

bool FUNC_8(uint16_t VAR_5, keyrecord_t *VAR_6) {
    switch(VAR_5) {
        case 128:
            if (VAR_6->event.pressed) {
                VAR_4 = FUNC_6();
                FUNC_2(VAR_3);
                FUNC_3(FUNC_0(VAR_1));
            } else {
                FUNC_7(FUNC_0(VAR_1));
                FUNC_1(VAR_3);
                if (FUNC_5(VAR_4) < VAR_2) {
                    FUNC_4(VAR_0);
                }
            }
            return 0; break;
    }
    return 1;
}
