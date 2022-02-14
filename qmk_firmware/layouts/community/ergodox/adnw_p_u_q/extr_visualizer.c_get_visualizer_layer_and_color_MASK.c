
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int layer; } ;
struct TYPE_5__ {char* layer_text; void* target_lcd_color; TYPE_1__ status; } ;
typedef TYPE_2__ visualizer_state_t ;


 void* FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1(visualizer_state_t* VAR_0) {

    if (VAR_0->status.layer & 0x20) {
        VAR_0->target_lcd_color = FUNC_0(127, 0xFF, 0xFF);
        VAR_0->layer_text = "Mouse";
    } else if (VAR_0->status.layer & 0x10) {
        VAR_0->target_lcd_color = FUNC_0(85, 0xFF, 0xFF);
        VAR_0->layer_text = "Symbol";
    } else if (VAR_0->status.layer & 0x8) {
        VAR_0->target_lcd_color = FUNC_0(64, 0xFF, 0xFF);
        VAR_0->layer_text = "Brackets";
    } else if (VAR_0->status.layer & 0x4) {
        VAR_0->target_lcd_color = FUNC_0(42, 0xFF, 0xFF);
        VAR_0->layer_text = "Diak";
    } else if (VAR_0->status.layer & 0x2) {
        VAR_0->target_lcd_color = FUNC_0(21, 0xFF, 0xFF);
        VAR_0->layer_text = "Terminal";
    } else {
        VAR_0->target_lcd_color = FUNC_0(192, 0xFF, 0xFF);
        VAR_0->layer_text = "Vim";
    }
}
