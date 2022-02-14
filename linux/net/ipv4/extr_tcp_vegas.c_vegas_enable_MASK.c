
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vegas {int doing_vegas_now; int minRTT; scalar_t__ cntRTT; int beg_snd_nxt; } ;
struct tcp_sock {int snd_nxt; } ;
struct sock {int dummy; } ;


 struct vegas* FUNC_0 (struct sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_1(VAR_0);
 struct vegas *VAR_2 = FUNC_0(VAR_0);


 VAR_2->doing_vegas_now = 1;


 VAR_2->beg_snd_nxt = VAR_1->snd_nxt;

 VAR_2->cntRTT = 0;
 VAR_2->minRTT = 0x7fffffff;
}
