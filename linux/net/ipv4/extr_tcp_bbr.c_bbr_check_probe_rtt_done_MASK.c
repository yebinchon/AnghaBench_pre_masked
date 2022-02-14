
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct bbr {int prior_cwnd; int min_rtt_stamp; scalar_t__ probe_rtt_done_stamp; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct sock*) ;
 struct bbr* FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_4(VAR_1);
 struct bbr *VAR_3 = FUNC_2(VAR_1);

 if (!(VAR_3->probe_rtt_done_stamp &&
       FUNC_0(VAR_0, VAR_3->probe_rtt_done_stamp)))
  return;

 VAR_3->min_rtt_stamp = VAR_0;
 VAR_2->snd_cwnd = FUNC_3(VAR_2->snd_cwnd, VAR_3->prior_cwnd);
 FUNC_1(VAR_1);
}
