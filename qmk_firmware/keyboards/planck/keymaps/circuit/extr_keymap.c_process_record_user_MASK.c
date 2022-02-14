
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




 int FUNC_0 (int ) ;

 int FUNC_1 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;

bool FUNC_5(uint16_t VAR_6, keyrecord_t *VAR_7) {
    switch (VAR_6) {
        case 128:
            if (VAR_7->event.pressed) {
                if (FUNC_0(VAR_1)) {



                    FUNC_2(VAR_1);
                }
            }
            return 0;
            break;
        case 130:
            if (VAR_7->event.pressed) {
                if (!FUNC_0(VAR_1)) {



                    FUNC_3(VAR_1);
                }
            }
            return 0;
            break;
        case 129:
            if (VAR_7->event.pressed) {
                FUNC_3(VAR_3);
                FUNC_4(VAR_3, VAR_0, VAR_2);
            } else {
                FUNC_2(VAR_3);
                FUNC_4(VAR_3, VAR_0, VAR_2);
            }
            return 0;
            break;
        case 131:
            if (VAR_7->event.pressed) {
                FUNC_3(VAR_0);
                FUNC_4(VAR_3, VAR_0, VAR_2);
            } else {
                FUNC_2(VAR_0);
                FUNC_4(VAR_3, VAR_0, VAR_2);
            }
            return 0;
            break;
    }
    return 1;
}
