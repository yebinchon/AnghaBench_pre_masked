
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sock {int sk_bound_dev_if; } ;
struct sk_buff {int users; } ;
struct request_sock {int dummy; } ;
struct TYPE_8__ {scalar_t__ rxohlim; scalar_t__ rxhlim; scalar_t__ rxoinfo; scalar_t__ rxinfo; } ;
struct TYPE_9__ {TYPE_2__ bits; } ;
struct ipv6_pinfo {scalar_t__ repflow; TYPE_3__ rxopt; } ;
struct inet_request_sock {struct sk_buff* pktopts; int ir_iif; int ir_v6_rmt_addr; int ir_v6_loc_addr; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_7__ {TYPE_4__ h6; } ;
struct TYPE_12__ {TYPE_1__ header; int tcp_tw_isn; } ;
struct TYPE_11__ {int daddr; int saddr; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 struct inet_request_sock* FUNC_1 (struct request_sock*) ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sock const*,struct sk_buff*,TYPE_4__*) ;
 int FUNC_6 (int *) ;
 struct ipv6_pinfo* FUNC_7 (struct sock const*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct request_sock *VAR_1,
       const struct sock *VAR_2,
       struct sk_buff *VAR_3)
{
 bool VAR_4 = FUNC_4(FUNC_0(VAR_3)->header.h6.flags);
 struct inet_request_sock *VAR_5 = FUNC_1(VAR_1);
 const struct ipv6_pinfo *VAR_6 = FUNC_7(VAR_2);

 VAR_5->ir_v6_rmt_addr = FUNC_3(VAR_3)->saddr;
 VAR_5->ir_v6_loc_addr = FUNC_3(VAR_3)->daddr;


 if ((!VAR_2->sk_bound_dev_if || VAR_4) &&
     FUNC_2(&VAR_5->ir_v6_rmt_addr) & VAR_0)
  VAR_5->ir_iif = FUNC_8(VAR_3);

 if (!FUNC_0(VAR_3)->tcp_tw_isn &&
     (FUNC_5(VAR_2, VAR_3, &FUNC_0(VAR_3)->header.h6) ||
      VAR_6->rxopt.bits.rxinfo ||
      VAR_6->rxopt.bits.rxoinfo || VAR_6->rxopt.bits.rxhlim ||
      VAR_6->rxopt.bits.rxohlim || VAR_6->repflow)) {
  FUNC_6(&VAR_3->users);
  VAR_5->pktopts = VAR_3;
 }
}
