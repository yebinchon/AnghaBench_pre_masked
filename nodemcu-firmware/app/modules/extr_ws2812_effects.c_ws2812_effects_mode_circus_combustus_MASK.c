
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int colorsPerLed; int * values; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef int uint8_t ;
struct TYPE_4__ {int brightness; TYPE_1__* buffer; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0() {
  ws2812_buffer * VAR_1 = VAR_0->buffer;

  int VAR_2 = 0 * VAR_0->brightness / 255;
  int VAR_3 = 255 * VAR_0->brightness / 255;
  int VAR_4 = 0 * VAR_0->brightness / 255;

  int VAR_5 = 255 * VAR_0->brightness / 255;
  int VAR_6 = 255 * VAR_0->brightness / 255;
  int VAR_7 = 255 * VAR_0->brightness / 255;


  int VAR_8,VAR_9;
  uint8_t * VAR_10 = &VAR_1->values[0];
  for(VAR_8 = 0; VAR_8 < VAR_1->size; VAR_8++) {
    if (VAR_8 % 6 < 2) {
      *VAR_10++ = VAR_2;
      *VAR_10++ = VAR_3;
      *VAR_10++ = VAR_4;
    }
    else if (VAR_8 % 6 < 4) {
      *VAR_10++ = VAR_5;
      *VAR_10++ = VAR_6;
      *VAR_10++ = VAR_7;
    }
    else {
      *VAR_10++ = 0;
      *VAR_10++ = 0;
      *VAR_10++ = 0;
    }
    for (VAR_9 = 3; VAR_9 < VAR_1->colorsPerLed; VAR_9++)
    {
      *VAR_10++ = 0;
    }
  }

  return 0;
}
