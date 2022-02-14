
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_plug_qopt {int action; int limit; } ;
struct plug_sched_data {int unplug_indefinite; int throttled; int limit; int pkts_current_epoch; int pkts_last_epoch; int pkts_to_release; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int dev_queue; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 struct tc_plug_qopt* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 struct plug_sched_data* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_1, struct nlattr *VAR_2,
         struct netlink_ext_ack *VAR_3)
{
 struct plug_sched_data *VAR_4 = FUNC_3(VAR_1);
 struct tc_plug_qopt *VAR_5;

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_2);
 if (FUNC_2(VAR_2) < sizeof(*VAR_5))
  return -VAR_0;

 switch (VAR_5->action) {
 case 131:

  VAR_4->pkts_last_epoch = VAR_4->pkts_current_epoch;
  VAR_4->pkts_current_epoch = 0;
  if (VAR_4->unplug_indefinite)
   VAR_4->throttled = 1;
  VAR_4->unplug_indefinite = 0;
  break;
 case 128:



  VAR_4->pkts_to_release += VAR_4->pkts_last_epoch;
  VAR_4->pkts_last_epoch = 0;
  VAR_4->throttled = 0;
  FUNC_0(VAR_1->dev_queue);
  break;
 case 129:
  VAR_4->unplug_indefinite = 1;
  VAR_4->pkts_to_release = 0;
  VAR_4->pkts_last_epoch = 0;
  VAR_4->pkts_current_epoch = 0;
  VAR_4->throttled = 0;
  FUNC_0(VAR_1->dev_queue);
  break;
 case 130:

  VAR_4->limit = VAR_5->limit;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
