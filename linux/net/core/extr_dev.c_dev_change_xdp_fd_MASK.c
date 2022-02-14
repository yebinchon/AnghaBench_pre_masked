
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device_ops {scalar_t__ ndo_bpf; } ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct bpf_prog {TYPE_1__* aux; } ;
typedef enum bpf_netdev_command { ____Placeholder_bpf_netdev_command } bpf_netdev_command ;
typedef scalar_t__ bpf_op_t ;
struct TYPE_2__ {scalar_t__ id; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int FUNC_3 (struct bpf_prog*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct net_device*,scalar_t__,int) ;
 struct bpf_prog* FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct bpf_prog*) ;
 int FUNC_8 (struct net_device*,scalar_t__,struct netlink_ext_ack*,scalar_t__,struct bpf_prog*) ;
 scalar_t__ VAR_11 ;

int FUNC_9(struct net_device *VAR_12, struct netlink_ext_ack *VAR_13,
        int VAR_14, u32 VAR_15)
{
 const struct net_device_ops *VAR_16 = VAR_12->netdev_ops;
 enum bpf_netdev_command VAR_17;
 struct bpf_prog *VAR_18 = ((void*)0);
 bpf_op_t VAR_19, VAR_20;
 bool VAR_21;
 int VAR_22;

 FUNC_0();

 VAR_21 = VAR_15 & VAR_6;
 VAR_17 = VAR_21 ? VAR_10 : VAR_9;

 VAR_19 = VAR_20 = VAR_16->ndo_bpf;
 if (!VAR_19 && (VAR_15 & (VAR_5 | VAR_6))) {
  FUNC_2(VAR_13, "underlying driver does not support XDP in native mode");
  return -VAR_4;
 }
 if (!VAR_19 || (VAR_15 & VAR_7))
  VAR_19 = VAR_11;
 if (VAR_19 == VAR_20)
  VAR_20 = VAR_11;

 if (VAR_14 >= 0) {
  u32 VAR_23;

  if (!VAR_21 && FUNC_4(VAR_12, VAR_20, VAR_9)) {
   FUNC_2(VAR_13, "native and generic XDP can't be active at the same time");
   return -VAR_2;
  }

  VAR_23 = FUNC_4(VAR_12, VAR_19, VAR_17);
  if ((VAR_15 & VAR_8) && VAR_23) {
   FUNC_2(VAR_13, "XDP program already attached");
   return -VAR_1;
  }

  VAR_18 = FUNC_5(VAR_14, VAR_0,
          VAR_19 == VAR_16->ndo_bpf);
  if (FUNC_1(VAR_18))
   return FUNC_3(VAR_18);

  if (!VAR_21 && FUNC_6(VAR_18->aux)) {
   FUNC_2(VAR_13, "using device-bound program without HW_MODE flag is not supported");
   FUNC_7(VAR_18);
   return -VAR_3;
  }


  if (VAR_18->aux->id && VAR_18->aux->id == VAR_23) {
   FUNC_7(VAR_18);
   return 0;
  }
 } else {
  if (!FUNC_4(VAR_12, VAR_19, VAR_17))
   return 0;
 }

 VAR_22 = FUNC_8(VAR_12, VAR_19, VAR_13, VAR_15, VAR_18);
 if (VAR_22 < 0 && VAR_18)
  FUNC_7(VAR_18);

 return VAR_22;
}
