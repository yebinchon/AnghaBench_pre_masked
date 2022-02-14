
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int prior_cwnd; int snd_cwnd; } ;
struct sock {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

u32 FUNC_2(struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->snd_cwnd, VAR_1->prior_cwnd);
}
