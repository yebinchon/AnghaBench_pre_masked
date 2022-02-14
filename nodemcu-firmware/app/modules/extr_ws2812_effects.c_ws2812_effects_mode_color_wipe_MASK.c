
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int colorsPerLed; void** values; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef void* uint8_t ;
struct TYPE_4__ {int counter_mode_step; int* color; int brightness; TYPE_1__* buffer; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0() {

  ws2812_buffer * VAR_1 = VAR_0->buffer;

  int VAR_2 = (VAR_0->counter_mode_step % VAR_1->size) * VAR_1->colorsPerLed;

  if (VAR_0->counter_mode_step >= VAR_1->size)
  {
    VAR_1->values[VAR_2] = 0;
    VAR_1->values[VAR_2 + 1] = 0;
    VAR_1->values[VAR_2 + 2] = 0;
  }
  else
  {
    uint8_t VAR_3 = VAR_0->color[1] * VAR_0->brightness / 255;
    uint8_t VAR_4 = VAR_0->color[0] * VAR_0->brightness / 255;
    uint8_t VAR_5 = VAR_0->color[2] * VAR_0->brightness / 255;
    VAR_1->values[VAR_2] = VAR_4;
    VAR_1->values[VAR_2 + 1] = VAR_3;
    VAR_1->values[VAR_2 + 2] = VAR_5;
  }
  VAR_0->counter_mode_step = (VAR_0->counter_mode_step + 1) % (VAR_1->size * 2);
}
