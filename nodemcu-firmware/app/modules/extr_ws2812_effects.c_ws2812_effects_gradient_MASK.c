
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t colorsPerLed; int size; int* values; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int brightness; TYPE_1__* buffer; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, size_t VAR_2) {

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

  uint16_t VAR_16,VAR_17;
  uint8_t VAR_18,VAR_19,VAR_20,VAR_21,VAR_22,VAR_23;

  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
    VAR_6 = VAR_9;
    VAR_7 = VAR_10;
    VAR_8 = VAR_11;
    uint32_t VAR_24 = FUNC_0(VAR_6, VAR_7, VAR_8);
    VAR_16 = (VAR_24 & 0xFFFF0000) >> 16;
    VAR_20 = (VAR_24 & 0x0000FF00) >> 8;
    VAR_21 = (VAR_24 & 0x000000FF);

    VAR_9 = *VAR_1++;
    VAR_10 = *VAR_1++;
    VAR_11 = *VAR_1++;
    for (VAR_13 = 3; VAR_13 < VAR_3->colorsPerLed; VAR_13++)
    {
      *VAR_1++;
    }

    uint32_t VAR_25 = FUNC_0(VAR_9, VAR_10, VAR_11);
    VAR_17 = (VAR_25 & 0xFFFF0000) >> 16;
    VAR_22 = (VAR_24 & 0x0000FF00) >> 8;
    VAR_23 = (VAR_24 & 0x000000FF);


    int VAR_26 = VAR_16 > VAR_17 ? VAR_16 - VAR_17 : 360 + VAR_16 - VAR_17;
    int VAR_27 = VAR_16 > VAR_17 ? 360 + VAR_17 - VAR_16 : VAR_17 - VAR_16;


    int VAR_28 = VAR_5;

    if (VAR_14 == VAR_4 - 1) {
      VAR_28 = VAR_3->size - (VAR_5 * (VAR_4 - 1));
    }

    int VAR_29 = VAR_28 - 1;

    for(VAR_12 = 0; VAR_12 < VAR_28; VAR_12++) {


      int VAR_30 = VAR_26 > VAR_27 ? VAR_16 + ((VAR_27 * VAR_12 / VAR_29) % 360) : VAR_16 - (VAR_26 * VAR_12 / VAR_29);
      if (VAR_30 < 0) VAR_30 = VAR_30 + 360;
      if (VAR_30 > 359) VAR_30 = VAR_30 - 360;
      VAR_18 = VAR_20 + ((VAR_22-VAR_20) * VAR_12 / VAR_29);
      VAR_19 = VAR_21 + ((VAR_23-VAR_21) * VAR_12 / VAR_29);

      uint32_t VAR_31 = FUNC_1(VAR_30, VAR_18, VAR_19);

      *VAR_15++ = ((VAR_31 & 0x00FF0000) >> 16) * VAR_0->brightness / 255;
      *VAR_15++ = ((VAR_31 & 0x0000FF00) >> 8) * VAR_0->brightness / 255;
      *VAR_15++ = (VAR_31 & 0x000000FF) * VAR_0->brightness / 255;

      for (VAR_13 = 3; VAR_13 < VAR_3->colorsPerLed; VAR_13++) {
        *VAR_15++ = 0;
      }
    }
  }

  return 0;
}
