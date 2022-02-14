
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct bbr {scalar_t__ prev_ca_state; scalar_t__ mode; int prior_cwnd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct bbr* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_2(VAR_2);
 struct bbr *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->prev_ca_state < VAR_1 && VAR_4->mode != VAR_0)
  VAR_4->prior_cwnd = VAR_3->snd_cwnd;
 else
  VAR_4->prior_cwnd = FUNC_1(VAR_4->prior_cwnd, VAR_3->snd_cwnd);
}
