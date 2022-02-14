
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int sk_priority; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; scalar_t__ len; int tstamp; int mark; int priority; int ignore_df; int * sk; int * destructor; scalar_t__ truesize; int data_len; struct sk_buff* next; } ;
struct rt6_info {int rt6i_idev; int dst; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ipv6hdr {unsigned char nexthdr; struct in6_addr daddr; int saddr; int hop_limit; } ;
struct ipv6_txoptions {scalar_t__ opt_nflen; scalar_t__ opt_flen; } ;
struct ipv6_pinfo {int dummy; } ;
struct TYPE_8__ {int transmit_time; int mark; scalar_t__ dst; } ;
struct flowi6 {unsigned char flowi6_proto; int saddr; int flowlabel; struct in6_addr daddr; } ;
struct TYPE_6__ {struct flowi6 ip6; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct inet_cork_full {TYPE_3__ base; TYPE_2__ fl; } ;
struct inet6_dev {int dummy; } ;
struct inet6_cork {int hop_limit; int tclass; struct ipv6_txoptions* opt; } ;
struct TYPE_10__ {int icmp6_type; } ;
struct TYPE_9__ {struct sk_buff* frag_list; } ;


 int FUNC_0 (struct net*,struct inet6_dev*,int ) ;
 int FUNC_1 (struct net*,struct inet6_dev*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct net*,int ,int ,scalar_t__) ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int *) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct net*,struct ipv6_pinfo*) ;
 int FUNC_9 (struct inet_cork_full*,struct inet6_cork*) ;
 struct inet6_dev* FUNC_10 (int ) ;
 int FUNC_11 (struct ipv6hdr*,int ,int ) ;
 int FUNC_12 (struct net*,struct sk_buff*,int ,int ,struct flowi6*) ;
 int FUNC_13 (struct sock*) ;
 struct ipv6hdr* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,struct ipv6_txoptions*,unsigned char*) ;
 int FUNC_16 (struct sk_buff*,struct ipv6_txoptions*,unsigned char*,struct in6_addr**,int *) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,int) ;
 int FUNC_23 (struct sk_buff*) ;
 TYPE_4__* FUNC_24 (struct sk_buff*) ;
 struct net* FUNC_25 (struct sock*) ;

struct sk_buff *FUNC_26(struct sock *VAR_3,
          struct sk_buff_head *VAR_4,
          struct inet_cork_full *VAR_5,
          struct inet6_cork *VAR_6)
{
 struct sk_buff *VAR_7, *VAR_8;
 struct sk_buff **VAR_9;
 struct in6_addr VAR_10, *VAR_11 = &VAR_10;
 struct ipv6_pinfo *VAR_12 = FUNC_7(VAR_3);
 struct net *VAR_13 = FUNC_25(VAR_3);
 struct ipv6hdr *VAR_14;
 struct ipv6_txoptions *VAR_15 = VAR_6->opt;
 struct rt6_info *VAR_16 = (struct rt6_info *)VAR_5->base.dst;
 struct flowi6 *VAR_17 = &VAR_5->fl.u.ip6;
 unsigned char VAR_18 = VAR_17->flowi6_proto;

 VAR_7 = FUNC_3(VAR_4);
 if (!VAR_7)
  goto out;
 VAR_9 = &(FUNC_24(VAR_7)->frag_list);


 if (VAR_7->data < FUNC_19(VAR_7))
  FUNC_4(VAR_7, FUNC_21(VAR_7));
 while ((VAR_8 = FUNC_3(VAR_4)) != ((void*)0)) {
  FUNC_4(VAR_8, FUNC_20(VAR_7));
  *VAR_9 = VAR_8;
  VAR_9 = &(VAR_8->next);
  VAR_7->len += VAR_8->len;
  VAR_7->data_len += VAR_8->len;
  VAR_7->truesize += VAR_8->truesize;
  VAR_8->destructor = ((void*)0);
  VAR_8->sk = ((void*)0);
 }


 VAR_7->ignore_df = FUNC_13(VAR_3);

 *VAR_11 = VAR_17->daddr;
 FUNC_4(VAR_7, FUNC_20(VAR_7));
 if (VAR_15 && VAR_15->opt_flen)
  FUNC_15(VAR_7, VAR_15, &VAR_18);
 if (VAR_15 && VAR_15->opt_nflen)
  FUNC_16(VAR_7, VAR_15, &VAR_18, &VAR_11, &VAR_17->saddr);

 FUNC_22(VAR_7, sizeof(struct ipv6hdr));
 FUNC_23(VAR_7);
 VAR_14 = FUNC_14(VAR_7);

 FUNC_11(VAR_14, VAR_6->tclass,
       FUNC_12(VAR_13, VAR_7, VAR_17->flowlabel,
     FUNC_8(VAR_13, VAR_12), VAR_17));
 VAR_14->hop_limit = VAR_6->hop_limit;
 VAR_14->nexthdr = VAR_18;
 VAR_14->saddr = VAR_17->saddr;
 VAR_14->daddr = *VAR_11;

 VAR_7->priority = VAR_3->sk_priority;
 VAR_7->mark = VAR_5->base.mark;

 VAR_7->tstamp = VAR_5->base.transmit_time;

 FUNC_18(VAR_7, FUNC_5(&VAR_16->dst));
 FUNC_2(VAR_13, VAR_16->rt6i_idev, VAR_2, VAR_7->len);
 if (VAR_18 == VAR_1) {
  struct inet6_dev *VAR_19 = FUNC_10(FUNC_17(VAR_7));

  FUNC_0(VAR_13, VAR_19, FUNC_6(VAR_7)->icmp6_type);
  FUNC_1(VAR_13, VAR_19, VAR_0);
 }

 FUNC_9(VAR_5, VAR_6);
out:
 return VAR_7;
}
