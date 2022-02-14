
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct tc_u32_sel {int hmask; } ;
typedef int __be32 ;


 unsigned int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1(__be32 VAR_0,
      const struct tc_u32_sel *VAR_1,
      u8 VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_0 & VAR_1->hmask) >> VAR_2;

 return VAR_3;
}
