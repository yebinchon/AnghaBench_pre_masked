
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {int snd_cwnd; scalar_t__ snd_cwnd_used; int snd_cwnd_stamp; int snd_ssthresh; } ;
struct sock {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {scalar_t__ icsk_rto; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*,int ) ;
 int VAR_1 ;
 struct tcp_sock* FUNC_7 (struct sock*) ;

void FUNC_8(struct sock *VAR_2, s32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_7(VAR_2);
 u32 VAR_5 = FUNC_6(VAR_4, FUNC_0(VAR_2));
 u32 VAR_6 = VAR_4->snd_cwnd;

 FUNC_4(VAR_2, VAR_0);

 VAR_4->snd_ssthresh = FUNC_5(VAR_2);
 VAR_5 = FUNC_3(VAR_5, VAR_6);

 while ((VAR_3 -= FUNC_1(VAR_2)->icsk_rto) > 0 && VAR_6 > VAR_5)
  VAR_6 >>= 1;
 VAR_4->snd_cwnd = FUNC_2(VAR_6, VAR_5);
 VAR_4->snd_cwnd_stamp = VAR_1;
 VAR_4->snd_cwnd_used = 0;
}
