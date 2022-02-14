
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct htb_sched {TYPE_1__* hlevel; } ;
struct TYPE_4__ {struct Qdisc* q; } ;
struct htb_class {size_t level; scalar_t__ cmode; int t_c; int cbuffer; int ctokens; int buffer; int tokens; TYPE_2__ leaf; int inner; int pq_node; scalar_t__ prio_activity; struct htb_class* parent; } ;
struct Qdisc {int dummy; } ;
struct TYPE_3__ {int wait_pq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int) ;
 struct Qdisc VAR_1 ;

__attribute__((used)) static void FUNC_4(struct htb_sched *VAR_2, struct htb_class *VAR_3,
          struct Qdisc *VAR_4)
{
 struct htb_class *VAR_5 = VAR_3->parent;

 FUNC_0(VAR_3->level || !VAR_3->leaf.q || VAR_3->prio_activity);

 if (VAR_5->cmode != VAR_0)
  FUNC_1(&VAR_5->pq_node,
      &VAR_2->hlevel[VAR_5->level].wait_pq);

 VAR_5->level = 0;
 FUNC_3(&VAR_5->inner, 0, sizeof(VAR_5->inner));
 VAR_5->leaf.q = VAR_4 ? VAR_4 : &VAR_1;
 VAR_5->tokens = VAR_5->buffer;
 VAR_5->ctokens = VAR_5->cbuffer;
 VAR_5->t_c = FUNC_2();
 VAR_5->cmode = VAR_0;
}
