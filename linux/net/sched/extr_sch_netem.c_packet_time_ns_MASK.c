
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct netem_sched_data {int cell_size; int cell_overhead; int rate; int cell_size_reciprocal; scalar_t__ packet_overhead; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static u64 FUNC_2(u64 VAR_1, const struct netem_sched_data *VAR_2)
{
 VAR_1 += VAR_2->packet_overhead;

 if (VAR_2->cell_size) {
  u32 VAR_3 = FUNC_1(VAR_1, VAR_2->cell_size_reciprocal);

  if (VAR_1 > VAR_3 * VAR_2->cell_size)
   VAR_3++;
  VAR_1 = VAR_3 * (VAR_2->cell_size + VAR_2->cell_overhead);
 }

 return FUNC_0(VAR_1 * VAR_0, VAR_2->rate);
}
