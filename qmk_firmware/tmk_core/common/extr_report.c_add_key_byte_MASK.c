
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__* keys; } ;
typedef TYPE_1__ report_keyboard_t ;
typedef size_t int8_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t,scalar_t__) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

void FUNC_2(report_keyboard_t* VAR_4, uint8_t VAR_5) {
    int8_t VAR_6 = 0;
    int8_t VAR_7 = -1;
    for (; VAR_6 < VAR_0; VAR_6++) {
        if (VAR_4->keys[VAR_6] == VAR_5) {
            break;
        }
        if (VAR_7 == -1 && VAR_4->keys[VAR_6] == 0) {
            VAR_7 = VAR_6;
        }
    }
    if (VAR_6 == VAR_0) {
        if (VAR_7 != -1) {
            VAR_4->keys[VAR_7] = VAR_5;
        }
    }

}
