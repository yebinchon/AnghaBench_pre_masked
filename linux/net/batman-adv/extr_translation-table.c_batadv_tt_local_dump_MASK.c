
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct netlink_callback {int* args; int nlh; TYPE_3__* skb; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {struct batadv_hashtable* local_hash; } ;
struct batadv_priv {TYPE_1__ tt; } ;
struct batadv_hashtable {int size; } ;
struct batadv_hard_iface {scalar_t__ if_status; } ;
struct TYPE_6__ {int sk; } ;
struct TYPE_5__ {int portid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 int FUNC_2 (int ,int ) ;
 struct batadv_hard_iface* FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int,struct netlink_callback*,struct batadv_priv*,struct batadv_hashtable*,int,int*) ;
 struct net_device* FUNC_6 (struct net*,int) ;
 int FUNC_7 (struct net_device*) ;
 struct batadv_priv* FUNC_8 (struct net_device*) ;
 struct net* FUNC_9 (int ) ;

int FUNC_10(struct sk_buff *VAR_5, struct netlink_callback *VAR_6)
{
 struct net *VAR_7 = FUNC_9(VAR_6->skb->sk);
 struct net_device *VAR_8;
 struct batadv_priv *VAR_9;
 struct batadv_hard_iface *VAR_10 = ((void*)0);
 struct batadv_hashtable *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = VAR_6->args[0];
 int VAR_15 = VAR_6->args[1];
 int VAR_16 = FUNC_0(VAR_6->skb).portid;

 VAR_13 = FUNC_2(VAR_6->nlh, VAR_0);
 if (!VAR_13)
  return -VAR_2;

 VAR_8 = FUNC_6(VAR_7, VAR_13);
 if (!VAR_8 || !FUNC_4(VAR_8)) {
  VAR_12 = -VAR_3;
  goto out;
 }

 VAR_9 = FUNC_8(VAR_8);

 VAR_10 = FUNC_3(VAR_9);
 if (!VAR_10 || VAR_10->if_status != VAR_1) {
  VAR_12 = -VAR_4;
  goto out;
 }

 VAR_11 = VAR_9->tt.local_hash;

 while (VAR_14 < VAR_11->size) {
  if (FUNC_5(VAR_5, VAR_16, VAR_6, VAR_9,
      VAR_11, VAR_14, &VAR_15))
   break;

  VAR_14++;
 }

 VAR_12 = VAR_5->len;

 out:
 if (VAR_10)
  FUNC_1(VAR_10);
 if (VAR_8)
  FUNC_7(VAR_8);

 VAR_6->args[0] = VAR_14;
 VAR_6->args[1] = VAR_15;

 return VAR_12;
}
