
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ imm; } ;
typedef TYPE_1__ simd_imm_encoding ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
  const simd_imm_encoding *VAR_2 = (const simd_imm_encoding *)VAR_0;
  const simd_imm_encoding *VAR_3 = (const simd_imm_encoding *)VAR_1;

  if (VAR_2->imm < VAR_3->imm)
    return -1;
  if (VAR_2->imm > VAR_3->imm)
    return +1;
  return 0;
}
