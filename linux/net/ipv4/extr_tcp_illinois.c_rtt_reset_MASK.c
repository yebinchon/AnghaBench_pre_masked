
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_nxt; } ;
struct sock {int dummy; } ;
struct illinois {scalar_t__ sum_rtt; scalar_t__ cnt_rtt; int end_seq; } ;


 struct illinois* FUNC_0 (struct sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_1(VAR_0);
 struct illinois *VAR_2 = FUNC_0(VAR_0);

 VAR_2->end_seq = VAR_1->snd_nxt;
 VAR_2->cnt_rtt = 0;
 VAR_2->sum_rtt = 0;


}
