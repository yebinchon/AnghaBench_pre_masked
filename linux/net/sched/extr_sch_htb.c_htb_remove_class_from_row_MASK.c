
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htb_sched {int* row_mask; struct htb_level* hlevel; } ;
struct TYPE_2__ {int rb_node; } ;
struct htb_prio {scalar_t__ ptr; TYPE_1__ row; } ;
struct htb_level {struct htb_prio* hprio; } ;
struct htb_class {size_t level; scalar_t__ node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_3(struct htb_sched *VAR_0,
       struct htb_class *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct htb_level *VAR_4 = &VAR_0->hlevel[VAR_1->level];

 while (VAR_2) {
  int VAR_5 = FUNC_0(~VAR_2);
  struct htb_prio *VAR_6 = &VAR_4->hprio[VAR_5];

  VAR_2 &= ~(1 << VAR_5);
  if (VAR_6->ptr == VAR_1->node + VAR_5)
   FUNC_1(&VAR_6->ptr);

  FUNC_2(VAR_1->node + VAR_5, &VAR_6->row);
  if (!VAR_6->row.rb_node)
   VAR_3 |= 1 << VAR_5;
 }
 VAR_0->row_mask[VAR_1->level] &= ~VAR_3;
}
