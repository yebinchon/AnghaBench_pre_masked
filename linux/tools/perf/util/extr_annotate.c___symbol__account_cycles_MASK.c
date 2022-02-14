
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cyc_hist {unsigned int cycles_max; unsigned int cycles_min; unsigned int have_start; scalar_t__ start; unsigned int cycles; int reset; scalar_t__ num; int cycles_aggr; int num_aggr; } ;



__attribute__((used)) static int FUNC_0(struct cyc_hist *VAR_0,
        u64 VAR_1,
        unsigned VAR_2, unsigned VAR_3,
        unsigned VAR_4)
{
 VAR_0[VAR_2].num_aggr++;
 VAR_0[VAR_2].cycles_aggr += VAR_3;

 if (VAR_3 > VAR_0[VAR_2].cycles_max)
  VAR_0[VAR_2].cycles_max = VAR_3;

 if (VAR_0[VAR_2].cycles_min) {
  if (VAR_3 && VAR_3 < VAR_0[VAR_2].cycles_min)
   VAR_0[VAR_2].cycles_min = VAR_3;
 } else
  VAR_0[VAR_2].cycles_min = VAR_3;

 if (!VAR_4 && VAR_0[VAR_2].have_start)
  return 0;
 if (VAR_0[VAR_2].num) {
  if (VAR_4 && (!VAR_0[VAR_2].have_start ||
       VAR_0[VAR_2].start > VAR_1)) {
   VAR_0[VAR_2].have_start = 0;
   VAR_0[VAR_2].cycles = 0;
   VAR_0[VAR_2].num = 0;
   if (VAR_0[VAR_2].reset < 0xffff)
    VAR_0[VAR_2].reset++;
  } else if (VAR_4 &&
      VAR_0[VAR_2].start < VAR_1)
   return 0;
 }
 VAR_0[VAR_2].have_start = VAR_4;
 VAR_0[VAR_2].start = VAR_1;
 VAR_0[VAR_2].cycles += VAR_3;
 VAR_0[VAR_2].num++;
 return 0;
}
