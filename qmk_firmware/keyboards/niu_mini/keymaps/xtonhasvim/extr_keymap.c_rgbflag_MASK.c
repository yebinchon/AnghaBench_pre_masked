
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_4__ {void* b; void* g; void* r; } ;
typedef TYPE_1__ LED_TYPE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1(uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7, uint8_t VAR_8, uint8_t VAR_9) {
  LED_TYPE *VAR_10 = VAR_3 ? VAR_2 : VAR_1;
  for (int VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
    switch (VAR_11) {
    case 12: case 13:
      VAR_10[VAR_11].r = VAR_4;
      VAR_10[VAR_11].g = VAR_5;
      VAR_10[VAR_11].b = VAR_6;
      break;
    case 8: case 9:
      VAR_10[VAR_11].r = VAR_7;
      VAR_10[VAR_11].g = VAR_8;
      VAR_10[VAR_11].b = VAR_9;
      break;
    default:
      VAR_10[VAR_11].r = 0;
      VAR_10[VAR_11].g = 0;
      VAR_10[VAR_11].b = 0;
      break;
    }
  }
  FUNC_0();
}
