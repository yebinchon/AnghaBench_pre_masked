
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_gate_list {int cycle_close_time; int entries; } ;
struct sched_entry {int close_time; int list; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(const struct sched_gate_list *VAR_0,
     const struct sched_entry *VAR_1)
{
 if (FUNC_1(&VAR_1->list, &VAR_0->entries))
  return 1;

 if (FUNC_0(VAR_1->close_time, VAR_0->cycle_close_time) == 0)
  return 1;

 return 0;
}
