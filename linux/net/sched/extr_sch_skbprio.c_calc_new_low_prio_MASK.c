
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skbprio_sched_data {int lowest_prio; int highest_prio; int * qdiscs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static u16 FUNC_1(const struct skbprio_sched_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1->lowest_prio + 1; VAR_2 <= VAR_1->highest_prio; VAR_2++) {
  if (!FUNC_0(&VAR_1->qdiscs[VAR_2]))
   return VAR_2;
 }




 return VAR_0 - 1;
}
