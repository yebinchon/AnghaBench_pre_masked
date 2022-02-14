
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int layer; } ;
struct TYPE_5__ {char* layer_text; void* target_lcd_color; TYPE_1__ status; } ;
typedef TYPE_2__ visualizer_state_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_3(visualizer_state_t* VAR_12) {
    uint8_t VAR_13 = 255;




    if (VAR_12->status.layer & 0x400) {
        VAR_12->target_lcd_color = FUNC_0(VAR_4, VAR_13, 0xFF);
        VAR_12->layer_text = "STENOGRAPHY";
    }
    else if (VAR_12->status.layer & 0x200) {
        VAR_12->target_lcd_color = FUNC_0(VAR_2, VAR_13, 0xFF);
        VAR_12->layer_text = "FUNCTION";
    }
    else if (VAR_12->status.layer & 0x100) {
        VAR_12->target_lcd_color = FUNC_0(VAR_3, VAR_13, 0xFF);
        VAR_12->layer_text = "Shortcuts Layer";
        FUNC_2(&VAR_11);
        FUNC_1(&VAR_10);
    }
    else if (VAR_12->status.layer & 0x80) {
        VAR_12->target_lcd_color = FUNC_0(VAR_8, VAR_13, 0xFF);
        VAR_12->layer_text = "Plover";
    }
    else if (VAR_12->status.layer & 0x40) {
        VAR_12->target_lcd_color = FUNC_0(VAR_6, VAR_13, 0xFF);
        VAR_12->layer_text = "Mirrored Symbols";
    }
    else if (VAR_12->status.layer & 0x20) {
        VAR_12->target_lcd_color = FUNC_0(VAR_7, VAR_13, 0xFF);
        VAR_12->layer_text = "Symbols";
    }
    else if (VAR_12->status.layer & 0x8) {
        VAR_12->target_lcd_color = FUNC_0(VAR_4, VAR_13, 0xFF);
        VAR_12->layer_text = "Mirrored Dvorak";
    }
    else if (VAR_12->status.layer & 0x4) {
        VAR_12->target_lcd_color = FUNC_0(VAR_0, VAR_13, 0xFF);
        VAR_12->layer_text = "Dvorak";
        FUNC_2(&VAR_10);
        FUNC_1(&VAR_11);
    }
    else if (VAR_12->status.layer & 0x2) {
        VAR_12->target_lcd_color = FUNC_0(VAR_5, VAR_13, 0xFF);
        VAR_12->layer_text = "Mirrored Qwerty";
    }
    else {
        VAR_12->target_lcd_color = FUNC_0(VAR_9, VAR_13, 0xFF);
        VAR_12->layer_text = "Qwerty";
        FUNC_2(&VAR_10);
        FUNC_1(&VAR_1);
    }
}
