
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rate_info {int mcs; scalar_t__ bw; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct rate_info *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;


 if (FUNC_0(VAR_2->mcs >= 32))
  return 0;

 VAR_3 = VAR_2->mcs & 7;
 VAR_4 = (VAR_2->mcs >> 3) + 1;

 VAR_5 = (VAR_2->bw == VAR_0) ? 13500000 : 6500000;

 if (VAR_3 < 4)
  VAR_5 *= (VAR_3 + 1);
 else if (VAR_3 == 4)
  VAR_5 *= (VAR_3 + 2);
 else
  VAR_5 *= (VAR_3 + 3);

 VAR_5 *= VAR_4;

 if (VAR_2->flags & VAR_1)
  VAR_5 = (VAR_5 / 9) * 10;


 return (VAR_5 + 50000) / 100000;
}
