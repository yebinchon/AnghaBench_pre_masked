
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int colorsPerLed; int* values; int size; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int brightness; TYPE_1__* buffer; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0(uint32_t VAR_1) {

  ws2812_buffer * VAR_2 = VAR_0->buffer;

  uint8_t VAR_3 = ((VAR_1 & 0x00FF0000) >> 16);
  uint8_t VAR_4 = ((VAR_1 & 0x0000FF00) >> 8);
  uint8_t VAR_5 = (VAR_1 & 0x000000FF);
  uint8_t VAR_6 = VAR_2->colorsPerLed == 4 ? ((VAR_1 & 0xFF000000) >> 24) : 0;


  int VAR_7;
  uint8_t * VAR_8 = &VAR_2->values[0];
  for(VAR_7 = 0; VAR_7 < VAR_2->size; VAR_7++) {
    *VAR_8++ = VAR_3 * VAR_0->brightness / 255;
    *VAR_8++ = VAR_4 * VAR_0->brightness / 255;
    *VAR_8++ = VAR_5 * VAR_0->brightness / 255;
    if (VAR_2->colorsPerLed == 4) {
      *VAR_8++ = VAR_6 * VAR_0->brightness / 255;
    }
  }

  return 0;
}
