
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd_cnt; int snd_cwnd_clamp; scalar_t__ snd_cwnd; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

void FUNC_1(struct tcp_sock *VAR_0, u32 VAR_1, u32 VAR_2)
{

 if (VAR_0->snd_cwnd_cnt >= VAR_1) {
  VAR_0->snd_cwnd_cnt = 0;
  VAR_0->snd_cwnd++;
 }

 VAR_0->snd_cwnd_cnt += VAR_2;
 if (VAR_0->snd_cwnd_cnt >= VAR_1) {
  u32 VAR_3 = VAR_0->snd_cwnd_cnt / VAR_1;

  VAR_0->snd_cwnd_cnt -= VAR_3 * VAR_1;
  VAR_0->snd_cwnd += VAR_3;
 }
 VAR_0->snd_cwnd = FUNC_0(VAR_0->snd_cwnd, VAR_0->snd_cwnd_clamp);
}
