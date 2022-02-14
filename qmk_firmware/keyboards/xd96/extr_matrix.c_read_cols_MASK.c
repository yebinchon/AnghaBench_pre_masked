
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static uint32_t FUNC_1(void) {
  uint32_t VAR_4 = FUNC_0(VAR_1, VAR_2);
  uint32_t VAR_5 = FUNC_0(VAR_1, VAR_3);
  uint32_t VAR_6 = FUNC_0(VAR_0, VAR_3);



  uint32_t VAR_7 = (((VAR_6 & 0b00001111) << 14) | ((VAR_5 & 0b00111111) << 8) | VAR_4);
  return (~VAR_7) & 0b111111111111111111;
}
