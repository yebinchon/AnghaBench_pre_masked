
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int colorsPerLed; void** values; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* buffer; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, uint32_t VAR_2) {
  ws2812_buffer * VAR_3 = VAR_0->buffer;
  uint8_t VAR_4 = ((VAR_2 & 0x00FF0000) >> 16);
  uint8_t VAR_5 = ((VAR_2 & 0x0000FF00) >> 8);
  uint8_t VAR_6 = (VAR_2 & 0x000000FF);
  uint8_t VAR_7 = VAR_3->colorsPerLed == 4 ? ((VAR_2 & 0xFF000000) >> 24) : 0;

  int VAR_8 = VAR_1 * VAR_3->colorsPerLed;
  VAR_3->values[VAR_8] = VAR_4;
  VAR_3->values[VAR_8+1] = VAR_5;
  VAR_3->values[VAR_8+2] = VAR_6;
  if (VAR_3->colorsPerLed == 4) {
    VAR_3->values[VAR_8+3] = VAR_7;
  }

  return 0;
}
