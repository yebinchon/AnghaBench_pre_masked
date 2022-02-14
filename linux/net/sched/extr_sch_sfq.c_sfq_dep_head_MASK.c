
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfq_sched_data {struct sfq_head* dep; TYPE_1__* slots; } ;
struct sfq_head {int dummy; } ;
typedef size_t sfq_index ;
struct TYPE_2__ {struct sfq_head dep; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline struct sfq_head *FUNC_0(struct sfq_sched_data *VAR_1, sfq_index VAR_2)
{
 if (VAR_2 < VAR_0)
  return &VAR_1->slots[VAR_2].dep;
 return &VAR_1->dep[VAR_2 - VAR_0];
}
