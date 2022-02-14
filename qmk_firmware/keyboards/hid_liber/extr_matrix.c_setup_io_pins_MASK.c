
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;

__attribute__((used)) static
void FUNC_0(void) {
  uint8_t VAR_6;
  VAR_0 |= 0x0E;
  VAR_2 &= ~0x0E;
  for(VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    *VAR_4[VAR_6] &= ~VAR_3[VAR_6];
    *VAR_5[VAR_6] &= ~VAR_3[VAR_6];
  }
}
