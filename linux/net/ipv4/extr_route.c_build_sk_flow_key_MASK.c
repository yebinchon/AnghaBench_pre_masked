
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_uid; int sk_protocol; int sk_mark; int sk_bound_dev_if; } ;
struct TYPE_2__ {int faddr; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_1__ opt; } ;
struct inet_sock {int inet_saddr; scalar_t__ hdrincl; int inet_opt; int inet_daddr; } ;
struct flowi4 {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct sock const*) ;
 int VAR_1 ;
 int FUNC_1 (struct flowi4*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct inet_sock* FUNC_2 (struct sock const*) ;
 int FUNC_3 (struct sock const*) ;
 struct ip_options_rcu* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct flowi4 *VAR_2, const struct sock *VAR_3)
{
 const struct inet_sock *VAR_4 = FUNC_2(VAR_3);
 const struct ip_options_rcu *VAR_5;
 __be32 VAR_6 = VAR_4->inet_daddr;

 FUNC_5();
 VAR_5 = FUNC_4(VAR_4->inet_opt);
 if (VAR_5 && VAR_5->opt.srr)
  VAR_6 = VAR_5->opt.faddr;
 FUNC_1(VAR_2, VAR_3->sk_bound_dev_if, VAR_3->sk_mark,
      FUNC_0(VAR_3), VAR_1,
      VAR_4->hdrincl ? VAR_0 : VAR_3->sk_protocol,
      FUNC_3(VAR_3),
      VAR_6, VAR_4->inet_saddr, 0, 0, VAR_3->sk_uid);
 FUNC_6();
}
