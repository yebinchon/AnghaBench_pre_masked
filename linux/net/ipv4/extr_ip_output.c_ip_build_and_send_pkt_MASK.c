
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_mark; int sk_priority; int sk_protocol; } ;
struct sk_buff {int sk; scalar_t__ mark; int priority; } ;
struct rtable {int dst; } ;
struct net {int dummy; } ;
struct iphdr {int version; int ihl; scalar_t__ frag_off; scalar_t__ id; int protocol; void* saddr; void* daddr; int ttl; int tos; } ;
struct TYPE_2__ {int optlen; void* faddr; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_1__ opt; } ;
struct inet_sock {int tos; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct iphdr*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct inet_sock* FUNC_2 (struct sock const*) ;
 scalar_t__ FUNC_3 (struct sock const*,int *) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net*,int ,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,TYPE_1__*,void*,struct rtable*,int ) ;
 int FUNC_7 (struct inet_sock*,int *) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 struct rtable* FUNC_10 (struct sk_buff*) ;
 struct net* FUNC_11 (struct sock const*) ;

int FUNC_12(struct sk_buff *VAR_1, const struct sock *VAR_2,
     __be32 VAR_3, __be32 VAR_4, struct ip_options_rcu *VAR_5)
{
 struct inet_sock *VAR_6 = FUNC_2(VAR_2);
 struct rtable *VAR_7 = FUNC_10(VAR_1);
 struct net *VAR_8 = FUNC_11(VAR_2);
 struct iphdr *VAR_9;


 FUNC_8(VAR_1, sizeof(struct iphdr) + (VAR_5 ? VAR_5->opt.optlen : 0));
 FUNC_9(VAR_1);
 VAR_9 = FUNC_4(VAR_1);
 VAR_9->version = 4;
 VAR_9->ihl = 5;
 VAR_9->tos = VAR_6->tos;
 VAR_9->ttl = FUNC_7(VAR_6, &VAR_7->dst);
 VAR_9->daddr = (VAR_5 && VAR_5->opt.srr ? VAR_5->opt.faddr : VAR_4);
 VAR_9->saddr = VAR_3;
 VAR_9->protocol = VAR_2->sk_protocol;
 if (FUNC_3(VAR_2, &VAR_7->dst)) {
  VAR_9->frag_off = FUNC_1(VAR_0);
  VAR_9->id = 0;
 } else {
  VAR_9->frag_off = 0;
  FUNC_0(VAR_8, VAR_9, 1);
 }

 if (VAR_5 && VAR_5->opt.optlen) {
  VAR_9->ihl += VAR_5->opt.optlen>>2;
  FUNC_6(VAR_1, &VAR_5->opt, VAR_4, VAR_7, 0);
 }

 VAR_1->priority = VAR_2->sk_priority;
 if (!VAR_1->mark)
  VAR_1->mark = VAR_2->sk_mark;


 return FUNC_5(VAR_8, VAR_1->sk, VAR_1);
}
