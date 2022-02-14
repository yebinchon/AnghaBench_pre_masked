
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct regs_dump {int mask; } ;
struct intel_pt_blk_items {int has_xmm; int* xmm; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct regs_dump *VAR_1, u64 *VAR_2,
        const struct intel_pt_blk_items *VAR_3,
        u64 VAR_4)
{
 u32 VAR_5 = VAR_3->has_xmm & (VAR_4 >> VAR_0);
 const u64 *VAR_6 = VAR_3->xmm;







 VAR_1->mask |= (u64)VAR_5 << VAR_0;

 for (; VAR_5; VAR_5 >>= 1, VAR_6++) {
  if (VAR_5 & 1)
   *VAR_2++ = *VAR_6;
 }
}
