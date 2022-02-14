
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t colorsPerLed; int size; int* values; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef int uint8_t ;
struct TYPE_4__ {int brightness; TYPE_1__* buffer; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0(const char *VAR_1, size_t VAR_2) {

  ws2812_buffer * VAR_3 = VAR_0->buffer;

  int VAR_4 = (VAR_2 / VAR_3->colorsPerLed) - 1;
  int VAR_5 = VAR_3->size / VAR_4;

  uint8_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
  int VAR_12,VAR_13,VAR_14;

  VAR_9 = *VAR_1++;
  VAR_10 = *VAR_1++;
  VAR_11 = *VAR_1++;

  for (VAR_13 = 3; VAR_13 < VAR_3->colorsPerLed; VAR_13++)
  {
    *VAR_1++;
  }


  uint8_t * VAR_15 = &VAR_3->values[0];
  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
    VAR_6 = VAR_9;
    VAR_7 = VAR_10;
    VAR_8 = VAR_11;

    VAR_9 = *VAR_1++;
    VAR_10 = *VAR_1++;
    VAR_11 = *VAR_1++;

    for (VAR_13 = 3; VAR_13 < VAR_3->colorsPerLed; VAR_13++) {
      *VAR_1++;
    }


    int VAR_16 = VAR_5;

    if (VAR_14 == VAR_4 - 1) {
      VAR_16 = VAR_3->size - (VAR_5 * (VAR_4 - 1));
    }

    int VAR_17 = VAR_16 - 1;

    for(VAR_12 = 0; VAR_12 < VAR_16; VAR_12++) {
      *VAR_15++ = (VAR_6 + ((VAR_9-VAR_6) * VAR_12 / VAR_17)) * VAR_0->brightness / 255;
      *VAR_15++ = (VAR_7 + ((VAR_10-VAR_7) * VAR_12 / VAR_17)) * VAR_0->brightness / 255;
      *VAR_15++ = (VAR_8 + ((VAR_11-VAR_8) * VAR_12 / VAR_17)) * VAR_0->brightness / 255;
      for (VAR_13 = 3; VAR_13 < VAR_3->colorsPerLed; VAR_13++)
      {
        *VAR_15++ = 0;
      }
    }
  }

  return 0;
}
