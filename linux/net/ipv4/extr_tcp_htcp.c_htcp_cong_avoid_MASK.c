
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd_cnt; int snd_cwnd; int snd_cwnd_clamp; } ;
struct sock {int dummy; } ;
struct htcp {int alpha; int pkts_acked; } ;


 int FUNC_0 (struct htcp*) ;
 struct htcp* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct tcp_sock*) ;
 int FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*,int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_4(VAR_0);
 struct htcp *VAR_4 = FUNC_1(VAR_0);

 if (!FUNC_3(VAR_0))
  return;

 if (FUNC_2(VAR_3))
  FUNC_5(VAR_3, VAR_2);
 else {



  if ((VAR_3->snd_cwnd_cnt * VAR_4->alpha)>>7 >= VAR_3->snd_cwnd) {
   if (VAR_3->snd_cwnd < VAR_3->snd_cwnd_clamp)
    VAR_3->snd_cwnd++;
   VAR_3->snd_cwnd_cnt = 0;
   FUNC_0(VAR_4);
  } else
   VAR_3->snd_cwnd_cnt += VAR_4->pkts_acked;

  VAR_4->pkts_acked = 1;
 }
}
