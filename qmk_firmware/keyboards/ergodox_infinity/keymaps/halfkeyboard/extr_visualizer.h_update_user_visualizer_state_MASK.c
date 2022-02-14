
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ target_lcd_color; char* layer_text; } ;
typedef TYPE_1__ visualizer_state_t ;
typedef int visualizer_keyboard_status_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

void FUNC_2(visualizer_state_t* VAR_3, visualizer_keyboard_status_t* VAR_4) {
    uint32_t VAR_5 = VAR_3->target_lcd_color;
    const char* VAR_6 = VAR_3->layer_text;

    FUNC_0(VAR_3);

    if (VAR_1 || VAR_5 != VAR_3->target_lcd_color) {
        FUNC_1(&VAR_0);
    }

    if (VAR_1 || VAR_6 != VAR_3->layer_text) {
        FUNC_1(&VAR_2);
    }




}
