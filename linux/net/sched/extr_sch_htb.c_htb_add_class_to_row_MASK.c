
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct htb_sched {int* row_mask; TYPE_2__* hlevel; } ;
struct htb_class {size_t level; } ;
struct TYPE_4__ {TYPE_1__* hprio; } ;
struct TYPE_3__ {int row; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct htb_class*,int) ;

__attribute__((used)) static inline void FUNC_2(struct htb_sched *VAR_0,
     struct htb_class *VAR_1, int VAR_2)
{
 VAR_0->row_mask[VAR_1->level] |= VAR_2;
 while (VAR_2) {
  int VAR_3 = FUNC_0(~VAR_2);
  VAR_2 &= ~(1 << VAR_3);
  FUNC_1(&VAR_0->hlevel[VAR_1->level].hprio[VAR_3].row, VAR_1, VAR_3);
 }
}
