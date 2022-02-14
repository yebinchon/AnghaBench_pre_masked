
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct netlink_callback {int nlh; TYPE_1__* skb; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct batadv_priv {TYPE_3__* algo_ops; } ;
struct batadv_hard_iface {scalar_t__ if_status; struct net_device* soft_iface; } ;
struct TYPE_5__ {int (* dump ) (struct sk_buff*,struct netlink_callback*,struct batadv_priv*,struct batadv_hard_iface*) ;} ;
struct TYPE_6__ {TYPE_2__ orig; } ;
struct TYPE_4__ {int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct batadv_hard_iface* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct batadv_hard_iface* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 int FUNC_2 (int ,int ) ;
 struct batadv_hard_iface* FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct net*,int) ;
 int FUNC_6 (struct net_device*) ;
 struct batadv_priv* FUNC_7 (struct net_device*) ;
 struct net* FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,struct netlink_callback*,struct batadv_priv*,struct batadv_hard_iface*) ;

int FUNC_10(struct sk_buff *VAR_8, struct netlink_callback *VAR_9)
{
 struct net *VAR_10 = FUNC_8(VAR_9->skb->sk);
 struct net_device *VAR_11;
 struct net_device *VAR_12 = ((void*)0);
 struct batadv_hard_iface *VAR_13 = VAR_3;
 struct batadv_priv *VAR_14;
 struct batadv_hard_iface *VAR_15 = ((void*)0);
 int VAR_16;
 int VAR_17, VAR_18;

 VAR_17 = FUNC_2(VAR_9->nlh, VAR_1);
 if (!VAR_17)
  return -VAR_4;

 VAR_11 = FUNC_5(VAR_10, VAR_17);
 if (!VAR_11 || !FUNC_4(VAR_11)) {
  VAR_16 = -VAR_5;
  goto out;
 }

 VAR_14 = FUNC_7(VAR_11);

 VAR_15 = FUNC_3(VAR_14);
 if (!VAR_15 || VAR_15->if_status != VAR_2) {
  VAR_16 = -VAR_6;
  goto out;
 }

 VAR_18 = FUNC_2(VAR_9->nlh,
        VAR_0);
 if (VAR_18) {
  VAR_12 = FUNC_5(VAR_10, VAR_18);
  if (VAR_12)
   VAR_13 = FUNC_0(VAR_12);

  if (!VAR_13) {
   VAR_16 = -VAR_5;
   goto out;
  }

  if (VAR_13->soft_iface != VAR_11) {
   VAR_16 = -VAR_6;
   goto out;
  }
 }

 if (!VAR_14->algo_ops->orig.dump) {
  VAR_16 = -VAR_7;
  goto out;
 }

 VAR_14->algo_ops->orig.dump(VAR_8, VAR_9, VAR_14, VAR_13);

 VAR_16 = VAR_8->len;

 out:
 if (VAR_13)
  FUNC_1(VAR_13);
 if (VAR_12)
  FUNC_6(VAR_12);
 if (VAR_15)
  FUNC_1(VAR_15);
 if (VAR_11)
  FUNC_6(VAR_11);

 return VAR_16;
}
