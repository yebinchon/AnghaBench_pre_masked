
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(void) {
  VAR_1 = (1<<VAR_3) | (1<<VAR_2) | (1<<VAR_4);

  uint16_t VAR_5 = 0;
  while(!(VAR_1 & (1<<VAR_4)) && VAR_5 < VAR_0)
    VAR_5++;
}
