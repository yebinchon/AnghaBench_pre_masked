
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** values; int size; int colorsPerLed; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int brightness; int mode_color_index; TYPE_1__* buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_2() {
  VAR_0->mode_color_index = FUNC_1(VAR_0->mode_color_index);
  ws2812_buffer * VAR_1 = VAR_0->buffer;

  uint32_t VAR_2 = FUNC_0(VAR_0->mode_color_index);
  uint8_t VAR_3 = ((VAR_2 & 0x00FF0000) >> 16) * VAR_0->brightness / 255;
  uint8_t VAR_4 = ((VAR_2 & 0x0000FF00) >> 8) * VAR_0->brightness / 255;
  uint8_t VAR_5 = ((VAR_2 & 0x000000FF) >> 0) * VAR_0->brightness / 255;


  int VAR_6,VAR_7;
  uint8_t * VAR_8 = &VAR_1->values[0];
  for(VAR_6 = 0; VAR_6 < VAR_1->size; VAR_6++) {
    *VAR_8++ = VAR_4;
    *VAR_8++ = VAR_3;
    *VAR_8++ = VAR_5;
    for (VAR_7 = 3; VAR_7 < VAR_1->colorsPerLed; VAR_7++)
    {
      *VAR_8++ = 0;
    }
  }
}
