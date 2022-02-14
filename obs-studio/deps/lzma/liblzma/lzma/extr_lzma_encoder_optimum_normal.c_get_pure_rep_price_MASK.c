
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t lzma_lzma_state ;
struct TYPE_3__ {int * is_rep2; int * is_rep1; int * is_rep0; int ** is_rep0_long; } ;
typedef TYPE_1__ lzma_coder ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ,size_t const) ;

__attribute__((used)) static inline uint32_t
FUNC_3(const lzma_coder *const VAR_0, const uint32_t VAR_1,
  const lzma_lzma_state VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 if (VAR_1 == 0) {
  VAR_4 = FUNC_0(VAR_0->is_rep0[VAR_2]);
  VAR_4 += FUNC_1(VAR_0->is_rep0_long[VAR_2][VAR_3]);
 } else {
  VAR_4 = FUNC_1(VAR_0->is_rep0[VAR_2]);

  if (VAR_1 == 1) {
   VAR_4 += FUNC_0(VAR_0->is_rep1[VAR_2]);
  } else {
   VAR_4 += FUNC_1(VAR_0->is_rep1[VAR_2]);
   VAR_4 += FUNC_2(VAR_0->is_rep2[VAR_2],
     VAR_1 - 2);
  }
 }

 return VAR_4;
}
