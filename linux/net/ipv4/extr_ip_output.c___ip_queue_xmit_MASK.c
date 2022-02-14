
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_mark; int sk_priority; int sk_protocol; int sk_bound_dev_if; } ;
struct sk_buff {int mark; int priority; int ignore_df; } ;
struct rtable {int dst; scalar_t__ rt_uses_gateway; } ;
struct net {int dummy; } ;
struct iphdr {int ihl; int protocol; int ttl; void* frag_off; } ;
struct TYPE_6__ {int optlen; scalar_t__ is_strictroute; int faddr; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_3__ opt; } ;
struct inet_sock {int inet_daddr; int inet_sport; int inet_dport; int inet_saddr; int inet_opt; } ;
struct flowi4 {int dummy; } ;
struct TYPE_4__ {struct flowi4 ip4; } ;
struct flowi {TYPE_1__ u; } ;
typedef int __u8 ;
typedef int __be32 ;
typedef void* __be16 ;
struct TYPE_5__ {scalar_t__ gso_segs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ) ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct sock*,int) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 void* FUNC_4 (int) ;
 struct inet_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct iphdr*,struct flowi4*) ;
 scalar_t__ FUNC_7 (struct sock*,int *) ;
 struct iphdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,TYPE_3__*,int ,struct rtable*,int ) ;
 struct rtable* FUNC_11 (struct net*,struct flowi4*,struct sock*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct net*,struct sk_buff*,struct sock*,int) ;
 int FUNC_13 (struct inet_sock*,int *) ;
 int FUNC_14 (struct sk_buff*) ;
 struct ip_options_rcu* FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct sock*,int *) ;
 int FUNC_19 (struct sk_buff*,int *) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (struct sk_buff*) ;
 struct rtable* FUNC_22 (struct sk_buff*) ;
 TYPE_2__* FUNC_23 (struct sk_buff*) ;
 struct net* FUNC_24 (struct sock*) ;

int FUNC_25(struct sock *VAR_3, struct sk_buff *VAR_4, struct flowi *VAR_5,
      __u8 VAR_6)
{
 struct inet_sock *VAR_7 = FUNC_5(VAR_3);
 struct net *VAR_8 = FUNC_24(VAR_3);
 struct ip_options_rcu *VAR_9;
 struct flowi4 *VAR_10;
 struct rtable *VAR_11;
 struct iphdr *VAR_12;
 int VAR_13;




 FUNC_16();
 VAR_9 = FUNC_15(VAR_7->inet_opt);
 VAR_10 = &VAR_5->u.ip4;
 VAR_11 = FUNC_22(VAR_4);
 if (VAR_11)
  goto packet_routed;


 VAR_11 = (struct rtable *)FUNC_3(VAR_3, 0);
 if (!VAR_11) {
  __be32 VAR_14;


  VAR_14 = VAR_7->inet_daddr;
  if (VAR_9 && VAR_9->opt.srr)
   VAR_14 = VAR_9->opt.faddr;





  VAR_11 = FUNC_11(VAR_8, VAR_10, VAR_3,
        VAR_14, VAR_7->inet_saddr,
        VAR_7->inet_dport,
        VAR_7->inet_sport,
        VAR_3->sk_protocol,
        FUNC_2(VAR_3, VAR_6),
        VAR_3->sk_bound_dev_if);
  if (FUNC_1(VAR_11))
   goto no_route;
  FUNC_18(VAR_3, &VAR_11->dst);
 }
 FUNC_19(VAR_4, &VAR_11->dst);

packet_routed:
 if (VAR_9 && VAR_9->opt.is_strictroute && VAR_11->rt_uses_gateway)
  goto no_route;


 FUNC_20(VAR_4, sizeof(struct iphdr) + (VAR_9 ? VAR_9->opt.optlen : 0));
 FUNC_21(VAR_4);
 VAR_12 = FUNC_8(VAR_4);
 *((__be16 *)VAR_12) = FUNC_4((4 << 12) | (5 << 8) | (VAR_6 & 0xff));
 if (FUNC_7(VAR_3, &VAR_11->dst) && !VAR_4->ignore_df)
  VAR_12->frag_off = FUNC_4(VAR_2);
 else
  VAR_12->frag_off = 0;
 VAR_12->ttl = FUNC_13(VAR_7, &VAR_11->dst);
 VAR_12->protocol = VAR_3->sk_protocol;
 FUNC_6(VAR_12, VAR_10);



 if (VAR_9 && VAR_9->opt.optlen) {
  VAR_12->ihl += VAR_9->opt.optlen >> 2;
  FUNC_10(VAR_4, &VAR_9->opt, VAR_7->inet_daddr, VAR_11, 0);
 }

 FUNC_12(VAR_8, VAR_4, VAR_3,
        FUNC_23(VAR_4)->gso_segs ?: 1);


 VAR_4->priority = VAR_3->sk_priority;
 VAR_4->mark = VAR_3->sk_mark;

 VAR_13 = FUNC_9(VAR_8, VAR_3, VAR_4);
 FUNC_17();
 return VAR_13;

no_route:
 FUNC_17();
 FUNC_0(VAR_8, VAR_1);
 FUNC_14(VAR_4);
 return -VAR_0;
}
