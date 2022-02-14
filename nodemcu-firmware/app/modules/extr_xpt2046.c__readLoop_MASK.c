
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int,int,scalar_t__) ;

__attribute__((used)) static uint16_t FUNC_1(uint8_t VAR_0, uint8_t VAR_1) {
  uint16_t VAR_2 = 0xffff, VAR_3 = 0xffff;
  uint8_t VAR_4 = 0;
  do {
    VAR_2 = VAR_3;
    VAR_3 = FUNC_0(1, 8 , 0);
    VAR_3 = (VAR_3 << 4) | (FUNC_0(1, 8 , VAR_0) >> 4);
  } while ((VAR_2 != VAR_3) && (++VAR_4 < VAR_1));
  return VAR_3;
}
