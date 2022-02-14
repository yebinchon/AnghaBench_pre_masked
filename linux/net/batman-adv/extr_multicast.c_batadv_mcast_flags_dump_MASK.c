
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netlink_callback {long* args; int skb; } ;
struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {int soft_iface; } ;
struct TYPE_2__ {int portid; } ;


 TYPE_1__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int,struct netlink_callback*,struct batadv_priv*,long*,long*) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 int FUNC_3 (struct netlink_callback*,struct batadv_hard_iface**) ;
 struct batadv_priv* FUNC_4 (int ) ;

int FUNC_5(struct sk_buff *VAR_0, struct netlink_callback *VAR_1)
{
 struct batadv_hard_iface *VAR_2 = ((void*)0);
 int VAR_3 = FUNC_0(VAR_1->skb).portid;
 struct batadv_priv *VAR_4;
 long *VAR_5 = &VAR_1->args[0];
 long *VAR_6 = &VAR_1->args[1];
 int VAR_7;

 VAR_7 = FUNC_3(VAR_1, &VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_4 = FUNC_4(VAR_2->soft_iface);
 VAR_7 = FUNC_1(VAR_0, VAR_3, VAR_1, VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_2);
 return VAR_7;
}
