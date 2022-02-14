
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int const* VAR_0 ;

 int VAR_1 ;

const macro_t *FUNC_0(keyrecord_t *VAR_2, uint8_t VAR_3, uint8_t VAR_4) {
    if (!VAR_2->event.pressed) {
        return VAR_0;
    }

    switch(VAR_3) {
        case 128:
            VAR_1 = (VAR_1 + 1) % 2;
            break;


        default:
            break;
    }
    return VAR_0;
}
