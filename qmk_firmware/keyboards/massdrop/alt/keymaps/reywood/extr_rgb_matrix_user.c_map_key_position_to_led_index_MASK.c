
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t** VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static uint8_t FUNC_0(uint8_t VAR_3, uint8_t VAR_4) {
  if (VAR_4 >= 0 && VAR_4 < VAR_2 && VAR_3 >= 0 && VAR_3 < VAR_1) {
    return VAR_0[VAR_4][VAR_3];
  }
  return -1;
}
