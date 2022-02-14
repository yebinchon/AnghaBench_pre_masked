
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

bool FUNC_1(uint16_t VAR_3, keyrecord_t *VAR_4) {
    if (VAR_4->event.pressed) {
        switch (VAR_3) {
            case 128:
                FUNC_0(VAR_2);
                return 0;
            case 130:
                FUNC_0(VAR_0);
                return 0;
            case 129:
                FUNC_0(VAR_1);
                return 0;
        }
    }
    return 1;
}
