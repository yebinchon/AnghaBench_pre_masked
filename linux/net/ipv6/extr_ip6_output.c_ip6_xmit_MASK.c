
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int len; int priority; int dev; scalar_t__ ignore_df; int mark; void* protocol; scalar_t__ sk; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {int hop_limit; struct in6_addr daddr; int saddr; int nexthdr; void* payload_len; } ;
struct ipv6_txoptions {scalar_t__ opt_nflen; scalar_t__ opt_flen; } ;
struct ipv6_pinfo {int hop_limit; } ;
struct flowi6 {int saddr; int flowlabel; int flowi6_proto; struct in6_addr daddr; } ;
struct dst_entry {int dev; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ,int ) ;
 int FUNC_1 (struct net*,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct dst_entry*) ;
 int VAR_8 ;
 void* FUNC_6 (int) ;
 struct ipv6_pinfo* FUNC_7 (struct sock const*) ;
 int FUNC_8 (struct net*,struct ipv6_pinfo const*) ;
 int FUNC_9 (struct dst_entry*) ;
 int FUNC_10 (struct dst_entry*) ;
 int FUNC_11 (struct ipv6hdr*,int,int ) ;
 int FUNC_12 (struct net*,struct sk_buff*,int ,int ,struct flowi6*) ;
 struct ipv6hdr* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sock*,int,struct flowi6*,int) ;
 int FUNC_15 (struct sk_buff*,struct ipv6_txoptions*,int *) ;
 int FUNC_16 (struct sk_buff*,struct ipv6_txoptions*,int *,struct in6_addr**,int *) ;
 int FUNC_17 (struct sk_buff*) ;
 struct sk_buff* FUNC_18 (struct sock*,struct sk_buff*) ;
 struct dst_entry* FUNC_19 (struct sk_buff*) ;
 unsigned int FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_23 (struct sk_buff*,unsigned int) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*,scalar_t__) ;
 struct net* FUNC_26 (struct sock const*) ;
 scalar_t__ FUNC_27 (int) ;

int FUNC_28(const struct sock *VAR_9, struct sk_buff *VAR_10, struct flowi6 *VAR_11,
      __u32 VAR_12, struct ipv6_txoptions *VAR_13, int VAR_14, u32 VAR_15)
{
 struct net *VAR_16 = FUNC_26(VAR_9);
 const struct ipv6_pinfo *VAR_17 = FUNC_7(VAR_9);
 struct in6_addr *VAR_18 = &VAR_11->daddr;
 struct dst_entry *VAR_19 = FUNC_19(VAR_10);
 unsigned int VAR_20;
 struct ipv6hdr *VAR_21;
 u8 VAR_22 = VAR_11->flowi6_proto;
 int VAR_23 = VAR_10->len;
 int VAR_24 = -1;
 u32 VAR_25;

 VAR_20 = sizeof(struct ipv6hdr) + FUNC_2(VAR_19->dev);
 if (VAR_13)
  VAR_20 += VAR_13->opt_nflen + VAR_13->opt_flen;

 if (FUNC_27(FUNC_20(VAR_10) < VAR_20)) {
  struct sk_buff *VAR_26 = FUNC_23(VAR_10, VAR_20);
  if (!VAR_26) {
   FUNC_0(VAR_16, FUNC_10(FUNC_19(VAR_10)),
          VAR_5);
   FUNC_17(VAR_10);
   return -VAR_1;
  }
  if (VAR_10->sk)
   FUNC_25(VAR_26, VAR_10->sk);
  FUNC_4(VAR_10);
  VAR_10 = VAR_26;
 }

 if (VAR_13) {
  VAR_23 += VAR_13->opt_nflen + VAR_13->opt_flen;

  if (VAR_13->opt_flen)
   FUNC_15(VAR_10, VAR_13, &VAR_22);

  if (VAR_13->opt_nflen)
   FUNC_16(VAR_10, VAR_13, &VAR_22, &VAR_18,
          &VAR_11->saddr);
 }

 FUNC_22(VAR_10, sizeof(struct ipv6hdr));
 FUNC_24(VAR_10);
 VAR_21 = FUNC_13(VAR_10);




 if (VAR_17)
  VAR_24 = VAR_17->hop_limit;
 if (VAR_24 < 0)
  VAR_24 = FUNC_9(VAR_19);

 FUNC_11(VAR_21, VAR_14, FUNC_12(VAR_16, VAR_10, VAR_11->flowlabel,
    FUNC_8(VAR_16, VAR_17), VAR_11));

 VAR_21->payload_len = FUNC_6(VAR_23);
 VAR_21->nexthdr = VAR_22;
 VAR_21->hop_limit = VAR_24;

 VAR_21->saddr = VAR_11->saddr;
 VAR_21->daddr = *VAR_18;

 VAR_10->protocol = FUNC_6(VAR_2);
 VAR_10->priority = VAR_15;
 VAR_10->mark = VAR_12;

 VAR_25 = FUNC_5(VAR_19);
 if ((VAR_10->len <= VAR_25) || VAR_10->ignore_df || FUNC_21(VAR_10)) {
  FUNC_1(VAR_16, FUNC_10(FUNC_19(VAR_10)),
         VAR_4, VAR_10->len);




  VAR_10 = FUNC_18((struct sock *)VAR_9, VAR_10);
  if (FUNC_27(!VAR_10))
   return 0;




  return FUNC_3(VAR_6, VAR_7,
          VAR_16, (struct sock *)VAR_9, VAR_10, ((void*)0), VAR_19->dev,
          VAR_8);
 }

 VAR_10->dev = VAR_19->dev;



 FUNC_14((struct sock *)VAR_9, VAR_0, VAR_11, VAR_25);

 FUNC_0(VAR_16, FUNC_10(FUNC_19(VAR_10)), VAR_3);
 FUNC_17(VAR_10);
 return -VAR_0;
}
