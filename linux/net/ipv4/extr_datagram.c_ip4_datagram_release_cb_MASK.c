
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_bound_dev_if; int sk_protocol; } ;
struct dst_entry {TYPE_1__* ops; int obsolete; } ;
struct rtable {struct dst_entry dst; } ;
struct TYPE_4__ {int faddr; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_2__ opt; } ;
struct inet_sock {int inet_sport; int inet_dport; int inet_saddr; int inet_opt; int inet_daddr; } ;
struct flowi4 {int dummy; } ;
typedef int __be32 ;
struct TYPE_3__ {scalar_t__ (* check ) (struct dst_entry*,int ) ;} ;


 int FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct sock*) ;
 struct dst_entry* FUNC_2 (struct sock*) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 struct rtable* FUNC_4 (int ,struct flowi4*,struct sock*,int ,int ,int ,int ,int ,int ,int ) ;
 struct ip_options_rcu* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sock*,struct dst_entry*) ;
 int FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (struct dst_entry*,int ) ;

void FUNC_11(struct sock *VAR_0)
{
 const struct inet_sock *VAR_1 = FUNC_3(VAR_0);
 const struct ip_options_rcu *VAR_2;
 __be32 VAR_3 = VAR_1->inet_daddr;
 struct dst_entry *VAR_4;
 struct flowi4 VAR_5;
 struct rtable *VAR_6;

 FUNC_6();

 VAR_4 = FUNC_2(VAR_0);
 if (!VAR_4 || !VAR_4->obsolete || VAR_4->ops->check(VAR_4, 0)) {
  FUNC_7();
  return;
 }
 VAR_2 = FUNC_5(VAR_1->inet_opt);
 if (VAR_2 && VAR_2->opt.srr)
  VAR_3 = VAR_2->opt.faddr;
 VAR_6 = FUNC_4(FUNC_9(VAR_0), &VAR_5, VAR_0, VAR_3,
       VAR_1->inet_saddr, VAR_1->inet_dport,
       VAR_1->inet_sport, VAR_0->sk_protocol,
       FUNC_1(VAR_0), VAR_0->sk_bound_dev_if);

 VAR_4 = !FUNC_0(VAR_6) ? &VAR_6->dst : ((void*)0);
 FUNC_8(VAR_0, VAR_4);

 FUNC_7();
}
