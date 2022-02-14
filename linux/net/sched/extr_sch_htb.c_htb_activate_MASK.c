
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct htb_sched {int dummy; } ;
struct TYPE_6__ {TYPE_2__* q; } ;
struct htb_class {int prio_activity; int prio; TYPE_3__ leaf; scalar_t__ level; } ;
struct TYPE_4__ {int qlen; } ;
struct TYPE_5__ {TYPE_1__ q; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct htb_sched*,struct htb_class*) ;

__attribute__((used)) static inline void FUNC_2(struct htb_sched *VAR_0, struct htb_class *VAR_1)
{
 FUNC_0(VAR_1->level || !VAR_1->leaf.q || !VAR_1->leaf.q->q.qlen);

 if (!VAR_1->prio_activity) {
  VAR_1->prio_activity = 1 << VAR_1->prio;
  FUNC_1(VAR_0, VAR_1);
 }
}
