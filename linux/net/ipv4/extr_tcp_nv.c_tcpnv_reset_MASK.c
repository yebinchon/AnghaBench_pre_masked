
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpnv {int nv_last_snd_una; scalar_t__ nv_eval_call_cnt; int nv_rtt_start_seq; scalar_t__ nv_rtt_max_rate; scalar_t__ nv_last_rtt; scalar_t__ nv_rtt_cnt; scalar_t__ nv_no_cong_cnt; scalar_t__ nv_reset; } ;
struct tcp_sock {int snd_una; } ;
struct sock {int dummy; } ;


 struct tcp_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static inline void FUNC_1(struct tcpnv *VAR_0, struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_0(VAR_1);

 VAR_0->nv_reset = 0;
 VAR_0->nv_no_cong_cnt = 0;
 VAR_0->nv_rtt_cnt = 0;
 VAR_0->nv_last_rtt = 0;
 VAR_0->nv_rtt_max_rate = 0;
 VAR_0->nv_rtt_start_seq = VAR_2->snd_una;
 VAR_0->nv_eval_call_cnt = 0;
 VAR_0->nv_last_snd_una = VAR_2->snd_una;
}
