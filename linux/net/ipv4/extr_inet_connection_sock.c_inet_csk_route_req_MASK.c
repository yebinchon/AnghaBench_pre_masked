
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_uid; int sk_protocol; } ;
struct dst_entry {int dummy; } ;
struct rtable {struct dst_entry dst; scalar_t__ rt_uses_gateway; } ;
struct request_sock {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_strictroute; int faddr; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_1__ opt; } ;
struct inet_request_sock {int ir_num; int ir_rmt_port; int ir_loc_addr; int ir_rmt_addr; int ir_mark; int ir_iif; int ireq_opt; int ireq_net; } ;
struct flowi4 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct sock const*) ;
 int VAR_1 ;
 int FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct flowi4*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct flowi4*) ;
 int FUNC_5 (int ) ;
 struct inet_request_sock* FUNC_6 (struct request_sock const*) ;
 int FUNC_7 (struct sock const*) ;
 struct rtable* FUNC_8 (struct net*,struct flowi4*,struct sock const*) ;
 int FUNC_9 (struct rtable*) ;
 struct ip_options_rcu* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 struct net* FUNC_13 (int *) ;
 int FUNC_14 (struct request_sock const*,int ) ;

struct dst_entry *FUNC_15(const struct sock *VAR_2,
         struct flowi4 *VAR_3,
         const struct request_sock *VAR_4)
{
 const struct inet_request_sock *VAR_5 = FUNC_6(VAR_4);
 struct net *VAR_6 = FUNC_13(&VAR_5->ireq_net);
 struct ip_options_rcu *VAR_7;
 struct rtable *VAR_8;

 FUNC_11();
 VAR_7 = FUNC_10(VAR_5->ireq_opt);

 FUNC_3(VAR_3, VAR_5->ir_iif, VAR_5->ir_mark,
      FUNC_1(VAR_2), VAR_1,
      VAR_2->sk_protocol, FUNC_7(VAR_2),
      (VAR_7 && VAR_7->opt.srr) ? VAR_7->opt.faddr : VAR_5->ir_rmt_addr,
      VAR_5->ir_loc_addr, VAR_5->ir_rmt_port,
      FUNC_5(VAR_5->ir_num), VAR_2->sk_uid);
 FUNC_14(VAR_4, FUNC_4(VAR_3));
 VAR_8 = FUNC_8(VAR_6, VAR_3, VAR_2);
 if (FUNC_0(VAR_8))
  goto no_route;
 if (VAR_7 && VAR_7->opt.is_strictroute && VAR_8->rt_uses_gateway)
  goto route_err;
 FUNC_12();
 return &VAR_8->dst;

route_err:
 FUNC_9(VAR_8);
no_route:
 FUNC_12();
 FUNC_2(VAR_6, VAR_0);
 return ((void*)0);
}
