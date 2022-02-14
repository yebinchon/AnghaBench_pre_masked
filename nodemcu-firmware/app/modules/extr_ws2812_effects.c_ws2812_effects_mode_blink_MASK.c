
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int colorsPerLed; int * values; } ;
typedef TYPE_1__ ws2812_buffer ;
struct TYPE_4__ {int counter_mode_call; TYPE_1__* buffer; } ;


 int FUNC_0 (int *,int ,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2() {
  if(VAR_0->counter_mode_call % 2 == 1) {

    FUNC_1();
  }
  else {

    ws2812_buffer * VAR_1 = VAR_0->buffer;
    FUNC_0(&VAR_1->values[0], 0, VAR_1->size * VAR_1->colorsPerLed);
  }
  return 0;
}
