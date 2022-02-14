
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long uint8_t ;
typedef unsigned long layer_state_t ;
typedef int keypos_t ;
typedef unsigned long int8_t ;
struct TYPE_3__ {scalar_t__ code; } ;
typedef TYPE_1__ action_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_0 (unsigned long,int ) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_2 ;

uint8_t FUNC_2(keypos_t VAR_3) {

    action_t VAR_4;
    VAR_4.code = VAR_0;

    layer_state_t VAR_5 = VAR_2 | VAR_1;

    for (int8_t VAR_6 = sizeof(layer_state_t) * 8 - 1; VAR_6 >= 0; VAR_6--) {
        if (VAR_5 & (1UL << VAR_6)) {
            VAR_4 = FUNC_0(VAR_6, VAR_3);
            if (VAR_4.code != VAR_0) {
                return VAR_6;
            }
        }
    }

    return 0;



}
