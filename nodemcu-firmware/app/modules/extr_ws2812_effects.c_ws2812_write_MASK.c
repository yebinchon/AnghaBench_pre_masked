
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* values; size_t colorsPerLed; size_t size; } ;
typedef TYPE_1__ ws2812_buffer ;


 int FUNC_0 (char const*,size_t,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(ws2812_buffer* VAR_0) {
  size_t VAR_1, VAR_2;
  const char *VAR_3, *VAR_4;

  VAR_3 = 0;
  VAR_1 = 0;

  VAR_3 = VAR_0->values;
  VAR_1 = VAR_0->colorsPerLed*VAR_0->size;

  VAR_4 = 0;
  VAR_2 = 0;


  FUNC_0(VAR_3, VAR_1, VAR_4, VAR_2);

  return 0;
}
