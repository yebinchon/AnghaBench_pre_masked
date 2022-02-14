
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; } ;
struct batadv_priv {int dummy; } ;
struct batadv_neigh_node {TYPE_4__* if_incoming; int addr; } ;
struct TYPE_7__ {int tq_avg; } ;
struct batadv_neigh_ifinfo {TYPE_2__ bat_iv; } ;
struct batadv_gw_node {int bandwidth_up; int bandwidth_down; TYPE_5__* orig_node; } ;
struct TYPE_10__ {int orig; } ;
struct TYPE_9__ {TYPE_3__* net_dev; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {int nlmsg_seq; } ;


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
 struct batadv_gw_node* FUNC_0 (struct batadv_priv*) ;
 int FUNC_1 (struct batadv_gw_node*) ;
 struct batadv_neigh_ifinfo* FUNC_2 (struct batadv_neigh_node*,int ) ;
 int FUNC_3 (struct batadv_neigh_ifinfo*) ;
 int FUNC_4 (struct batadv_neigh_node*) ;
 int VAR_13 ;
 struct batadv_neigh_node* FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (struct netlink_callback*,void*) ;
 int FUNC_7 (struct sk_buff*,void*) ;
 int FUNC_8 (struct sk_buff*,void*) ;
 void* FUNC_9 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_14, u32 VAR_15,
       struct netlink_callback *VAR_16,
       struct batadv_priv *VAR_17,
       struct batadv_gw_node *VAR_18)
{
 struct batadv_neigh_ifinfo *VAR_19 = ((void*)0);
 struct batadv_neigh_node *VAR_20;
 struct batadv_gw_node *VAR_21 = ((void*)0);
 int VAR_22 = 0;
 void *VAR_23;

 VAR_20 = FUNC_5(VAR_18->orig_node, VAR_8);
 if (!VAR_20)
  goto out;

 VAR_19 = FUNC_2(VAR_20, VAR_8);
 if (!VAR_19)
  goto out;

 VAR_21 = FUNC_0(VAR_17);

 VAR_23 = FUNC_9(VAR_14, VAR_15, VAR_16->nlh->nlmsg_seq,
     &VAR_13, VAR_12,
     VAR_7);
 if (!VAR_23) {
  VAR_22 = -VAR_10;
  goto out;
 }

 FUNC_6(VAR_16, VAR_23);

 VAR_22 = -VAR_9;

 if (VAR_21 == VAR_18)
  if (FUNC_11(VAR_14, VAR_2)) {
   FUNC_7(VAR_14, VAR_23);
   goto out;
  }

 if (FUNC_10(VAR_14, VAR_4, VAR_11,
      VAR_18->orig_node->orig) ||
     FUNC_14(VAR_14, VAR_6, VAR_19->bat_iv.tq_avg) ||
     FUNC_10(VAR_14, VAR_5, VAR_11,
      VAR_20->addr) ||
     FUNC_12(VAR_14, VAR_3,
      VAR_20->if_incoming->net_dev->name) ||
     FUNC_13(VAR_14, VAR_0,
   VAR_18->bandwidth_down) ||
     FUNC_13(VAR_14, VAR_1,
   VAR_18->bandwidth_up)) {
  FUNC_7(VAR_14, VAR_23);
  goto out;
 }

 FUNC_8(VAR_14, VAR_23);
 VAR_22 = 0;

out:
 if (VAR_21)
  FUNC_1(VAR_21);
 if (VAR_19)
  FUNC_3(VAR_19);
 if (VAR_20)
  FUNC_4(VAR_20);
 return VAR_22;
}
