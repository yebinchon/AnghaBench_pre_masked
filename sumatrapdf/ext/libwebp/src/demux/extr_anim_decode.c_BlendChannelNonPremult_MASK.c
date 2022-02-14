
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static uint8_t FUNC_1(uint32_t VAR_0, uint8_t VAR_1,
                                      uint32_t VAR_2, uint8_t VAR_3,
                                      uint32_t VAR_4, int VAR_5) {
  const uint8_t VAR_6 = (VAR_0 >> VAR_5) & 0xff;
  const uint8_t VAR_7 = (VAR_2 >> VAR_5) & 0xff;
  const uint32_t VAR_8 = VAR_6 * VAR_1 + VAR_7 * VAR_3;
  FUNC_0(VAR_8 < (1ULL << 32) / VAR_4);
  return (VAR_8 * VAR_4) >> 24;
}
