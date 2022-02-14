
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skbprio_sched_data {int highest_prio; int lowest_prio; int * qdiscs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static u16 FUNC_1(const struct skbprio_sched_data *VAR_0)
{
 int VAR_1;

 for (VAR_1 = VAR_0->highest_prio - 1; VAR_1 >= VAR_0->lowest_prio; VAR_1--) {
  if (!FUNC_0(&VAR_0->qdiscs[VAR_1]))
   return VAR_1;
 }


 return 0;
}
