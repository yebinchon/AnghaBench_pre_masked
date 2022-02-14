
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qfq_sched {int max_agg_classes; int min_slot_shift; int nonfull_aggs; struct qfq_group* groups; int clhash; int filter_list; int block; } ;
struct qfq_group {int index; int slot_shift; int * slots; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {scalar_t__ tx_queue_len; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct Qdisc*) ;
 struct qfq_sched* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_5, struct nlattr *VAR_6,
     struct netlink_ext_ack *VAR_7)
{
 struct qfq_sched *VAR_8 = FUNC_4(VAR_5);
 struct qfq_group *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15;

 VAR_12 = FUNC_5(&VAR_8->block, &VAR_8->filter_list, VAR_5, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(&VAR_8->clhash);
 if (VAR_12 < 0)
  return VAR_12;

 if (FUNC_3(VAR_5)->tx_queue_len + 1 > VAR_1)
  VAR_15 = VAR_1;
 else
  VAR_15 = FUNC_3(VAR_5)->tx_queue_len + 1;

 VAR_13 = FUNC_1(VAR_15);
 VAR_8->max_agg_classes = 1<<VAR_13;


 VAR_14 = VAR_4 + VAR_13;
 VAR_8->min_slot_shift = VAR_0 + VAR_14 - VAR_2;

 for (VAR_10 = 0; VAR_10 <= VAR_2; VAR_10++) {
  VAR_9 = &VAR_8->groups[VAR_10];
  VAR_9->index = VAR_10;
  VAR_9->slot_shift = VAR_8->min_slot_shift + VAR_10;
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
   FUNC_0(&VAR_9->slots[VAR_11]);
 }

 FUNC_0(&VAR_8->nonfull_aggs);

 return 0;
}
