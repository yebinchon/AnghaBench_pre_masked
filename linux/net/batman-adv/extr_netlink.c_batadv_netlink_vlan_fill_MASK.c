
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct batadv_softif_vlan {int vid; int ap_isolation; } ;
struct batadv_priv {TYPE_1__* soft_iface; } ;
typedef enum batadv_nl_commands { ____Placeholder_batadv_nl_commands } batadv_nl_commands ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_7,
        struct batadv_priv *VAR_8,
        struct batadv_softif_vlan *VAR_9,
        enum batadv_nl_commands VAR_10,
        u32 VAR_11, u32 VAR_12, int VAR_13)
{
 void *VAR_14;

 VAR_14 = FUNC_3(VAR_7, VAR_11, VAR_12, &VAR_6, VAR_13, VAR_10);
 if (!VAR_14)
  return -VAR_4;

 if (FUNC_4(VAR_7, VAR_1,
   VAR_8->soft_iface->ifindex))
  goto nla_put_failure;

 if (FUNC_4(VAR_7, VAR_2, VAR_9->vid & VAR_5))
  goto nla_put_failure;

 if (FUNC_5(VAR_7, VAR_0,
         !!FUNC_0(&VAR_9->ap_isolation)))
  goto nla_put_failure;

 FUNC_2(VAR_7, VAR_14);
 return 0;

nla_put_failure:
 FUNC_1(VAR_7, VAR_14);
 return -VAR_3;
}
