
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
    if (VAR_1->status.layer & 0x80) {
        VAR_1->target_lcd_color = FUNC_0(0, 255, 60);
        VAR_1->layer_text = "Game Arrow";
    } else if (VAR_1->status.layer & 0x40) {
        VAR_1->target_lcd_color = FUNC_0(0, 255, 60);
        VAR_1->layer_text = "Game";
    } else if (VAR_1->status.layer & 0x20) {
        VAR_1->target_lcd_color = FUNC_0(140, 100, 60);
        VAR_1->layer_text = "Movement";
    } else if (VAR_1->status.layer & 0x10) {
        VAR_1->target_lcd_color = FUNC_0(0, VAR_2, 0xFF);
        VAR_1->layer_text = "Media";
    } else if (VAR_1->status.layer & 0x8) {
        VAR_1->target_lcd_color = FUNC_0(168, VAR_2, 0xFF);
        VAR_1->layer_text = "Symbol";
    } else if (VAR_1->status.layer & 0x2 || VAR_1->status.layer & 0x4) {
        VAR_1->target_lcd_color = FUNC_0(216, 90, 0xFF);
        VAR_1->layer_text = "Code";
    } else {
        VAR_1->target_lcd_color = FUNC_0(84, VAR_2, 0xFF);
        VAR_1->layer_text = "Default";
    }
}
