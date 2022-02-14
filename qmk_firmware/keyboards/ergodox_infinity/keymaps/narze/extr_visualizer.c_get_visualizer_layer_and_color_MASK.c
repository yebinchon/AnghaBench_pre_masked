
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int layer; } ;
struct TYPE_5__ {char* layer_text; int target_lcd_color; TYPE_1__ status; } ;
typedef TYPE_2__ visualizer_state_t ;
typedef int uint8_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(visualizer_state_t* VAR_0) {
    uint8_t VAR_1 = 255;

    uint8_t VAR_2 = FUNC_1(VAR_0->status.layer);
    VAR_0->target_lcd_color = FUNC_0(VAR_2 << 2, VAR_1, 0xFF);

    switch(VAR_2) {
        case 133:
            VAR_0->layer_text = "QWERTY";
            break;
        case 139:
            VAR_0->layer_text = "COLEMAK";
            break;
        case 132:
            VAR_0->layer_text = "QWERTY on COLEMAK";
            break;
        case 137:
            VAR_0->layer_text = "LOWER";
            break;
        case 131:
            VAR_0->layer_text = "RAISE";
            break;
        case 134:
            VAR_0->layer_text = "PLOVER";
            break;
        case 129:
            VAR_0->layer_text = "SUPERDUPER";
            break;
        case 130:
            VAR_0->layer_text = "SUPER";
            break;
        case 138:
            VAR_0->layer_text = "DUPER";
            break;
        case 135:
            VAR_0->layer_text = "MOUSE";
            break;
        case 140:
            VAR_0->layer_text = "ADJUST";
            break;
        case 136:
            VAR_0->layer_text = "MDIA";
            break;
        case 128:
            VAR_0->layer_text = "SYMB";
            break;
        default:
            VAR_0->layer_text = "NONE";
            break;
    }
}
