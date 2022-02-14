
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_7 ;

bool FUNC_1(uint16_t VAR_8, keyrecord_t *VAR_9) {
    switch (VAR_8) {
        case 132: {
            FUNC_0(VAR_9, VAR_2);
            return 0;
        }
        case 129: {
            FUNC_0(VAR_9, VAR_5);
            return 0;
        }
        case 133: {
            FUNC_0(VAR_9, VAR_1);
            return 0;
        }
        case 130: {
            FUNC_0(VAR_9, VAR_4);
            return 0;
        }
        case 134: {
            FUNC_0(VAR_9, VAR_0);
            return 0;
        }
        case 131: {
            FUNC_0(VAR_9, VAR_3);
            return 0;
        }
        case 128: {
            FUNC_0(VAR_9, VAR_6);
            return 0;
        }
        default: {
            if (VAR_9->event.pressed) {
                VAR_7 = 0;
            }
            break;
        }
    }
    return 1;
}
