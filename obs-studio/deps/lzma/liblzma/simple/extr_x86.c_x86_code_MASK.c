
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int prev_mask; int prev_pos; } ;
typedef TYPE_1__ lzma_simple ;
typedef scalar_t__ buffer_pos ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static size_t
FUNC_1(lzma_simple *VAR_0, uint32_t VAR_1, bool VAR_2,
  uint8_t *VAR_3, size_t VAR_4)
{
 static const bool VAR_5[8]
  = { 1, 1, 1, 0, 1, 0, 0, 0 };

 static const uint32_t VAR_6[8]
   = { 0, 1, 2, 2, 3, 3, 3, 3 };

 uint32_t VAR_7 = VAR_0->prev_mask;
 uint32_t VAR_8 = VAR_0->prev_pos;

 if (VAR_4 < 5)
  return 0;

 if (VAR_1 - VAR_8 > 5)
  VAR_8 = VAR_1 - 5;

 const size_t VAR_9 = VAR_4 - 5;
 size_t VAR_10 = 0;

 while (VAR_10 <= VAR_9) {
  uint8_t VAR_11 = VAR_3[VAR_10];
  if (VAR_11 != 0xE8 && VAR_11 != 0xE9) {
   ++VAR_10;
   continue;
  }

  const uint32_t VAR_12 = VAR_1 + (uint32_t)(VAR_10)
    - VAR_8;
  VAR_8 = VAR_1 + (uint32_t)(VAR_10);

  if (VAR_12 > 5) {
   VAR_7 = 0;
  } else {
   for (uint32_t VAR_13 = 0; VAR_13 < VAR_12; ++VAR_13) {
    VAR_7 &= 0x77;
    VAR_7 <<= 1;
   }
  }

  VAR_11 = VAR_3[VAR_10 + 4];

  if (FUNC_0(VAR_11)
   && VAR_5[(VAR_7 >> 1) & 0x7]
    && (VAR_7 >> 1) < 0x10) {

   uint32_t VAR_14 = ((uint32_t)(VAR_11) << 24)
    | ((uint32_t)(VAR_3[VAR_10 + 3]) << 16)
    | ((uint32_t)(VAR_3[VAR_10 + 2]) << 8)
    | (VAR_3[VAR_10 + 1]);

   uint32_t VAR_15;
   while (1) {
    if (VAR_2)
     VAR_15 = VAR_14 + (VAR_1 + (uint32_t)(
       VAR_10) + 5);
    else
     VAR_15 = VAR_14 - (VAR_1 + (uint32_t)(
       VAR_10) + 5);

    if (VAR_7 == 0)
     break;

    const uint32_t VAR_16 = VAR_6[
      VAR_7 >> 1];

    VAR_11 = (uint8_t)(VAR_15 >> (24 - VAR_16 * 8));

    if (!FUNC_0(VAR_11))
     break;

    VAR_14 = VAR_15 ^ ((1 << (32 - VAR_16 * 8)) - 1);
   }

   VAR_3[VAR_10 + 4]
     = (uint8_t)(~(((VAR_15 >> 24) & 1) - 1));
   VAR_3[VAR_10 + 3] = (uint8_t)(VAR_15 >> 16);
   VAR_3[VAR_10 + 2] = (uint8_t)(VAR_15 >> 8);
   VAR_3[VAR_10 + 1] = (uint8_t)(VAR_15);
   VAR_10 += 5;
   VAR_7 = 0;

  } else {
   ++VAR_10;
   VAR_7 |= 1;
   if (FUNC_0(VAR_11))
    VAR_7 |= 0x10;
  }
 }

 VAR_0->prev_mask = VAR_7;
 VAR_0->prev_pos = VAR_8;

 return VAR_10;
}
