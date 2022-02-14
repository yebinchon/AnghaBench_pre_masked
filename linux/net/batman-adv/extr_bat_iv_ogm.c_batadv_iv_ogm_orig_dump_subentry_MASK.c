
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int orig; scalar_t__ last_seen; } ;
struct batadv_neigh_node {struct batadv_hard_iface* if_incoming; int addr; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct TYPE_2__ {unsigned int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct batadv_hard_iface* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct batadv_neigh_node*,struct batadv_hard_iface*,int *) ;
 int VAR_12 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ VAR_13 ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,unsigned int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct sk_buff *VAR_14, u32 VAR_15, u32 VAR_16,
     struct batadv_priv *VAR_17,
     struct batadv_hard_iface *VAR_18,
     struct batadv_orig_node *VAR_19,
     struct batadv_neigh_node *VAR_20,
     bool VAR_21)
{
 void *VAR_22;
 u8 VAR_23;
 unsigned int VAR_24;

 VAR_24 = FUNC_4(VAR_13 - VAR_19->last_seen);

 if (!FUNC_0(VAR_20, VAR_18, &VAR_23))
  return 0;

 if (VAR_18 != VAR_7 &&
     VAR_18 != VAR_20->if_incoming)
  return 0;

 VAR_22 = FUNC_3(VAR_14, VAR_15, VAR_16, &VAR_12,
     VAR_11, VAR_6);
 if (!VAR_22)
  return -VAR_9;

 if (FUNC_5(VAR_14, VAR_4, VAR_10,
      VAR_19->orig) ||
     FUNC_5(VAR_14, VAR_3, VAR_10,
      VAR_20->addr) ||
     FUNC_7(VAR_14, VAR_1,
   VAR_20->if_incoming->net_dev->ifindex) ||
     FUNC_8(VAR_14, VAR_5, VAR_23) ||
     FUNC_7(VAR_14, VAR_2,
   VAR_24))
  goto nla_put_failure;

 if (VAR_21 && FUNC_6(VAR_14, VAR_0))
  goto nla_put_failure;

 FUNC_2(VAR_14, VAR_22);
 return 0;

 nla_put_failure:
 FUNC_1(VAR_14, VAR_22);
 return -VAR_8;
}
