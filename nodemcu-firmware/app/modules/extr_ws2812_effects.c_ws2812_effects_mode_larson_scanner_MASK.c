
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int colorsPerLed; int* values; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef int uint16_t ;
struct TYPE_4__ {int counter_mode_step; int* color; TYPE_1__* buffer; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0() {

  ws2812_buffer * VAR_1 = VAR_0->buffer;
  int VAR_2 = 0;

  for(int VAR_3=0; VAR_3 < VAR_1->size * VAR_1->colorsPerLed; VAR_3++) {
    VAR_1->values[VAR_3] = VAR_1->values[VAR_3] >> 1;
  }

  uint16_t VAR_4 = 0;

  if(VAR_0->counter_mode_step < VAR_1->size) {
    VAR_4 = VAR_0->counter_mode_step;
  } else {
    VAR_4 = (VAR_1->size * 2) - VAR_0->counter_mode_step - 2;
  }
  VAR_4 = VAR_4 * VAR_1->colorsPerLed;
  VAR_1->values[VAR_4 + 1] = VAR_0->color[1];
  VAR_1->values[VAR_4] = VAR_0->color[0];
  VAR_1->values[VAR_4 + 2] = VAR_0->color[2];

  VAR_0->counter_mode_step = (VAR_0->counter_mode_step + 1) % ((VAR_1->size * 2) - 2);
}
