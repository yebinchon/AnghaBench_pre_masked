
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_uid; int sk_protocol; } ;
struct dst_entry {int dummy; } ;
struct rtable {struct dst_entry dst; scalar_t__ rt_uses_gateway; } ;
struct request_sock {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_8__ {scalar_t__ is_strictroute; int faddr; scalar_t__ srr; } ;
struct ip_options_rcu {TYPE_4__ opt; } ;
struct flowi4 {int dummy; } ;
struct TYPE_5__ {struct flowi4 ip4; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ fl; } ;
struct inet_sock {TYPE_3__ cork; } ;
struct inet_request_sock {int ir_num; int ir_rmt_port; int ir_loc_addr; int ir_rmt_addr; int ir_mark; int ir_iif; int ireq_opt; int ireq_net; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct sock const*) ;
 int VAR_1 ;
 int FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct flowi4*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct flowi4*) ;
 int FUNC_5 (int ) ;
 struct inet_request_sock* FUNC_6 (struct request_sock const*) ;
 struct inet_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock const*) ;
 struct rtable* FUNC_9 (struct net*,struct flowi4*,struct sock const*) ;
 int FUNC_10 (struct rtable*) ;
 struct ip_options_rcu* FUNC_11 (int ) ;
 struct net* FUNC_12 (int *) ;
 int FUNC_13 (struct request_sock const*,int ) ;

struct dst_entry *FUNC_14(const struct sock *VAR_2,
         struct sock *VAR_3,
         const struct request_sock *VAR_4)
{
 const struct inet_request_sock *VAR_5 = FUNC_6(VAR_4);
 struct net *VAR_6 = FUNC_12(&VAR_5->ireq_net);
 struct inet_sock *VAR_7 = FUNC_7(VAR_3);
 struct ip_options_rcu *VAR_8;
 struct flowi4 *VAR_9;
 struct rtable *VAR_10;

 VAR_8 = FUNC_11(VAR_5->ireq_opt);
 VAR_9 = &VAR_7->cork.fl.u.ip4;

 FUNC_3(VAR_9, VAR_5->ir_iif, VAR_5->ir_mark,
      FUNC_1(VAR_2), VAR_1,
      VAR_2->sk_protocol, FUNC_8(VAR_2),
      (VAR_8 && VAR_8->opt.srr) ? VAR_8->opt.faddr : VAR_5->ir_rmt_addr,
      VAR_5->ir_loc_addr, VAR_5->ir_rmt_port,
      FUNC_5(VAR_5->ir_num), VAR_2->sk_uid);
 FUNC_13(VAR_4, FUNC_4(VAR_9));
 VAR_10 = FUNC_9(VAR_6, VAR_9, VAR_2);
 if (FUNC_0(VAR_10))
  goto no_route;
 if (VAR_8 && VAR_8->opt.is_strictroute && VAR_10->rt_uses_gateway)
  goto route_err;
 return &VAR_10->dst;

route_err:
 FUNC_10(VAR_10);
no_route:
 FUNC_2(VAR_6, VAR_0);
 return ((void*)0);
}
