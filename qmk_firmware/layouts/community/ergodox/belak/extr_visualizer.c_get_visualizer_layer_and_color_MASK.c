
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int leds; int layer; } ;
struct TYPE_5__ {char* layer_text; void* target_lcd_color; TYPE_1__ status; } ;
typedef TYPE_2__ visualizer_state_t ;
typedef int uint8_t ;


 void* FUNC_0 (int,int,int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_1(visualizer_state_t* VAR_1) {
    uint8_t VAR_2 = 60;
    if (VAR_1->status.leds & (1u << VAR_0)) {
        VAR_2 = 255;
    }

    if (VAR_1->status.layer & 0x4) {
        VAR_1->target_lcd_color = FUNC_0(0, VAR_2, 0xFF);
        VAR_1->layer_text = "Media";
    }
    else if (VAR_1->status.layer & 0x2) {
        VAR_1->target_lcd_color = FUNC_0(168, VAR_2, 0xFF);
        VAR_1->layer_text = "Symbols";
    }
    else {
        VAR_1->target_lcd_color = FUNC_0(84, VAR_2, 0xFF);
        VAR_1->layer_text = "Base";
    }
}
