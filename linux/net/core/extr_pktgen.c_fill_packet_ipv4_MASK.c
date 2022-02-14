
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct udphdr {scalar_t__ check; void* len; void* dest; void* source; } ;
struct sk_buff {scalar_t__ csum; int ip_summed; int pkt_type; struct net_device* dev; void* protocol; int priority; int len; int data; } ;
struct pktgen_hdr {int dummy; } ;
struct pktgen_dev {int nr_labels; int vlan_id; int svlan_id; int cur_pkt_size; int pkt_overhead; int cur_udp_src; int cur_udp_dst; int ip_id; int flags; int cur_daddr; int cur_saddr; int tos; int hh; int skb_priority; int vlan_p; int vlan_cfi; int svlan_p; int svlan_cfi; int result; int cur_queue_map; } ;
struct net_device {int features; } ;
struct iphdr {int ihl; int version; int ttl; int daddr; int saddr; void* tot_len; scalar_t__ frag_off; void* id; int protocol; int tos; } ;
typedef int __wsum ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __be32 ;
typedef void* __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,int ,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct iphdr*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct pktgen_dev*) ;
 int FUNC_6 (int *,struct pktgen_dev*) ;
 struct sk_buff* FUNC_7 (struct net_device*,struct pktgen_dev*) ;
 int FUNC_8 (struct pktgen_dev*,struct sk_buff*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct pktgen_dev*,struct sk_buff*,void*) ;
 int FUNC_11 (struct sk_buff*,int ,int,int ) ;
 int * FUNC_12 (struct sk_buff*,int) ;
 void* FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_22(struct net_device *VAR_11,
     struct pktgen_dev *VAR_12)
{
 struct sk_buff *VAR_13 = ((void*)0);
 __u8 *VAR_14;
 struct udphdr *VAR_15;
 int VAR_16, VAR_17;
 struct iphdr *VAR_18;
 __be16 VAR_19 = FUNC_2(VAR_4);
 __be32 *VAR_20;
 __be16 *VAR_21 = ((void*)0);
 __be16 *VAR_22 = ((void*)0);
 __be16 *VAR_23 = ((void*)0);
 __be16 *VAR_24 = ((void*)0);
 u16 VAR_25;

 if (VAR_12->nr_labels)
  VAR_19 = FUNC_2(VAR_5);

 if (VAR_12->vlan_id != 0xffff)
  VAR_19 = FUNC_2(VAR_3);




 FUNC_5(VAR_12);
 VAR_25 = VAR_12->cur_queue_map;

 VAR_13 = FUNC_7(VAR_11, VAR_12);
 if (!VAR_13) {
  FUNC_20(VAR_12->result, "No memory");
  return ((void*)0);
 }

 FUNC_9(VAR_13->data);
 FUNC_14(VAR_13, 16);


 VAR_14 = FUNC_12(VAR_13, 14);
 VAR_20 = FUNC_13(VAR_13, VAR_12->nr_labels * sizeof(__u32));
 if (VAR_12->nr_labels)
  FUNC_6(VAR_20, VAR_12);

 if (VAR_12->vlan_id != 0xffff) {
  if (VAR_12->svlan_id != 0xffff) {
   VAR_23 = FUNC_13(VAR_13, sizeof(__be16));
   *VAR_23 = FUNC_0(VAR_12->svlan_id,
            VAR_12->svlan_cfi,
            VAR_12->svlan_p);
   VAR_24 = FUNC_13(VAR_13,
          sizeof(__be16));
   *VAR_24 = FUNC_2(VAR_3);
  }
  VAR_21 = FUNC_13(VAR_13, sizeof(__be16));
  *VAR_21 = FUNC_0(VAR_12->vlan_id,
          VAR_12->vlan_cfi,
          VAR_12->vlan_p);
  VAR_22 = FUNC_13(VAR_13, sizeof(__be16));
  *VAR_22 = FUNC_2(VAR_4);
 }

 FUNC_15(VAR_13);
 FUNC_16(VAR_13, VAR_13->len);
 VAR_18 = FUNC_13(VAR_13, sizeof(struct iphdr));

 FUNC_18(VAR_13, VAR_13->len);
 VAR_15 = FUNC_13(VAR_13, sizeof(struct udphdr));
 FUNC_17(VAR_13, VAR_25);
 VAR_13->priority = VAR_12->skb_priority;

 FUNC_4(VAR_14, VAR_12->hh, 12);
 *(__be16 *) & VAR_14[12] = VAR_19;


 VAR_16 = VAR_12->cur_pkt_size - 14 - 20 - 8 -
    VAR_12->pkt_overhead;
 if (VAR_16 < 0 || VAR_16 < sizeof(struct pktgen_hdr))
  VAR_16 = sizeof(struct pktgen_hdr);

 VAR_15->source = FUNC_2(VAR_12->cur_udp_src);
 VAR_15->dest = FUNC_2(VAR_12->cur_udp_dst);
 VAR_15->len = FUNC_2(VAR_16 + 8);
 VAR_15->check = 0;

 VAR_18->ihl = 5;
 VAR_18->version = 4;
 VAR_18->ttl = 32;
 VAR_18->tos = VAR_12->tos;
 VAR_18->protocol = VAR_7;
 VAR_18->saddr = VAR_12->cur_saddr;
 VAR_18->daddr = VAR_12->cur_daddr;
 VAR_18->id = FUNC_2(VAR_12->ip_id);
 VAR_12->ip_id++;
 VAR_18->frag_off = 0;
 VAR_17 = 20 + 8 + VAR_16;
 VAR_18->tot_len = FUNC_2(VAR_17);
 FUNC_3(VAR_18);
 VAR_13->protocol = VAR_19;
 VAR_13->dev = VAR_11;
 VAR_13->pkt_type = VAR_10;

 FUNC_8(VAR_12, VAR_13, VAR_16);

 if (!(VAR_12->flags & VAR_6)) {
  VAR_13->ip_summed = VAR_0;
 } else if (VAR_11->features & (VAR_8 | VAR_9)) {
  VAR_13->ip_summed = VAR_1;
  VAR_13->csum = 0;
  FUNC_21(VAR_13, VAR_18->saddr, VAR_18->daddr);
 } else {
  __wsum VAR_26 = FUNC_11(VAR_13, FUNC_19(VAR_13), VAR_16 + 8, 0);


  VAR_15->check = FUNC_1(VAR_18->saddr, VAR_18->daddr,
      VAR_16 + 8, VAR_7, VAR_26);

  if (VAR_15->check == 0)
   VAR_15->check = VAR_2;
 }






 return VAR_13;
}
