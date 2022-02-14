
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tcphdr {unsigned int doff; int ack; int rst; int flowi6_oif; int flowi6_mark; int flowi6_uid; int source; int fl6_sport; int dest; int fl6_dport; int daddr; int flowi6_proto; int saddr; int flowlabel; int window; void* ack_seq; void* seq; } ;
struct tcp_md5sig_key {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_mark; } ;
struct sk_buff {int skb_iif; int mark; int tstamp; scalar_t__ csum; int ip_summed; } ;
struct TYPE_5__ {struct sock* tcp_sk; } ;
struct net {TYPE_1__ ipv6; } ;
struct ipv6hdr {int dummy; } ;
struct flowi6 {unsigned int doff; int ack; int rst; int flowi6_oif; int flowi6_mark; int flowi6_uid; int source; int fl6_sport; int dest; int fl6_dport; int daddr; int flowi6_proto; int saddr; int flowlabel; int window; void* ack_seq; void* seq; } ;
struct dst_entry {int dummy; } ;
typedef int fl6 ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __be32 ;
struct TYPE_8__ {int tw_txhash; int tw_mark; } ;
struct TYPE_7__ {int daddr; int saddr; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct dst_entry*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (struct sk_buff*,int *,int *) ;
 struct sk_buff* FUNC_4 (scalar_t__,int ) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (struct tcphdr*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 TYPE_4__* FUNC_9 (struct sock const*) ;
 struct dst_entry* FUNC_10 (struct sock*,struct tcphdr*,int *) ;
 int FUNC_11 (struct sock*,struct sk_buff*,struct tcphdr*,int ,int *,int ,int) ;
 TYPE_3__* FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct tcphdr*,int ,int) ;
 scalar_t__ FUNC_15 (struct net*,int) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_18 (struct sock const*) ;
 TYPE_2__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,struct dst_entry*) ;
 struct tcphdr* FUNC_21 (struct sk_buff*,unsigned int) ;
 int FUNC_22 (struct sk_buff*,scalar_t__) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*,int ,int ) ;
 struct net* FUNC_25 (struct sock const*) ;
 int FUNC_26 (struct net*,struct sock const*) ;
 struct tcphdr* FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (struct sock const*) ;
 int FUNC_29 (struct sk_buff*) ;
 int FUNC_30 (int *,struct tcp_md5sig_key*,int *,int *,struct tcphdr*) ;

__attribute__((used)) static void FUNC_31(const struct sock *VAR_15, struct sk_buff *VAR_16, u32 VAR_17,
     u32 VAR_18, u32 VAR_19, u32 VAR_20, u32 VAR_21,
     int VAR_22, struct tcp_md5sig_key *VAR_23, int VAR_24,
     u8 VAR_25, __be32 VAR_26, u32 VAR_27)
{
 const struct tcphdr *VAR_28 = FUNC_27(VAR_16);
 struct tcphdr *VAR_29;
 struct sk_buff *VAR_30;
 struct flowi6 VAR_31;
 struct net *VAR_32 = VAR_15 ? FUNC_25(VAR_15) : FUNC_5(FUNC_19(VAR_16)->dev);
 struct sock *VAR_33 = VAR_32->ipv6.tcp_sk;
 unsigned int VAR_34 = sizeof(struct tcphdr);
 struct dst_entry *VAR_35;
 __be32 *VAR_36;
 __u32 VAR_37 = 0;

 if (VAR_21)
  VAR_34 += VAR_8;





 VAR_30 = FUNC_4(VAR_3 + sizeof(struct ipv6hdr) + VAR_34,
    VAR_1);
 if (!VAR_30)
  return;

 FUNC_22(VAR_30, VAR_3 + sizeof(struct ipv6hdr) + VAR_34);

 VAR_29 = FUNC_21(VAR_30, VAR_34);
 FUNC_23(VAR_30);


 FUNC_14(VAR_29, 0, sizeof(*VAR_29));
 VAR_29->dest = VAR_28->source;
 VAR_29->source = VAR_28->dest;
 VAR_29->doff = VAR_34 / 4;
 VAR_29->seq = FUNC_7(VAR_17);
 VAR_29->ack_seq = FUNC_7(VAR_18);
 VAR_29->ack = !VAR_24 || !VAR_28->ack;
 VAR_29->rst = VAR_24;
 VAR_29->window = FUNC_8(VAR_19);

 VAR_36 = (__be32 *)(VAR_29 + 1);

 if (VAR_21) {
  *VAR_36++ = FUNC_7((VAR_10 << 24) | (VAR_10 << 16) |
    (VAR_11 << 8) | VAR_7);
  *VAR_36++ = FUNC_7(VAR_20);
  *VAR_36++ = FUNC_7(VAR_21);
 }
 FUNC_14(&VAR_31, 0, sizeof(VAR_31));
 VAR_31 = FUNC_12(VAR_16)->saddr;
 VAR_31 = FUNC_12(VAR_16)->daddr;
 VAR_31 = VAR_26;

 VAR_30->ip_summed = VAR_0;
 VAR_30->csum = 0;

 FUNC_3(VAR_30, &VAR_31, &VAR_31);

 VAR_31 = VAR_2;
 if (FUNC_16(&VAR_31) && !VAR_22)
  VAR_31 = FUNC_29(VAR_16);
 else {
  if (!VAR_22 && FUNC_15(VAR_32, VAR_16->skb_iif))
   VAR_22 = VAR_16->skb_iif;

  VAR_31 = VAR_22;
 }

 if (VAR_15) {
  if (VAR_15->sk_state == VAR_14) {
   VAR_37 = FUNC_9(VAR_15)->tw_mark;

   FUNC_24(VAR_30, FUNC_9(VAR_15)->tw_txhash,
         VAR_4);
  } else {
   VAR_37 = VAR_15->sk_mark;
  }
  VAR_30->tstamp = FUNC_28(VAR_15);
 }
 VAR_31 = FUNC_0(VAR_32, VAR_16->mark) ?: VAR_37;
 VAR_31 = VAR_29->dest;
 VAR_31 = VAR_29->source;
 VAR_31 = FUNC_26(VAR_32, VAR_15 && FUNC_18(VAR_15) ? VAR_15 : ((void*)0));
 FUNC_17(VAR_16, FUNC_6(&VAR_31));





 VAR_35 = FUNC_10(VAR_33, &VAR_31, ((void*)0));
 if (!FUNC_1(VAR_35)) {
  FUNC_20(VAR_30, VAR_35);
  FUNC_11(VAR_33, VAR_30, &VAR_31, VAR_31, ((void*)0), VAR_25,
    VAR_27);
  FUNC_2(VAR_32, VAR_13);
  if (VAR_24)
   FUNC_2(VAR_32, VAR_12);
  return;
 }

 FUNC_13(VAR_30);
}
