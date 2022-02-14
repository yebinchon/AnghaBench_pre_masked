
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ lost_out; scalar_t__ retrans_out; scalar_t__ snd_cwnd; int nonagle; } ;
struct sock {int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct tcp_sock*) ;
 scalar_t__ FUNC_2 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_6)
{
 if ((1 << VAR_6->sk_state) &
     (VAR_3 | VAR_4 | VAR_2 |
      VAR_1 | VAR_5)) {
  struct tcp_sock *VAR_7 = FUNC_3(VAR_6);

  if (VAR_7->lost_out > VAR_7->retrans_out &&
      VAR_7->snd_cwnd > FUNC_2(VAR_7)) {
   FUNC_1(VAR_7);
   FUNC_5(VAR_6);
  }

  FUNC_4(VAR_6, FUNC_0(VAR_6), VAR_7->nonagle,
          0, VAR_0);
 }
}
