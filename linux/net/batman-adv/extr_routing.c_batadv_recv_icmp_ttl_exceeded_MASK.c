
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_icmp_packet {scalar_t__ msg_type; int ttl; int orig; int dst; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct batadv_hard_iface*) ;
 struct batadv_orig_node* FUNC_1 (struct batadv_priv*,int ) ;
 int FUNC_2 (struct batadv_orig_node*) ;
 struct batadv_hard_iface* FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (struct sk_buff*,struct batadv_orig_node*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_9(struct batadv_priv *VAR_7,
      struct sk_buff *VAR_8)
{
 struct batadv_hard_iface *VAR_9 = ((void*)0);
 struct batadv_orig_node *VAR_10 = ((void*)0);
 struct batadv_icmp_packet *VAR_11;
 int VAR_12, VAR_13 = VAR_4;

 VAR_11 = (struct batadv_icmp_packet *)VAR_8->data;


 if (VAR_11->msg_type != VAR_0) {
  FUNC_7("Warning - can't forward icmp packet from %pM to %pM: ttl exceeded\n",
    VAR_11->orig, VAR_11->dst);
  goto out;
 }

 VAR_9 = FUNC_3(VAR_7);
 if (!VAR_9)
  goto out;


 VAR_10 = FUNC_1(VAR_7, VAR_11->orig);
 if (!VAR_10)
  goto out;


 if (FUNC_8(VAR_8, VAR_3) < 0)
  goto out;

 VAR_11 = (struct batadv_icmp_packet *)VAR_8->data;

 FUNC_5(VAR_11->dst, VAR_11->orig);
 FUNC_5(VAR_11->orig, VAR_9->net_dev->dev_addr);
 VAR_11->msg_type = VAR_2;
 VAR_11->ttl = VAR_1;

 VAR_12 = FUNC_4(VAR_8, VAR_10, ((void*)0));
 if (VAR_12 == VAR_5)
  VAR_13 = VAR_6;


 VAR_8 = ((void*)0);

out:
 if (VAR_9)
  FUNC_0(VAR_9);
 if (VAR_10)
  FUNC_2(VAR_10);

 FUNC_6(VAR_8);

 return VAR_13;
}
