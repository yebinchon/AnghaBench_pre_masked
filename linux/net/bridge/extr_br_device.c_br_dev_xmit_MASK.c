
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ protocol; scalar_t__ len; } ;
struct pcpu_sw_netstats {int syncp; int tx_bytes; int tx_packets; } ;
struct nf_br_ops {scalar_t__ (* br_dev_xmit_hook ) (struct sk_buff*) ;} ;
struct net_device {int dummy; } ;
struct net_bridge_mdb_entry {int dummy; } ;
struct net_bridge_fdb_entry {int dst; } ;
struct net_bridge {int stats; } ;
struct nd_msg {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct ethhdr {scalar_t__ h_proto; unsigned char* h_dest; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {scalar_t__ frag_max_size; struct net_device* brdev; } ;
struct TYPE_3__ {scalar_t__ nexthdr; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (struct net_bridge*,int ,struct sk_buff*,int *) ;
 int FUNC_4 (struct sk_buff*,struct net_bridge*,int ,int *) ;
 int FUNC_5 (struct sk_buff*,struct net_bridge*,int ,int *,struct nd_msg*) ;
 struct net_bridge_fdb_entry* FUNC_6 (struct net_bridge*,unsigned char const*,int ) ;
 int FUNC_7 (struct net_bridge*,struct sk_buff*,int ,int,int) ;
 int FUNC_8 (int ,struct sk_buff*,int,int) ;
 struct nd_msg* FUNC_9 (struct sk_buff*,struct nd_msg*) ;
 struct net_bridge_mdb_entry* FUNC_10 (struct net_bridge*,struct sk_buff*,int ) ;
 int FUNC_11 (struct net_bridge_mdb_entry*,struct sk_buff*,int,int) ;
 scalar_t__ FUNC_12 (struct net_bridge*,struct ethhdr*) ;
 scalar_t__ FUNC_13 (struct net_bridge*,int *,struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (struct net_bridge*,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct net_bridge*) ;
 struct ethhdr* FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (int ) ;
 TYPE_1__* FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (unsigned char const*) ;
 scalar_t__ FUNC_21 (unsigned char const*) ;
 int FUNC_22 (struct sk_buff*) ;
 struct net_bridge* FUNC_23 (struct net_device*) ;
 int FUNC_24 (struct net_device*) ;
 int VAR_12 ;
 scalar_t__ FUNC_25 (struct sk_buff*,int) ;
 struct nf_br_ops* FUNC_26 (int ) ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 (struct sk_buff*,int ) ;
 int FUNC_30 (struct sk_buff*) ;
 scalar_t__ FUNC_31 (struct sk_buff*) ;
 struct pcpu_sw_netstats* FUNC_32 (int ) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 scalar_t__ FUNC_35 (int ) ;

netdev_tx_t FUNC_36(struct sk_buff *VAR_13, struct net_device *VAR_14)
{
 struct net_bridge *VAR_15 = FUNC_23(VAR_14);
 struct net_bridge_fdb_entry *VAR_16;
 struct net_bridge_mdb_entry *VAR_17;
 struct pcpu_sw_netstats *VAR_18 = FUNC_32(VAR_15->stats);
 const struct nf_br_ops *VAR_19;
 const unsigned char *VAR_20;
 struct ethhdr *VAR_21;
 u16 VAR_22 = 0;

 FUNC_27();
 VAR_19 = FUNC_26(VAR_12);
 if (VAR_19 && VAR_19->br_dev_xmit_hook(VAR_13)) {
  FUNC_28();
  return VAR_11;
 }

 FUNC_33(&VAR_18->syncp);
 VAR_18->tx_packets++;
 VAR_18->tx_bytes += VAR_13->len;
 FUNC_34(&VAR_18->syncp);

 FUNC_15(VAR_13);
 FUNC_0(VAR_13)->brdev = VAR_14;
 FUNC_0(VAR_13)->frag_max_size = 0;

 FUNC_30(VAR_13);
 VAR_21 = FUNC_17(VAR_13);
 FUNC_29(VAR_13, VAR_6);

 if (!FUNC_3(VAR_15, FUNC_16(VAR_15), VAR_13, &VAR_22))
  goto out;

 if (FUNC_2(VAR_4) &&
     (VAR_21->h_proto == FUNC_18(VAR_7) ||
      VAR_21->h_proto == FUNC_18(VAR_9)) &&
     FUNC_14(VAR_15, VAR_0)) {
  FUNC_4(VAR_13, VAR_15, VAR_22, ((void*)0));
 } else if (FUNC_2(VAR_5) &&
     VAR_13->protocol == FUNC_18(VAR_8) &&
     FUNC_14(VAR_15, VAR_0) &&
     FUNC_25(VAR_13, sizeof(struct ipv6hdr) +
     sizeof(struct nd_msg)) &&
     FUNC_19(VAR_13)->nexthdr == VAR_10) {
   struct nd_msg *VAR_23, VAR_24;

   VAR_23 = FUNC_9(VAR_13, &VAR_24);
   if (VAR_23)
    FUNC_5(VAR_13, VAR_15, VAR_22, ((void*)0), VAR_23);
 }

 VAR_20 = FUNC_17(VAR_13)->h_dest;
 if (FUNC_20(VAR_20)) {
  FUNC_7(VAR_15, VAR_13, VAR_1, 0, 1);
 } else if (FUNC_21(VAR_20)) {
  if (FUNC_35(FUNC_24(VAR_14))) {
   FUNC_7(VAR_15, VAR_13, VAR_2, 0, 1);
   goto out;
  }
  if (FUNC_13(VAR_15, ((void*)0), VAR_13, VAR_22)) {
   FUNC_22(VAR_13);
   goto out;
  }

  VAR_17 = FUNC_10(VAR_15, VAR_13, VAR_22);
  if ((VAR_17 || FUNC_1(VAR_13)) &&
      FUNC_12(VAR_15, FUNC_17(VAR_13)))
   FUNC_11(VAR_17, VAR_13, 0, 1);
  else
   FUNC_7(VAR_15, VAR_13, VAR_2, 0, 1);
 } else if ((VAR_16 = FUNC_6(VAR_15, VAR_20, VAR_22)) != ((void*)0)) {
  FUNC_8(VAR_16->dst, VAR_13, 0, 1);
 } else {
  FUNC_7(VAR_15, VAR_13, VAR_3, 0, 1);
 }
out:
 FUNC_28();
 return VAR_11;
}
