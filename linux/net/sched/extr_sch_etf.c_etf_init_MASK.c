
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_etf_qopt {int clockid; int delta; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct etf_sched_data {int clockid; int watchdog; int get_time; int skip_sock_check; scalar_t__ deadline_mode; scalar_t__ offload; int delta; scalar_t__ queue; } ;
struct Qdisc {scalar_t__ dev_queue; } ;






 scalar_t__ FUNC_0 (struct tc_etf_qopt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_2 (struct tc_etf_qopt*) ;
 int FUNC_3 (struct tc_etf_qopt*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (struct net_device*,struct etf_sched_data*,struct netlink_ext_ack*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (struct net_device*,int ) ;
 struct tc_etf_qopt* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int FUNC_8 (char*,int ,int,char*,char*) ;
 struct net_device* FUNC_9 (struct Qdisc*) ;
 struct etf_sched_data* FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (int *,struct Qdisc*,int) ;
 int FUNC_12 (struct tc_etf_qopt*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_13(struct Qdisc *VAR_9, struct nlattr *VAR_10,
      struct netlink_ext_ack *VAR_11)
{
 struct etf_sched_data *VAR_12 = FUNC_10(VAR_9);
 struct net_device *VAR_13 = FUNC_9(VAR_9);
 struct nlattr *VAR_14[VAR_2 + 1];
 struct tc_etf_qopt *VAR_15;
 int VAR_16;

 if (!VAR_10) {
  FUNC_1(VAR_11,
          "Missing ETF qdisc options which are mandatory");
  return -VAR_0;
 }

 VAR_16 = FUNC_7(VAR_14, VAR_2, VAR_10, VAR_4,
       VAR_11);
 if (VAR_16 < 0)
  return VAR_16;

 if (!VAR_14[VAR_3]) {
  FUNC_1(VAR_11, "Missing mandatory ETF parameters");
  return -VAR_0;
 }

 VAR_15 = FUNC_6(VAR_14[VAR_3]);

 FUNC_8("delta %d clockid %d offload %s deadline %s\n",
   VAR_15->delta, VAR_15->clockid,
   FUNC_2(VAR_15) ? "on" : "off",
   FUNC_0(VAR_15) ? "on" : "off");

 VAR_16 = FUNC_12(VAR_15, VAR_11);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_12->queue = VAR_9->dev_queue - FUNC_5(VAR_13, 0);

 if (FUNC_2(VAR_15)) {
  VAR_16 = FUNC_4(VAR_13, VAR_12, VAR_11);
  if (VAR_16 < 0)
   return VAR_16;
 }


 VAR_12->delta = VAR_15->delta;
 VAR_12->clockid = VAR_15->clockid;
 VAR_12->offload = FUNC_2(VAR_15);
 VAR_12->deadline_mode = FUNC_0(VAR_15);
 VAR_12->skip_sock_check = FUNC_3(VAR_15);

 switch (VAR_12->clockid) {
 case 129:
  VAR_12->get_time = VAR_8;
  break;
 case 130:
  VAR_12->get_time = VAR_5;
  break;
 case 131:
  VAR_12->get_time = VAR_6;
  break;
 case 128:
  VAR_12->get_time = VAR_7;
  break;
 default:
  FUNC_1(VAR_11, "Clockid is not supported");
  return -VAR_1;
 }

 FUNC_11(&VAR_12->watchdog, VAR_9, VAR_12->clockid);

 return 0;
}
