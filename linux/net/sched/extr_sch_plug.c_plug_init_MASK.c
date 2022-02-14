
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tc_plug_qopt {int limit; } ;
struct plug_sched_data {int unplug_indefinite; int limit; int throttled; scalar_t__ pkts_to_release; scalar_t__ pkts_last_epoch; scalar_t__ pkts_current_epoch; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_3__ {int tx_queue_len; } ;


 int VAR_0 ;
 struct tc_plug_qopt* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct Qdisc*) ;
 struct plug_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_1, struct nlattr *VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 struct plug_sched_data *VAR_4 = FUNC_4(VAR_1);

 VAR_4->pkts_current_epoch = 0;
 VAR_4->pkts_last_epoch = 0;
 VAR_4->pkts_to_release = 0;
 VAR_4->unplug_indefinite = 0;

 if (VAR_2 == ((void*)0)) {
  VAR_4->limit = FUNC_3(VAR_1)->tx_queue_len
             * FUNC_2(FUNC_3(VAR_1));
 } else {
  struct tc_plug_qopt *VAR_5 = FUNC_0(VAR_2);

  if (FUNC_1(VAR_2) < sizeof(*VAR_5))
   return -VAR_0;

  VAR_4->limit = VAR_5->limit;
 }

 VAR_4->throttled = 1;
 return 0;
}
