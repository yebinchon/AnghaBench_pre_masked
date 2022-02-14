
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {int snd_ssthresh; scalar_t__ prr_out; scalar_t__ prr_delivered; int snd_cwnd; int prior_cwnd; scalar_t__ snd_cwnd_cnt; scalar_t__ tlp_high_seq; int snd_nxt; int high_seq; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {TYPE_1__* icsk_ca_ops; } ;
struct TYPE_3__ {int (* ssthresh ) (struct sock*) ;} ;


 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_3(VAR_0);

 VAR_1->high_seq = VAR_1->snd_nxt;
 VAR_1->tlp_high_seq = 0;
 VAR_1->snd_cwnd_cnt = 0;
 VAR_1->prior_cwnd = VAR_1->snd_cwnd;
 VAR_1->prr_delivered = 0;
 VAR_1->prr_out = 0;
 VAR_1->snd_ssthresh = FUNC_0(VAR_0)->icsk_ca_ops->ssthresh(VAR_0);
 FUNC_2(VAR_1);
}
