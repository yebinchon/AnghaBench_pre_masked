
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int colorsPerLed; int* values; } ;
typedef TYPE_1__ ws2812_buffer ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int* color; int counter_mode_step; TYPE_1__* buffer; } ;


 int FUNC_0 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(uint8_t VAR_1) {

  ws2812_buffer * VAR_2 = VAR_0->buffer;


  for(int VAR_3=0; VAR_3 < VAR_2->size * VAR_2->colorsPerLed; VAR_3++) {
    VAR_2->values[VAR_3] = VAR_2->values[VAR_3] >> 1;
  }

  for(int VAR_4=0; VAR_4 < VAR_1; VAR_4++) {

    int VAR_5 = FUNC_0() % VAR_2->size;

    uint32_t VAR_6 = (VAR_0->color[0] << 16) | (VAR_0->color[1] << 8) | VAR_0->color[2];
    if (VAR_2->colorsPerLed == 4) {
      VAR_6 = VAR_6 | (VAR_0->color[3] << 24);
    }
    FUNC_1(VAR_5, VAR_6);
  }

  VAR_0->counter_mode_step = (VAR_0->counter_mode_step + 1) % ((VAR_2->size * 2) - 2);
}
