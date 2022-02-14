
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int const,int,int const,int const,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint32_t FUNC_2(uint32_t VAR_0, uint32_t VAR_1) {
  const uint8_t VAR_2 = (VAR_0 >> 24) & 0xff;

  if (VAR_2 == 0) {
    return VAR_1;
  } else {
    const uint8_t VAR_3 = (VAR_1 >> 24) & 0xff;


    const uint8_t VAR_4 = (VAR_3 * (256 - VAR_2)) >> 8;
    const uint8_t VAR_5 = VAR_2 + VAR_4;
    const uint32_t VAR_6 = (1UL << 24) / VAR_5;

    const uint8_t VAR_7 =
        FUNC_0(VAR_0, VAR_2, VAR_1, VAR_4, VAR_6, 0);
    const uint8_t VAR_8 =
        FUNC_0(VAR_0, VAR_2, VAR_1, VAR_4, VAR_6, 8);
    const uint8_t VAR_9 =
        FUNC_0(VAR_0, VAR_2, VAR_1, VAR_4, VAR_6, 16);
    FUNC_1(VAR_2 + VAR_4 < 256);

    return (VAR_7 << 0) |
           (VAR_8 << 8) |
           (VAR_9 << 16) |
           ((uint32_t)VAR_5 << 24);
  }
}
