
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t** VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static uint8_t FUNC_0(uint8_t VAR_4, uint8_t VAR_5) {
  if (VAR_4 < 0 || VAR_4 >= VAR_2 || VAR_5 < 0 || VAR_5 >= VAR_1) {
    return 0;
  }
  uint8_t VAR_6 = VAR_0[VAR_4][VAR_5];
  if (VAR_6 < 0) {
    return 0;
  }
  return VAR_3[VAR_6];
}
