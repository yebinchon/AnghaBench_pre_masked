
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int probability ;
struct TYPE_3__ {int literal_pos_mask; int literal_context_bits; int literal; } ;
typedef TYPE_1__ lzma_coder ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int ,int ,int const,int const) ;
 scalar_t__ FUNC_2 (int const,int const) ;
 int FUNC_3 (int const* const,int,int) ;

__attribute__((used)) static uint32_t
FUNC_4(const lzma_coder *const VAR_0, const uint32_t VAR_1,
  const uint32_t VAR_2, const bool VAR_3,
  uint32_t VAR_4, uint32_t VAR_5)
{
 const probability *const VAR_6 = FUNC_1(VAR_0->literal,
   VAR_0->literal_context_bits, VAR_0->literal_pos_mask,
   VAR_1, VAR_2);

 uint32_t VAR_7 = 0;

 if (!VAR_3) {
  VAR_7 = FUNC_3(VAR_6, 8, VAR_5);
 } else {
  uint32_t VAR_8 = 0x100;
  VAR_5 += FUNC_0(1) << 8;

  do {
   VAR_4 <<= 1;

   const uint32_t VAR_9 = VAR_4 & VAR_8;
   const uint32_t VAR_10
     = VAR_8 + VAR_9 + (VAR_5 >> 8);
   const uint32_t VAR_11 = (VAR_5 >> 7) & 1;
   VAR_7 += FUNC_2(VAR_6[VAR_10], VAR_11);

   VAR_5 <<= 1;
   VAR_8 &= ~(VAR_4 ^ VAR_5);

  } while (VAR_5 < (FUNC_0(1) << 16));
 }

 return VAR_7;
}
