
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda7419_vol_control {scalar_t__ reg; scalar_t__ rreg; } ;



__attribute__((used)) static inline bool FUNC_0(struct tda7419_vol_control *VAR_0)
{
 if (VAR_0->reg == VAR_0->rreg)
  return 0;

 return 1;
}
