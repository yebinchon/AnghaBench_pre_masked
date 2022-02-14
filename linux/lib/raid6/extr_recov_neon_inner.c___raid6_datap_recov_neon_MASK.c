
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
         const uint8_t *VAR_4)
{
 uint8x16_t VAR_5 = FUNC_3(VAR_4);
 uint8x16_t VAR_6 = FUNC_3(VAR_4 + 16);
 uint8x16_t VAR_7 = FUNC_1(0x0f);
 while (VAR_0) {
  uint8x16_t VAR_8, VAR_9;

  VAR_8 = FUNC_2(FUNC_3(VAR_2), FUNC_3(VAR_3));

  VAR_9 = FUNC_5(VAR_8, 4);
  VAR_8 = FUNC_4(VAR_5, FUNC_0(VAR_8, VAR_7));
  VAR_9 = FUNC_4(VAR_6, VAR_9);
  VAR_8 = FUNC_2(VAR_8, VAR_9);
  VAR_9 = FUNC_2(VAR_8, FUNC_3(VAR_1));

  FUNC_6(VAR_3, VAR_8);
  FUNC_6(VAR_1, VAR_9);

  VAR_0 -= 16;
  VAR_1 += 16;
  VAR_2 += 16;
  VAR_3 += 16;
 }
}
