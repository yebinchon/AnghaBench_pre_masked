
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_callback {int nlh; TYPE_1__* skb; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {scalar_t__ if_status; } ;
struct TYPE_2__ {int sk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct batadv_hard_iface*) ;
 int FUNC_1 (int ,int ) ;
 struct batadv_hard_iface* FUNC_2 (struct batadv_priv*) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct net*,int) ;
 int FUNC_5 (struct net_device*) ;
 struct batadv_priv* FUNC_6 (struct net_device*) ;
 struct net* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct netlink_callback *VAR_5,
     struct batadv_hard_iface **VAR_6)
{
 struct batadv_hard_iface *VAR_7 = ((void*)0);
 struct net *VAR_8 = FUNC_7(VAR_5->skb->sk);
 struct net_device *VAR_9;
 struct batadv_priv *VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_1(VAR_5->nlh, VAR_0);
 if (!VAR_11)
  return -VAR_2;

 VAR_9 = FUNC_4(VAR_8, VAR_11);
 if (!VAR_9 || !FUNC_3(VAR_9)) {
  VAR_12 = -VAR_3;
  goto out;
 }

 VAR_10 = FUNC_6(VAR_9);

 VAR_7 = FUNC_2(VAR_10);
 if (!VAR_7 || VAR_7->if_status != VAR_1) {
  VAR_12 = -VAR_4;
  goto out;
 }

out:
 if (VAR_9)
  FUNC_5(VAR_9);

 if (!VAR_12 && VAR_6)
  *VAR_6 = VAR_7;
 else if (VAR_7)
  FUNC_0(VAR_7);

 return VAR_12;
}
