
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* values; int size; int colorsPerLed; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef int uint8_t ;
struct TYPE_4__ {int* color; int brightness; TYPE_1__* buffer; } ;


 int FUNC_0 () ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1(uint8_t VAR_1) {

  ws2812_buffer * VAR_2 = VAR_0->buffer;

  uint8_t VAR_3 = VAR_0->color[0];
  uint8_t VAR_4 = VAR_0->color[1];
  uint8_t VAR_5 = VAR_0->color[2];


  int VAR_6,VAR_7;
  uint8_t * VAR_8 = &VAR_2->values[0];
  for(VAR_6 = 0; VAR_6 < VAR_2->size; VAR_6++) {
    int VAR_9 = FUNC_0() % (VAR_1 > 0 ? VAR_1 : 1);
    int VAR_10 = VAR_4-VAR_9;
    int VAR_11 = VAR_3-VAR_9;
    int VAR_12 = VAR_5-VAR_9;
    if(VAR_11<0) VAR_11=0;
    if(VAR_10<0) VAR_10=0;
    if(VAR_12<0) VAR_12=0;
    *VAR_8++ = VAR_11 * VAR_0->brightness / 255;
    *VAR_8++ = VAR_10 * VAR_0->brightness / 255;
    *VAR_8++ = VAR_12 * VAR_0->brightness / 255;
    for (VAR_7 = 3; VAR_7 < VAR_2->colorsPerLed; VAR_7++) {
      *VAR_8++ = 0;
    }
  }

  return 0;
}
