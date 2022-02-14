
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {unsigned int snd_cwnd; } ;
struct sock {int dummy; } ;
struct dctcp {unsigned int loss_cwnd; unsigned int dctcp_alpha; } ;


 struct dctcp* FUNC_0 (struct sock*) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_0)
{
 struct dctcp *VAR_1 = FUNC_0(VAR_0);
 struct tcp_sock *VAR_2 = FUNC_2(VAR_0);

 VAR_1->loss_cwnd = VAR_2->snd_cwnd;
 return FUNC_1(VAR_2->snd_cwnd - ((VAR_2->snd_cwnd * VAR_1->dctcp_alpha) >> 11U), 2U);
}
