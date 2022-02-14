
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8x16_t ;
typedef int const uint8_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int const*,int ) ;

void FUNC_7(int VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, uint8_t *VAR_3,
         uint8_t *VAR_4, const uint8_t *VAR_5,
         const uint8_t *VAR_6)
{
 uint8x16_t VAR_7 = FUNC_3(VAR_5);
 uint8x16_t VAR_8 = FUNC_3(VAR_5 + 16);
 uint8x16_t VAR_9 = FUNC_3(VAR_6);
 uint8x16_t VAR_10 = FUNC_3(VAR_6 + 16);
 uint8x16_t VAR_11 = FUNC_1(0x0f);
 while (VAR_0) {
  uint8x16_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

  VAR_14 = FUNC_2(FUNC_3(VAR_1), FUNC_3(VAR_3));
  VAR_12 = FUNC_2(FUNC_3(VAR_2), FUNC_3(VAR_4));

  VAR_13 = FUNC_5(VAR_12, 4);
  VAR_12 = FUNC_4(VAR_9, FUNC_0(VAR_12, VAR_11));
  VAR_13 = FUNC_4(VAR_10, VAR_13);
  VAR_15 = FUNC_2(VAR_12, VAR_13);

  VAR_13 = FUNC_5(VAR_14, 4);
  VAR_12 = FUNC_4(VAR_7, FUNC_0(VAR_14, VAR_11));
  VAR_13 = FUNC_4(VAR_8, VAR_13);
  VAR_12 = FUNC_2(VAR_12, VAR_13);
  VAR_16 = FUNC_2(VAR_12, VAR_15);

  FUNC_6(VAR_4, VAR_16);
  FUNC_6(VAR_3, FUNC_2(VAR_16, VAR_14));

  VAR_0 -= 16;
  VAR_1 += 16;
  VAR_2 += 16;
  VAR_3 += 16;
  VAR_4 += 16;
 }
}
