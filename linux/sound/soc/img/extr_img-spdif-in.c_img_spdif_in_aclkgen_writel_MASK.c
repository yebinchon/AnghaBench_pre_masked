
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct img_spdif_in {int * aclkgen_regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct img_spdif_in*,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct img_spdif_in *VAR_1,
      u32 VAR_2)
{
 FUNC_0(VAR_1, VAR_1->aclkgen_regs[VAR_2],
   VAR_0 + (VAR_2 * 0x4));
}
