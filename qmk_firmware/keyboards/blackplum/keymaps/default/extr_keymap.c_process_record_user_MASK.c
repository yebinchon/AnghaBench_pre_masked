
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_7__ {int no_gui; } ;



 TYPE_4__ VAR_0 ;

bool FUNC_0(uint16_t VAR_1, keyrecord_t *VAR_2) {
    if(VAR_2->event.pressed) {
        switch(VAR_1) {
            case 128:
                VAR_0.no_gui ^= 1;
                return 0;
        }
    }
    return 1;
}
