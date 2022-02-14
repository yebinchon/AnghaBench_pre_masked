
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
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(visualizer_state_t* VAR_1) {
  switch(FUNC_1(VAR_0)) {
    case 130:
      VAR_1->layer_text = "QWERTY";
      VAR_1->target_lcd_color = FUNC_0(0, 255, 128);
      break;
    case 128:
      VAR_1->layer_text = "Workman";
      VAR_1->target_lcd_color = FUNC_0(80, 255, 128);
      break;
    case 135:
      VAR_1->layer_text = "Dvorak";
      VAR_1->target_lcd_color = FUNC_0(194, 255, 128);
      break;
    case 136:
      VAR_1->layer_text = "Colemak";
      VAR_1->target_lcd_color = FUNC_0(18, 255, 128);
      break;
  }

  switch(FUNC_1(VAR_1->status.layer)) {
    case 133:
      VAR_1->layer_text = "Lower";
      VAR_1->target_lcd_color = FUNC_0(141, 255, 255);
      break;
    case 129:
      VAR_1->layer_text = "Raise";
      VAR_1->target_lcd_color = FUNC_0(18, 255, 255);
      break;
    case 137:
      VAR_1->layer_text = "Adjust";
      VAR_1->target_lcd_color = FUNC_0(194, 255, 255);
      break;
    case 131:
      VAR_1->layer_text = "Numpad";
      VAR_1->target_lcd_color = FUNC_0(80, 255, 255);
      break;
    case 132:
      VAR_1->layer_text = "Mouse";
      VAR_1->target_lcd_color = FUNC_0(300, 255, 255);
      break;
    case 134:
      VAR_1->layer_text = "Game";
      VAR_1->target_lcd_color = FUNC_0(300, 255, 255);
      break;
    case 130: case 128: case 135: case 136:
      break;
    default:
      VAR_1->layer_text = "NONE";
      VAR_1->target_lcd_color = FUNC_0(0, 255, 255);
      break;
  }
}
