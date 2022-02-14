
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct sk_buff {int priority; } ;
struct batadv_unicast_tvlv_packet {int dst; int src; scalar_t__ align; void* tvlv_len; scalar_t__ reserved; int ttl; int version; int packet_type; } ;
struct batadv_tvlv_hdr {void* len; void* type; void* version; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct batadv_orig_node* FUNC_0 (struct batadv_priv*,void**) ;
 int FUNC_1 (struct batadv_orig_node*) ;
 int FUNC_2 (struct sk_buff*,struct batadv_orig_node*,int *) ;
 int FUNC_3 (int ,void**) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (unsigned char*,void*,int) ;
 struct sk_buff* FUNC_6 (int *,int) ;
 unsigned char* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;

void FUNC_9(struct batadv_priv *VAR_5, u8 *VAR_6,
         u8 *VAR_7, u8 VAR_8, u8 VAR_9,
         void *VAR_10, u16 VAR_11)
{
 struct batadv_unicast_tvlv_packet *VAR_12;
 struct batadv_tvlv_hdr *VAR_13;
 struct batadv_orig_node *VAR_14;
 struct sk_buff *VAR_15;
 unsigned char *VAR_16;
 unsigned int VAR_17;
 ssize_t VAR_18 = sizeof(*VAR_12);

 VAR_14 = FUNC_0(VAR_5, VAR_7);
 if (!VAR_14)
  return;

 VAR_17 = sizeof(*VAR_13) + VAR_11;

 VAR_15 = FUNC_6(((void*)0), VAR_3 + VAR_18 + VAR_17);
 if (!VAR_15)
  goto out;

 VAR_15->priority = VAR_4;
 FUNC_8(VAR_15, VAR_3);
 VAR_16 = FUNC_7(VAR_15, sizeof(*VAR_12) + VAR_17);
 VAR_12 = (struct batadv_unicast_tvlv_packet *)VAR_16;
 VAR_12->packet_type = VAR_2;
 VAR_12->version = VAR_0;
 VAR_12->ttl = VAR_1;
 VAR_12->reserved = 0;
 VAR_12->tvlv_len = FUNC_4(VAR_17);
 VAR_12->align = 0;
 FUNC_3(VAR_12->src, VAR_6);
 FUNC_3(VAR_12->dst, VAR_7);

 VAR_16 = (unsigned char *)(VAR_12 + 1);
 VAR_13 = (struct batadv_tvlv_hdr *)VAR_16;
 VAR_13->version = VAR_9;
 VAR_13->type = VAR_8;
 VAR_13->len = FUNC_4(VAR_11);
 VAR_16 += sizeof(*VAR_13);
 FUNC_5(VAR_16, VAR_10, VAR_11);

 FUNC_2(VAR_15, VAR_14, ((void*)0));
out:
 FUNC_1(VAR_14);
}
