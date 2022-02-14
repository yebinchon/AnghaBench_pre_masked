
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; int dev_addr; int name; } ;
struct TYPE_12__ {int sel_class; int mode; int bandwidth_up; int bandwidth_down; } ;
struct TYPE_8__ {int group; } ;
struct TYPE_9__ {TYPE_2__ claim_dest; } ;
struct TYPE_7__ {int vn; } ;
struct batadv_priv {int isolation_mark; int isolation_mark_mask; int orig_interval; int network_coding; int multicast_fanout; int multicast_mode; int log_level; int hop_penalty; TYPE_6__ gw; TYPE_5__* algo_ops; int fragmentation; int distributed_arp_table; int bridge_loop_avoidance; int bonding; int aggregated_ogms; TYPE_3__ bla; TYPE_1__ tt; struct net_device* soft_iface; } ;
struct batadv_hard_iface {scalar_t__ if_status; struct net_device* net_dev; } ;
typedef enum batadv_nl_commands { ____Placeholder_batadv_nl_commands } batadv_nl_commands ;
struct TYPE_10__ {scalar_t__ is_eligible; scalar_t__ get_best_gw_node; } ;
struct TYPE_11__ {TYPE_4__ gw; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct batadv_priv*) ;
 int VAR_32 ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct batadv_priv*) ;
 struct batadv_hard_iface* FUNC_4 (struct batadv_priv*) ;
 int FUNC_5 (struct sk_buff*,void*) ;
 int FUNC_6 (struct sk_buff*,void*) ;
 void* FUNC_7 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_33,
        struct batadv_priv *VAR_34,
        enum batadv_nl_commands VAR_35,
        u32 VAR_36, u32 VAR_37, int VAR_38)
{
 struct net_device *VAR_39 = VAR_34->soft_iface;
 struct batadv_hard_iface *VAR_40 = ((void*)0);
 struct net_device *VAR_41;
 void *VAR_42;

 VAR_42 = FUNC_7(VAR_33, VAR_36, VAR_37, &VAR_32, VAR_38, VAR_35);
 if (!VAR_42)
  return -VAR_30;

 if (FUNC_9(VAR_33, VAR_26, VAR_28) ||
     FUNC_9(VAR_33, VAR_1,
      VAR_34->algo_ops->name) ||
     FUNC_11(VAR_33, VAR_19, VAR_39->ifindex) ||
     FUNC_9(VAR_33, VAR_20, VAR_39->name) ||
     FUNC_8(VAR_33, VAR_18, VAR_31,
      VAR_39->dev_addr) ||
     FUNC_12(VAR_33, VAR_25,
         (u8)FUNC_0(&VAR_34->tt.vn)))
  goto nla_put_failure;







 if (FUNC_2(VAR_33, VAR_34))
  goto nla_put_failure;

 VAR_40 = FUNC_4(VAR_34);
 if (VAR_40 && VAR_40->if_status == VAR_27) {
  VAR_41 = VAR_40->net_dev;

  if (FUNC_11(VAR_33, VAR_12,
    VAR_41->ifindex) ||
      FUNC_9(VAR_33, VAR_13,
       VAR_41->name) ||
      FUNC_8(VAR_33, VAR_11, VAR_31,
       VAR_41->dev_addr))
   goto nla_put_failure;
 }

 if (FUNC_12(VAR_33, VAR_0,
         !!FUNC_0(&VAR_34->aggregated_ogms)))
  goto nla_put_failure;

 if (FUNC_3(VAR_33, VAR_34))
  goto nla_put_failure;

 if (FUNC_11(VAR_33, VAR_15,
   VAR_34->isolation_mark))
  goto nla_put_failure;

 if (FUNC_11(VAR_33, VAR_16,
   VAR_34->isolation_mark_mask))
  goto nla_put_failure;

 if (FUNC_12(VAR_33, VAR_3,
         !!FUNC_0(&VAR_34->bonding)))
  goto nla_put_failure;
 if (FUNC_12(VAR_33, VAR_6,
         !!FUNC_0(&VAR_34->fragmentation)))
  goto nla_put_failure;

 if (FUNC_11(VAR_33, VAR_7,
   FUNC_0(&VAR_34->gw.bandwidth_down)))
  goto nla_put_failure;

 if (FUNC_11(VAR_33, VAR_8,
   FUNC_0(&VAR_34->gw.bandwidth_up)))
  goto nla_put_failure;

 if (FUNC_12(VAR_33, VAR_9,
         FUNC_0(&VAR_34->gw.mode)))
  goto nla_put_failure;

 if (VAR_34->algo_ops->gw.get_best_gw_node &&
     VAR_34->algo_ops->gw.is_eligible) {



  if (FUNC_11(VAR_33, VAR_10,
    FUNC_0(&VAR_34->gw.sel_class)))
   goto nla_put_failure;
 }

 if (FUNC_12(VAR_33, VAR_14,
         FUNC_0(&VAR_34->hop_penalty)))
  goto nla_put_failure;
 if (FUNC_11(VAR_33, VAR_24,
   FUNC_0(&VAR_34->orig_interval)))
  goto nla_put_failure;

 if (VAR_40)
  FUNC_1(VAR_40);

 FUNC_6(VAR_33, VAR_42);
 return 0;

nla_put_failure:
 if (VAR_40)
  FUNC_1(VAR_40);

 FUNC_5(VAR_33, VAR_42);
 return -VAR_29;
}
