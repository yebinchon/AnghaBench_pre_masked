
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {TYPE_1__* net_dev; int orig; } ;
struct batadv_icmp_tp_packet {int uid; int timestamp; int seqno; int session; int subtype; int orig; int dst; int msg_type; int ttl; int version; int packet_type; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; int orig; } ;
typedef int __be32 ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct batadv_orig_node*) ;
 struct batadv_orig_node* FUNC_1 (struct batadv_priv*,int const*) ;
 int FUNC_2 (struct batadv_orig_node*) ;
 struct batadv_orig_node* FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (struct sk_buff*,struct batadv_orig_node*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct batadv_orig_node*) ;
 int FUNC_8 (int ,int const*,int) ;
 struct sk_buff* FUNC_9 (int *,scalar_t__) ;
 struct batadv_icmp_tp_packet* FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct batadv_priv *VAR_9, const u8 *VAR_10,
         u32 VAR_11, __be32 VAR_12, const u8 *VAR_13,
         int VAR_14)
{
 struct batadv_hard_iface *VAR_15 = ((void*)0);
 struct batadv_orig_node *VAR_16;
 struct batadv_icmp_tp_packet *VAR_17;
 struct sk_buff *VAR_18;
 int VAR_19, VAR_20;

 VAR_16 = FUNC_1(VAR_9, VAR_10);
 if (FUNC_12(!VAR_16)) {
  VAR_20 = VAR_4;
  goto out;
 }

 VAR_15 = FUNC_3(VAR_9);
 if (FUNC_12(!VAR_15)) {
  VAR_20 = VAR_4;
  goto out;
 }

 VAR_18 = FUNC_9(((void*)0), sizeof(*VAR_17) + VAR_7);
 if (FUNC_12(!VAR_18)) {
  VAR_20 = VAR_5;
  goto out;
 }

 FUNC_11(VAR_18, VAR_7);
 VAR_17 = FUNC_10(VAR_18, sizeof(*VAR_17));
 VAR_17->packet_type = VAR_1;
 VAR_17->version = VAR_0;
 VAR_17->ttl = VAR_6;
 VAR_17->msg_type = VAR_2;
 FUNC_5(VAR_17->dst, VAR_16->orig);
 FUNC_5(VAR_17->orig, VAR_15->net_dev->dev_addr);
 VAR_17->uid = VAR_14;

 VAR_17->subtype = VAR_3;
 FUNC_8(VAR_17->session, VAR_13, sizeof(VAR_17->session));
 VAR_17->seqno = FUNC_6(VAR_11);
 VAR_17->timestamp = VAR_12;


 VAR_19 = FUNC_4(VAR_18, VAR_16, ((void*)0));
 if (FUNC_12(VAR_19 < 0) || VAR_19 == VAR_8) {
  VAR_20 = VAR_4;
  goto out;
 }
 VAR_20 = 0;

out:
 if (FUNC_7(VAR_16))
  FUNC_2(VAR_16);
 if (FUNC_7(VAR_15))
  FUNC_0(VAR_15);

 return VAR_20;
}
