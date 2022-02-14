
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
struct batadv_hard_iface {scalar_t__ if_status; } ;
struct TYPE_5__ {int (* dump ) (struct sk_buff*,struct netlink_callback*,struct batadv_priv*) ;} ;
struct TYPE_6__ {TYPE_2__ gw; } ;
struct TYPE_4__ {int sk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct batadv_hard_iface*) ;
 int FUNC_1 (int ,int ) ;
 struct batadv_hard_iface* FUNC_2 (struct batadv_priv*) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct net*,int) ;
 int FUNC_5 (struct net_device*) ;
 struct batadv_priv* FUNC_6 (struct net_device*) ;
 struct net* FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,struct netlink_callback*,struct batadv_priv*) ;

int FUNC_9(struct sk_buff *VAR_6, struct netlink_callback *VAR_7)
{
 struct batadv_hard_iface *VAR_8 = ((void*)0);
 struct net *VAR_9 = FUNC_7(VAR_7->skb->sk);
 struct net_device *VAR_10;
 struct batadv_priv *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(VAR_7->nlh,
          VAR_0);
 if (!VAR_12)
  return -VAR_2;

 VAR_10 = FUNC_4(VAR_9, VAR_12);
 if (!VAR_10 || !FUNC_3(VAR_10)) {
  VAR_13 = -VAR_3;
  goto out;
 }

 VAR_11 = FUNC_6(VAR_10);

 VAR_8 = FUNC_2(VAR_11);
 if (!VAR_8 || VAR_8->if_status != VAR_1) {
  VAR_13 = -VAR_4;
  goto out;
 }

 if (!VAR_11->algo_ops->gw.dump) {
  VAR_13 = -VAR_5;
  goto out;
 }

 VAR_11->algo_ops->gw.dump(VAR_6, VAR_7, VAR_11);

 VAR_13 = VAR_6->len;

out:
 if (VAR_8)
  FUNC_0(VAR_8);
 if (VAR_10)
  FUNC_5(VAR_10);

 return VAR_13;
}
