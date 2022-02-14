
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* layer_text; int target_lcd_color; int current_lcd_color; } ;
typedef TYPE_1__ visualizer_state_t ;
typedef int uint8_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

void FUNC_4(visualizer_state_t* VAR_1) {
    VAR_1->layer_text = "Suspending...";
    uint8_t VAR_2 = FUNC_1(VAR_1->current_lcd_color);
    uint8_t VAR_3 = FUNC_2(VAR_1->current_lcd_color);
    VAR_1->target_lcd_color = FUNC_0(VAR_2, VAR_3, 0);
    FUNC_3(&VAR_0);
}
