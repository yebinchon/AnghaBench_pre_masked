
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static u32 FUNC_2(struct sock *VAR_1)
{
 const struct tcp_sock *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->snd_cwnd - (VAR_2->snd_cwnd>>VAR_0), 2U);
}
