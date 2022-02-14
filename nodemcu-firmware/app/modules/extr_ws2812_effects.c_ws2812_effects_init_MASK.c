
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buffer_ref; TYPE_2__* buffer; int brightness; int mode_delay; int speed; } ;
typedef TYPE_1__ ws2812_effects ;
struct TYPE_5__ {int colorsPerLed; } ;
typedef TYPE_2__ ws2812_buffer ;
typedef int uint8_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int ,int,char*) ;
 scalar_t__ FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_5) {
  ws2812_buffer * VAR_6 = (ws2812_buffer*)FUNC_3(VAR_5, 1, "ws2812.buffer");
  FUNC_2(VAR_5, VAR_6 != ((void*)0), 1, "no valid buffer provided");

  if (VAR_4 != ((void*)0)) {
    FUNC_5(VAR_5, VAR_2, VAR_4->buffer_ref);
    FUNC_1((void *) VAR_4);
  }

  size_t VAR_7 = sizeof(ws2812_effects) + VAR_6->colorsPerLed*sizeof(uint8_t);
  VAR_4 = (ws2812_effects *) FUNC_0(1,VAR_7);

  VAR_4->speed = VAR_3;
  VAR_4->mode_delay = VAR_1;
  VAR_4->brightness = VAR_0;
  VAR_4->buffer = VAR_6;

  VAR_4->buffer_ref = FUNC_4(VAR_5, VAR_2);

  return 0;
}
