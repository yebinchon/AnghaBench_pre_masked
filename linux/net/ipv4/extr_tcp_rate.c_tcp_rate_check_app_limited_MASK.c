
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ write_seq; scalar_t__ snd_nxt; scalar_t__ mss_cache; scalar_t__ snd_cwnd; scalar_t__ lost_out; scalar_t__ retrans_out; int app_limited; scalar_t__ delivered; } ;
struct sock {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_3(VAR_0);

 if (
     VAR_1->write_seq - VAR_1->snd_nxt < VAR_1->mss_cache &&

     FUNC_1(VAR_0) < FUNC_0(1) &&

     FUNC_2(VAR_1) < VAR_1->snd_cwnd &&

     VAR_1->lost_out <= VAR_1->retrans_out)
  VAR_1->app_limited =
   (VAR_1->delivered + FUNC_2(VAR_1)) ? : 1;
}
