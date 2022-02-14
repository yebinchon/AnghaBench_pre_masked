
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cake_sched_data {int rate_flags; int max_netlen; int min_netlen; int rate_mpu; scalar_t__ atm_mode; int max_adjlen; int min_adjlen; scalar_t__ rate_overhead; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(struct cake_sched_data *VAR_3, u32 VAR_4, u32 VAR_5)
{
 if (VAR_3->rate_flags & VAR_2)
  VAR_4 -= VAR_5;

 if (VAR_3->max_netlen < VAR_4)
  VAR_3->max_netlen = VAR_4;
 if (VAR_3->min_netlen > VAR_4)
  VAR_3->min_netlen = VAR_4;

 VAR_4 += VAR_3->rate_overhead;

 if (VAR_4 < VAR_3->rate_mpu)
  VAR_4 = VAR_3->rate_mpu;

 if (VAR_3->atm_mode == VAR_0) {
  VAR_4 += 47;
  VAR_4 /= 48;
  VAR_4 *= 53;
 } else if (VAR_3->atm_mode == VAR_1) {




  VAR_4 += (VAR_4 + 63) / 64;
 }

 if (VAR_3->max_adjlen < VAR_4)
  VAR_3->max_adjlen = VAR_4;
 if (VAR_3->min_adjlen > VAR_4)
  VAR_3->min_adjlen = VAR_4;

 return VAR_4;
}
