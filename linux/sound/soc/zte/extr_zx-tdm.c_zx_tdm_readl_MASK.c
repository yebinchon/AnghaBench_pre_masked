
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct zx_tdm_info {scalar_t__ regbase; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct zx_tdm_info *VAR_0, u16 VAR_1)
{
 return FUNC_0(VAR_0->regbase + VAR_1);
}
