
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct multiq_sched_data {int max_bands; int ** queues; int filter_list; int block; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (struct Qdisc*) ;
 struct multiq_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_4, struct nlattr *VAR_5,
         struct netlink_ext_ack *VAR_6)
{
 struct multiq_sched_data *VAR_7 = FUNC_3(VAR_4);
 int VAR_8, VAR_9;

 VAR_7->queues = ((void*)0);

 if (!VAR_5)
  return -VAR_0;

 VAR_9 = FUNC_4(&VAR_7->block, &VAR_7->filter_list, VAR_4, VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_7->max_bands = FUNC_2(VAR_4)->num_tx_queues;

 VAR_7->queues = FUNC_0(VAR_7->max_bands, sizeof(struct Qdisc *), VAR_2);
 if (!VAR_7->queues)
  return -VAR_1;
 for (VAR_8 = 0; VAR_8 < VAR_7->max_bands; VAR_8++)
  VAR_7->queues[VAR_8] = &VAR_3;

 return FUNC_1(VAR_4, VAR_5, VAR_6);
}
