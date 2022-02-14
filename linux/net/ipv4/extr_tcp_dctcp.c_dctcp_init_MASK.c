
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int ecn_flags; int rcv_nxt; } ;
struct sock {scalar_t__ sk_state; } ;
struct dctcp {scalar_t__ ce_state; scalar_t__ loss_cwnd; int dctcp_alpha; int prior_rcv_nxt; } ;
struct TYPE_2__ {int * icsk_ca_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tcp_sock const*,struct dctcp*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 struct dctcp* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int ) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_6)
{
 const struct tcp_sock *VAR_7 = FUNC_5(VAR_6);

 if ((VAR_7->ecn_flags & VAR_2) ||
     (VAR_6->sk_state == VAR_3 ||
      VAR_6->sk_state == VAR_1)) {
  struct dctcp *VAR_8 = FUNC_3(VAR_6);

  VAR_8->prior_rcv_nxt = VAR_7->rcv_nxt;

  VAR_8->dctcp_alpha = FUNC_4(VAR_4, VAR_0);

  VAR_8->loss_cwnd = 0;
  VAR_8->ce_state = 0;

  FUNC_1(VAR_7, VAR_8);
  return;
 }




 FUNC_2(VAR_6)->icsk_ca_ops = &VAR_5;
 FUNC_0(VAR_6);
}
