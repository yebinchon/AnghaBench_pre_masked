
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; int len; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_icmp_tp_packet {int dummy; } ;
struct batadv_icmp_header {int msg_type; int ttl; int orig; int dst; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct TYPE_2__ {int dev_addr; } ;






 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct batadv_hard_iface*) ;
 struct batadv_orig_node* FUNC_1 (struct batadv_priv*,int ) ;
 int FUNC_2 (struct batadv_orig_node*) ;
 struct batadv_hard_iface* FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (struct sk_buff*,struct batadv_orig_node*,int *) ;
 int FUNC_5 (struct batadv_icmp_header*,int ) ;
 int FUNC_6 (struct batadv_priv*,struct sk_buff*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct batadv_priv *VAR_5,
          struct sk_buff *VAR_6)
{
 struct batadv_hard_iface *VAR_7 = ((void*)0);
 struct batadv_orig_node *VAR_8 = ((void*)0);
 struct batadv_icmp_header *VAR_9;
 int VAR_10, VAR_11 = VAR_2;

 VAR_9 = (struct batadv_icmp_header *)VAR_6->data;

 switch (VAR_9->msg_type) {
 case 131:
 case 132:
 case 128:

  if (FUNC_11(VAR_6) < 0)
   break;

  FUNC_5(VAR_9, VAR_6->len);
  break;
 case 130:

  VAR_7 = FUNC_3(VAR_5);
  if (!VAR_7)
   goto out;


  VAR_8 = FUNC_1(VAR_5, VAR_9->orig);
  if (!VAR_8)
   goto out;


  if (FUNC_10(VAR_6, VAR_1) < 0)
   goto out;

  VAR_9 = (struct batadv_icmp_header *)VAR_6->data;

  FUNC_7(VAR_9->dst, VAR_9->orig);
  FUNC_7(VAR_9->orig, VAR_7->net_dev->dev_addr);
  VAR_9->msg_type = 131;
  VAR_9->ttl = VAR_0;

  VAR_10 = FUNC_4(VAR_6, VAR_8, ((void*)0));
  if (VAR_10 == VAR_4)
   VAR_11 = VAR_3;


  VAR_6 = ((void*)0);
  break;
 case 129:
  if (!FUNC_9(VAR_6, sizeof(struct batadv_icmp_tp_packet)))
   goto out;

  FUNC_6(VAR_5, VAR_6);
  VAR_11 = VAR_3;

  VAR_6 = ((void*)0);
  goto out;
 default:

  goto out;
 }
out:
 if (VAR_7)
  FUNC_0(VAR_7);
 if (VAR_8)
  FUNC_2(VAR_8);

 FUNC_8(VAR_6);

 return VAR_11;
}
