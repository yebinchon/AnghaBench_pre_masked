
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_bound_dev_if; int sk_protocol; } ;
struct dst_entry {int dummy; } ;
struct rtable {struct dst_entry dst; } ;
struct TYPE_3__ {int faddr; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_1__ opt; } ;
struct inet_sock {int inet_sport; int inet_dport; int inet_saddr; int inet_opt; int inet_daddr; } ;
struct flowi4 {int dummy; } ;
struct TYPE_4__ {struct flowi4 ip4; } ;
struct flowi {TYPE_2__ u; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct sock*) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 struct rtable* FUNC_3 (int ,struct flowi4*,struct sock*,int ,int ,int ,int ,int ,int ,int ) ;
 struct ip_options_rcu* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct sock*,struct dst_entry*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static struct dst_entry *FUNC_9(struct sock *VAR_0, struct flowi *VAR_1)
{
 const struct inet_sock *VAR_2 = FUNC_2(VAR_0);
 const struct ip_options_rcu *VAR_3;
 __be32 VAR_4 = VAR_2->inet_daddr;
 struct flowi4 *VAR_5;
 struct rtable *VAR_6;

 FUNC_5();
 VAR_3 = FUNC_4(VAR_2->inet_opt);
 if (VAR_3 && VAR_3->opt.srr)
  VAR_4 = VAR_3->opt.faddr;
 VAR_5 = &VAR_1->u.ip4;
 VAR_6 = FUNC_3(FUNC_8(VAR_0), VAR_5, VAR_0, VAR_4,
       VAR_2->inet_saddr, VAR_2->inet_dport,
       VAR_2->inet_sport, VAR_0->sk_protocol,
       FUNC_1(VAR_0), VAR_0->sk_bound_dev_if);
 if (FUNC_0(VAR_6))
  VAR_6 = ((void*)0);
 if (VAR_6)
  FUNC_7(VAR_0, &VAR_6->dst);
 FUNC_6();

 return &VAR_6->dst;
}
