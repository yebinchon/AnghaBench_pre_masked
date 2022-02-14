
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct he_stat {int nr_events; int weight; int period; } ;



__attribute__((used)) static void FUNC_0(struct he_stat *VAR_0, u64 VAR_1,
    u64 VAR_2)
{

 VAR_0->period += VAR_1;
 VAR_0->weight += VAR_2;
 VAR_0->nr_events += 1;
}
