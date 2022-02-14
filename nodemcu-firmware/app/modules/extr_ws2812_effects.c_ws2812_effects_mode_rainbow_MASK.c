
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* values; int size; int colorsPerLed; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int counter_mode_step; int brightness; TYPE_1__* buffer; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1() {

  ws2812_buffer * VAR_1 = VAR_0->buffer;

  uint32_t VAR_2 = FUNC_0(VAR_0->counter_mode_step);
  uint8_t VAR_3 = (VAR_2 & 0x00FF0000) >> 16;
  uint8_t VAR_4 = (VAR_2 & 0x0000FF00) >> 8;
  uint8_t VAR_5 = (VAR_2 & 0x000000FF) >> 0;


  int VAR_6,VAR_7;
  uint8_t * VAR_8 = &VAR_1->values[0];
  for(VAR_6 = 0; VAR_6 < VAR_1->size; VAR_6++) {
    *VAR_8++ = VAR_4 * VAR_0->brightness / 255;
    *VAR_8++ = VAR_3 * VAR_0->brightness / 255;
    *VAR_8++ = VAR_5 * VAR_0->brightness / 255;
    for (VAR_7 = 3; VAR_7 < VAR_1->colorsPerLed; VAR_7++)
    {
      *VAR_8++ = 0;
    }
  }

  VAR_0->counter_mode_step = (VAR_0->counter_mode_step + 1) % 360;
  return 0;
}
