
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
typedef int uint16_t ;
struct TYPE_4__ {int brightness; TYPE_1__* buffer; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1) {

  ws2812_buffer * VAR_2 = VAR_0->buffer;

  int VAR_3,VAR_4;
  uint8_t * VAR_5 = &VAR_2->values[0];
  for(VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++) {
    uint16_t VAR_6 = (VAR_3 * 360 / VAR_2->size * VAR_1) % 360;
    uint32_t VAR_7 = FUNC_0(VAR_6);
    uint8_t VAR_8 = ((VAR_7 & 0x00FF0000) >> 16) * VAR_0->brightness / 255;
    uint8_t VAR_9 = ((VAR_7 & 0x0000FF00) >> 8) * VAR_0->brightness / 255;
    uint8_t VAR_10 = ((VAR_7 & 0x000000FF) >> 0) * VAR_0->brightness / 255;
    *VAR_5++ = VAR_9;
    *VAR_5++ = VAR_8;
    *VAR_5++ = VAR_10;
    for (VAR_4 = 3; VAR_4 < VAR_2->colorsPerLed; VAR_4++)
    {
      *VAR_5++ = 0;
    }
  }

  return 0;
}
