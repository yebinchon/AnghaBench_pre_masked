
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



 void* FUNC_0 (int,int,int) ;





 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(visualizer_state_t *VAR_0) {
  uint8_t VAR_1 = FUNC_1(VAR_0->status.layer);


  switch (VAR_1) {

    case 133:

      VAR_0->layer_text = "FUNCTION KEYS";
      VAR_0->target_lcd_color = FUNC_0(228, 73, 245);
      break;
    case 128:

      VAR_0->layer_text = "QWERTY";
      VAR_0->target_lcd_color = FUNC_0(17, 102, 245);
      break;
    case 129:

      VAR_0->layer_text = "NEO: 6";
      VAR_0->target_lcd_color = FUNC_0(35, 102, 245);
      break;
    case 130:

      VAR_0->layer_text = "NEO: 5";
      VAR_0->target_lcd_color = FUNC_0(63, 102, 245);
      break;
    case 131:

      VAR_0->layer_text = "NEO: 4";
      VAR_0->target_lcd_color = FUNC_0(112, 101, 189);
      break;
    case 132:

      VAR_0->layer_text = "NEO: 3";
      VAR_0->target_lcd_color = FUNC_0(143, 102, 245);
      break;
    default:

      VAR_0->layer_text = "NEO: 1";
      VAR_0->target_lcd_color = FUNC_0(0, 0, 255);
      break;
  }
}
