
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct game_capture {int cx; int cy; int pitch; int ** texture_buffers; } ;
typedef int __m128i ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(struct game_capture *VAR_0, int VAR_1,
         uint8_t *VAR_2, uint32_t VAR_3)
{
 uint8_t *VAR_4 = VAR_0->texture_buffers[VAR_1];
 uint32_t VAR_5 = VAR_0->cx;
 uint32_t VAR_6 = VAR_0->cy;
 uint32_t VAR_7 = VAR_0->pitch;

 for (uint32_t VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  uint8_t *VAR_9 = VAR_4 + (VAR_7 * VAR_8);
  uint8_t *VAR_10 = VAR_2 + (VAR_3 * VAR_8);

  for (uint32_t VAR_11 = 0; VAR_11 < VAR_5; VAR_11 += 8) {
   __m128i VAR_12, VAR_13, VAR_14,
    VAR_15;
   __m128i VAR_16;
   __m128i *VAR_17;

   __m128i *VAR_18 =
    (__m128i *)(VAR_9 + VAR_11 * sizeof(uint16_t));
   __m128i VAR_19 = FUNC_3(VAR_18);

   __m128i VAR_20 = FUNC_6();
   __m128i VAR_21 = FUNC_12(VAR_19, VAR_20);
   __m128i VAR_22 = FUNC_11(VAR_19, VAR_20);

   __m128i VAR_23 = FUNC_5(0x0000001F);
   __m128i VAR_24 = FUNC_5(0x00000003);
   __m128i VAR_25 = FUNC_5(0x000003E0);
   __m128i VAR_26 = FUNC_5(0x000000C);
   __m128i VAR_27 = FUNC_5(0x00007C00);
   __m128i VAR_28 = FUNC_5(0x00000180);
   __m128i VAR_29 = FUNC_5(0x00008000);
   __m128i VAR_30 = FUNC_5(0x00000001);
   __m128i VAR_31 = FUNC_5(0xFF000000);

   VAR_12 =
    FUNC_1(VAR_21, VAR_23);
   VAR_12 = FUNC_7(VAR_12, 3);
   VAR_12 = FUNC_0(VAR_12, VAR_24);

   VAR_13 =
    FUNC_1(VAR_21, VAR_25);
   VAR_13 =
    FUNC_0(VAR_13, VAR_26);
   VAR_13 = FUNC_7(VAR_13, 6);

   VAR_14 =
    FUNC_1(VAR_21, VAR_27);
   VAR_14 = FUNC_0(VAR_14, VAR_28);
   VAR_14 = FUNC_7(VAR_14, 9);

   VAR_15 =
    FUNC_1(VAR_21, VAR_29);
   VAR_15 = FUNC_8(VAR_15, 15);
   VAR_15 =
    FUNC_10(VAR_15, VAR_30);
   VAR_15 =
    FUNC_2(VAR_15, VAR_31);

   VAR_16 = VAR_14;
   VAR_16 =
    FUNC_4(VAR_16, VAR_15);
   VAR_16 =
    FUNC_4(VAR_16, VAR_12);
   VAR_16 =
    FUNC_4(VAR_16, VAR_13);

   VAR_17 = (__m128i *)(VAR_10 + VAR_11 * sizeof(uint32_t));
   FUNC_9(VAR_17, VAR_16);

   VAR_12 =
    FUNC_1(VAR_22, VAR_23);
   VAR_12 = FUNC_7(VAR_12, 3);
   VAR_12 = FUNC_0(VAR_12, VAR_24);

   VAR_13 =
    FUNC_1(VAR_22, VAR_25);
   VAR_13 =
    FUNC_0(VAR_13, VAR_26);
   VAR_13 = FUNC_7(VAR_13, 6);

   VAR_14 =
    FUNC_1(VAR_22, VAR_27);
   VAR_14 = FUNC_0(VAR_14, VAR_28);
   VAR_14 = FUNC_7(VAR_14, 9);

   VAR_15 =
    FUNC_1(VAR_22, VAR_29);
   VAR_15 = FUNC_8(VAR_15, 15);
   VAR_15 =
    FUNC_10(VAR_15, VAR_30);
   VAR_15 =
    FUNC_2(VAR_15, VAR_31);

   VAR_16 = VAR_14;
   VAR_16 =
    FUNC_4(VAR_16, VAR_15);
   VAR_16 =
    FUNC_4(VAR_16, VAR_12);
   VAR_16 =
    FUNC_4(VAR_16, VAR_13);

   VAR_17 =
    (__m128i *)(VAR_10 + (VAR_11 + 4) * sizeof(uint32_t));
   FUNC_9(VAR_17, VAR_16);
  }
 }
}
