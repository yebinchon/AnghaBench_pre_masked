
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef float uint8_t ;
struct TYPE_4__ {float r; float g; float b; } ;
typedef TYPE_1__ LED_TYPE ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_2(uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5) {
  float VAR_6 = ((float)FUNC_0())/256;
  if(VAR_6 == 0) VAR_6 = 0.05;
  LED_TYPE *VAR_7 = VAR_2 ? VAR_1 : VAR_0;
  VAR_7[0].r = (uint8_t)(VAR_3*VAR_6);
  VAR_7[0].g = (uint8_t)(VAR_4*VAR_6);
  VAR_7[0].b = (uint8_t)(VAR_5*VAR_6);
  FUNC_1();
}
