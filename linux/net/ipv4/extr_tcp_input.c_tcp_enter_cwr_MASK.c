
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ undo_marker; scalar_t__ prior_ssthresh; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_ca_state; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,scalar_t__) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_3(VAR_1);

 VAR_2->prior_ssthresh = 0;
 if (FUNC_0(VAR_1)->icsk_ca_state < VAR_0) {
  VAR_2->undo_marker = 0;
  FUNC_1(VAR_1);
  FUNC_2(VAR_1, VAR_0);
 }
}
