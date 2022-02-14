
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct htb_sched {TYPE_4__* hlevel; int clhash; } ;
struct TYPE_6__ {int q; } ;
struct htb_class {size_t level; scalar_t__ cmode; int pq_node; scalar_t__ prio_activity; TYPE_3__* parent; int common; TYPE_2__ leaf; scalar_t__ filter_cnt; scalar_t__ children; } ;
struct Qdisc {int dev_queue; } ;
struct TYPE_8__ {int wait_pq; } ;
struct TYPE_5__ {int classid; } ;
struct TYPE_7__ {int children; TYPE_1__ common; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct htb_sched*,struct htb_class*) ;
 int FUNC_1 (struct Qdisc*,struct htb_class*) ;
 scalar_t__ FUNC_2 (struct htb_class*) ;
 int FUNC_3 (struct htb_sched*,struct htb_class*,struct Qdisc*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;
 struct Qdisc* FUNC_6 (int ,int *,int ,int *) ;
 struct htb_sched* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_11(struct Qdisc *VAR_3, unsigned long VAR_4)
{
 struct htb_sched *VAR_5 = FUNC_7(VAR_3);
 struct htb_class *VAR_6 = (struct htb_class *)VAR_4;
 struct Qdisc *VAR_7 = ((void*)0);
 int VAR_8 = 0;





 if (VAR_6->children || VAR_6->filter_cnt)
  return -VAR_0;

 if (!VAR_6->level && FUNC_2(VAR_6)) {
  VAR_7 = FUNC_6(VAR_3->dev_queue, &VAR_2,
       VAR_6->parent->common.classid,
       ((void*)0));
  VAR_8 = 1;
 }

 FUNC_9(VAR_3);

 if (!VAR_6->level)
  FUNC_8(VAR_6->leaf.q);


 FUNC_5(&VAR_5->clhash, &VAR_6->common);
 if (VAR_6->parent)
  VAR_6->parent->children--;

 if (VAR_6->prio_activity)
  FUNC_0(VAR_5, VAR_6);

 if (VAR_6->cmode != VAR_1)
  FUNC_4(&VAR_6->pq_node,
      &VAR_5->hlevel[VAR_6->level].wait_pq);

 if (VAR_8)
  FUNC_3(VAR_5, VAR_6, VAR_7);

 FUNC_10(VAR_3);

 FUNC_1(VAR_3, VAR_6);
 return 0;
}
