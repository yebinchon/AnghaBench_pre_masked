
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int snd_cwnd; void* snd_ssthresh; int snd_cwnd_stamp; scalar_t__ snd_cwnd_cnt; int mss_cache; void* prior_ssthresh; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int probe_size; int search_low; } ;
struct inet_connection_sock {int icsk_pmtu_cookie; TYPE_1__ icsk_mtup; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 void* FUNC_3 (struct sock*) ;
 int VAR_1 ;
 int FUNC_4 (struct sock*,int ) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_5(VAR_2);
 struct inet_connection_sock *VAR_4 = FUNC_1(VAR_2);


 VAR_3->prior_ssthresh = FUNC_3(VAR_2);
 VAR_3->snd_cwnd = VAR_3->snd_cwnd *
         FUNC_4(VAR_2, VAR_3->mss_cache) /
         VAR_4->icsk_mtup.probe_size;
 VAR_3->snd_cwnd_cnt = 0;
 VAR_3->snd_cwnd_stamp = VAR_1;
 VAR_3->snd_ssthresh = FUNC_3(VAR_2);

 VAR_4->icsk_mtup.search_low = VAR_4->icsk_mtup.probe_size;
 VAR_4->icsk_mtup.probe_size = 0;
 FUNC_6(VAR_2, VAR_4->icsk_pmtu_cookie);
 FUNC_0(FUNC_2(VAR_2), VAR_0);
}
