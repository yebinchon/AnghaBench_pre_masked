
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfq_sched_data {int limit; int maxdepth; int divisor; int maxflows; int * slots; int * ht; int perturbation; scalar_t__ perturb_period; int quantum; int scaled_quantum; int * tail; scalar_t__ cur_depth; TYPE_1__* dep; int filter_list; int block; int perturb_timer; struct Qdisc* sch; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int flags; } ;
struct TYPE_2__ {void* prev; void* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct Qdisc*) ;
 struct sfq_sched_data* FUNC_4 (struct Qdisc*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct Qdisc*,struct nlattr*) ;
 int FUNC_7 (struct sfq_sched_data*,int) ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct Qdisc *VAR_9, struct nlattr *VAR_10,
      struct netlink_ext_ack *VAR_11)
{
 struct sfq_sched_data *VAR_12 = FUNC_4(VAR_9);
 int VAR_13;
 int VAR_14;

 VAR_12->sch = VAR_9;
 FUNC_10(&VAR_12->perturb_timer, VAR_8, VAR_7);

 VAR_14 = FUNC_9(&VAR_12->block, &VAR_12->filter_list, VAR_9, VAR_11);
 if (VAR_14)
  return VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_4 + 1; VAR_13++) {
  VAR_12->dep[VAR_13].next = VAR_13 + VAR_5;
  VAR_12->dep[VAR_13].prev = VAR_13 + VAR_5;
 }

 VAR_12->limit = VAR_4;
 VAR_12->maxdepth = VAR_4;
 VAR_12->cur_depth = 0;
 VAR_12->tail = ((void*)0);
 VAR_12->divisor = VAR_2;
 VAR_12->maxflows = VAR_1;
 VAR_12->quantum = FUNC_2(FUNC_3(VAR_9));
 VAR_12->scaled_quantum = FUNC_0(VAR_12->quantum);
 VAR_12->perturb_period = 0;
 FUNC_1(&VAR_12->perturbation, sizeof(VAR_12->perturbation));

 if (VAR_10) {
  int VAR_15 = FUNC_6(VAR_9, VAR_10);
  if (VAR_15)
   return VAR_15;
 }

 VAR_12->ht = FUNC_5(sizeof(VAR_12->ht[0]) * VAR_12->divisor);
 VAR_12->slots = FUNC_5(sizeof(VAR_12->slots[0]) * VAR_12->maxflows);
 if (!VAR_12->ht || !VAR_12->slots) {

  return -VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_12->divisor; VAR_13++)
  VAR_12->ht[VAR_13] = VAR_3;

 for (VAR_13 = 0; VAR_13 < VAR_12->maxflows; VAR_13++) {
  FUNC_8(&VAR_12->slots[VAR_13]);
  FUNC_7(VAR_12, VAR_13);
 }
 if (VAR_12->limit >= 1)
  VAR_9->flags |= VAR_6;
 else
  VAR_9->flags &= ~VAR_6;
 return 0;
}
