
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taprio_sched {int clockid; int tk_offset; int flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {struct ethtool_ops* ethtool_ops; } ;
struct ethtool_ts_info {int phc_index; int cmd; } ;
struct ethtool_ops {int (* get_ts_info ) (struct net_device*,struct ethtool_ts_info*) ;} ;
struct Qdisc {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct nlattr*) ;
 struct net_device* FUNC_3 (struct Qdisc*) ;
 struct taprio_sched* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct net_device*,struct ethtool_ts_info*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_8, struct nlattr **VAR_9,
    struct netlink_ext_ack *VAR_10)
{
 struct taprio_sched *VAR_11 = FUNC_4(VAR_8);
 struct net_device *VAR_12 = FUNC_3(VAR_8);
 int VAR_13 = -VAR_0;

 if (FUNC_0(VAR_11->flags)) {
  const struct ethtool_ops *VAR_14 = VAR_12->ethtool_ops;
  struct ethtool_ts_info VAR_15 = {
   .cmd = VAR_2,
   .phc_index = -1,
  };

  if (VAR_9[VAR_3]) {
   FUNC_1(VAR_10,
           "The 'clockid' cannot be specified for full offload");
   goto out;
  }

  if (VAR_14 && VAR_14->get_ts_info)
   VAR_13 = VAR_14->get_ts_info(VAR_12, &VAR_15);

  if (VAR_13 || VAR_15.phc_index < 0) {
   FUNC_1(VAR_10,
           "Device does not have a PTP clock");
   VAR_13 = -VAR_1;
   goto out;
  }
 } else if (VAR_9[VAR_3]) {
  int VAR_16 = FUNC_2(VAR_9[VAR_3]);




  if (VAR_16 < 0 ||
      (VAR_11->clockid != -1 && VAR_11->clockid != VAR_16)) {
   FUNC_1(VAR_10,
           "Changing the 'clockid' of a running schedule is not supported");
   VAR_13 = -VAR_1;
   goto out;
  }

  switch (VAR_16) {
  case 129:
   VAR_11->tk_offset = VAR_6;
   break;
  case 130:
   VAR_11->tk_offset = VAR_5;
   break;
  case 131:
   VAR_11->tk_offset = VAR_4;
   break;
  case 128:
   VAR_11->tk_offset = VAR_7;
   break;
  default:
   FUNC_1(VAR_10, "Invalid 'clockid'");
   VAR_13 = -VAR_0;
   goto out;
  }

  VAR_11->clockid = VAR_16;
 } else {
  FUNC_1(VAR_10, "Specifying a 'clockid' is mandatory");
  goto out;
 }


 VAR_13 = 0;

out:
 return VAR_13;
}
