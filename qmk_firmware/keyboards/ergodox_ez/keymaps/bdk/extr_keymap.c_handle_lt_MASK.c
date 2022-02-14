
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct tap_start_info {scalar_t__ initial_press_counter; int timer; } ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 struct tap_start_info* VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(uint16_t VAR_3, keyrecord_t *VAR_4, uint8_t VAR_5, uint8_t VAR_6) {
    struct tap_start_info* VAR_7 = VAR_2 + VAR_6;

    if(VAR_4->event.pressed) {
        FUNC_1(VAR_5);
        VAR_7->timer = FUNC_4();
        VAR_7->initial_press_counter = VAR_1;
    } else {
        FUNC_0(VAR_5);



        if(VAR_1 == VAR_7->initial_press_counter && FUNC_3(VAR_7->timer) < VAR_0) {
            FUNC_2(VAR_3);
            FUNC_5(VAR_3);
        }
    }
    return 0;
}
