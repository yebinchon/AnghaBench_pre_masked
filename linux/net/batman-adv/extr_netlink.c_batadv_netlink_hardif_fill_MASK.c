
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct net_device {int dev_addr; int name; int ifindex; } ;
struct batadv_priv {TYPE_1__* soft_iface; } ;
struct TYPE_4__ {int throughput_override; int elp_interval; } ;
struct batadv_hard_iface {scalar_t__ if_status; TYPE_2__ bat_v; struct net_device* net_dev; } ;
typedef enum batadv_nl_commands { ____Placeholder_batadv_nl_commands } batadv_nl_commands ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int VAR_11 ;
 int FUNC_1 (struct netlink_callback*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_12,
          struct batadv_priv *VAR_13,
          struct batadv_hard_iface *VAR_14,
          enum batadv_nl_commands VAR_15,
          u32 VAR_16, u32 VAR_17, int VAR_18,
          struct netlink_callback *VAR_19)
{
 struct net_device *VAR_20 = VAR_14->net_dev;
 void *VAR_21;

 VAR_21 = FUNC_4(VAR_12, VAR_16, VAR_17, &VAR_11, VAR_18, VAR_15);
 if (!VAR_21)
  return -VAR_9;

 if (VAR_19)
  FUNC_1(VAR_19, VAR_21);

 if (FUNC_8(VAR_12, VAR_5,
   VAR_13->soft_iface->ifindex))
  goto nla_put_failure;

 if (FUNC_8(VAR_12, VAR_3,
   VAR_20->ifindex) ||
     FUNC_7(VAR_12, VAR_4,
      VAR_20->name) ||
     FUNC_5(VAR_12, VAR_2, VAR_10,
      VAR_20->dev_addr))
  goto nla_put_failure;

 if (VAR_14->if_status == VAR_7) {
  if (FUNC_6(VAR_12, VAR_0))
   goto nla_put_failure;
 }
 FUNC_3(VAR_12, VAR_21);
 return 0;

nla_put_failure:
 FUNC_2(VAR_12, VAR_21);
 return -VAR_8;
}
