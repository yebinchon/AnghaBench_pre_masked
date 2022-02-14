
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_userlocks; int sk_err_soft; scalar_t__ sk_route_caps; int sk_bound_dev_if; int sk_protocol; } ;
struct rtable {int dst; } ;
struct TYPE_8__ {int faddr; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_1__ opt; } ;
struct flowi4 {int dummy; } ;
struct TYPE_9__ {struct flowi4 ip4; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_11__ {TYPE_3__ fl; } ;
struct inet_sock {int inet_sport; int inet_dport; int inet_saddr; TYPE_4__ cork; int inet_daddr; int inet_opt; } ;
typedef int __be32 ;
struct TYPE_12__ {int sysctl_ip_dynaddr; } ;
struct TYPE_13__ {TYPE_5__ ipv4; } ;


 int FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct sock*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 struct rtable* FUNC_6 (TYPE_6__*,struct flowi4*,struct sock*,int ,int ,int ,int ,int ,int ,int ) ;
 struct ip_options_rcu* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct sock*,int *) ;
 TYPE_6__* FUNC_11 (struct sock*) ;

int FUNC_12(struct sock *VAR_2)
{
 struct inet_sock *VAR_3 = FUNC_4(VAR_2);
 struct rtable *VAR_4 = (struct rtable *)FUNC_3(VAR_2, 0);
 __be32 VAR_5;
 struct ip_options_rcu *VAR_6;
 struct flowi4 *VAR_7;
 int VAR_8;


 if (VAR_4)
  return 0;


 FUNC_8();
 VAR_6 = FUNC_7(VAR_3->inet_opt);
 VAR_5 = VAR_3->inet_daddr;
 if (VAR_6 && VAR_6->opt.srr)
  VAR_5 = VAR_6->opt.faddr;
 FUNC_9();
 VAR_7 = &VAR_3->cork.fl.u.ip4;
 VAR_4 = FUNC_6(FUNC_11(VAR_2), VAR_7, VAR_2, VAR_5, VAR_3->inet_saddr,
       VAR_3->inet_dport, VAR_3->inet_sport,
       VAR_2->sk_protocol, FUNC_2(VAR_2),
       VAR_2->sk_bound_dev_if);
 if (!FUNC_0(VAR_4)) {
  VAR_8 = 0;
  FUNC_10(VAR_2, &VAR_4->dst);
 } else {
  VAR_8 = FUNC_1(VAR_4);


  VAR_2->sk_route_caps = 0;




  if (!FUNC_11(VAR_2)->ipv4.sysctl_ip_dynaddr ||
      VAR_2->sk_state != VAR_1 ||
      (VAR_2->sk_userlocks & VAR_0) ||
      (VAR_8 = FUNC_5(VAR_2)) != 0)
   VAR_2->sk_err_soft = -VAR_8;
 }

 return VAR_8;
}
