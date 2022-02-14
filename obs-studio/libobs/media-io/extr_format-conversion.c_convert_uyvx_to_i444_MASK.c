
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int __m128i ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int const) ;
 int FUNC_3 (int *,int,int,int ,int ,int ,int) ;
 int FUNC_4 (int *,int,int,int ,int ,int ) ;

void FUNC_5(const uint8_t *VAR_0, uint32_t VAR_1,
     uint32_t VAR_2, uint32_t VAR_3, uint8_t *VAR_4[],
     const uint32_t VAR_5[])
{
 uint8_t *VAR_6 = VAR_4[0];
 uint8_t *VAR_7 = VAR_4[1];
 uint8_t *VAR_8 = VAR_4[2];
 uint32_t VAR_9 = FUNC_2(VAR_1, VAR_5[0]);
 uint32_t VAR_10;

 __m128i VAR_11 = FUNC_1(0x0000FF00);
 __m128i VAR_12 = FUNC_1(0x000000FF);
 __m128i VAR_13 = FUNC_1(0x00FF0000);

 for (VAR_10 = VAR_2; VAR_10 < VAR_3; VAR_10 += 2) {
  uint32_t VAR_14 = VAR_10 * VAR_1;
  uint32_t VAR_15 = VAR_10 * VAR_5[0];
  uint32_t VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16 += 4) {
   const uint8_t *VAR_17 = VAR_0 + VAR_14 + VAR_16 * 4;
   uint32_t VAR_18 = VAR_15 + VAR_16;
   uint32_t VAR_19 = VAR_18 + VAR_5[0];

   __m128i VAR_20 = FUNC_0((const __m128i *)VAR_17);
   __m128i VAR_21 = FUNC_0(
    (const __m128i *)(VAR_17 + VAR_1));

   FUNC_3(VAR_6, VAR_18, VAR_19, VAR_20, VAR_21,
       VAR_11, 1);
   FUNC_4(VAR_7, VAR_18, VAR_19, VAR_20, VAR_21,
     VAR_12);
   FUNC_3(VAR_8, VAR_18, VAR_19, VAR_20, VAR_21,
       VAR_13, 2);
  }
 }
}
