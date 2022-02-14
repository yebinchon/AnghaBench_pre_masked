
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpnv {int cwnd_growth_factor; int nv_allow_cwnd_growth; } ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;


 struct tcpnv* FUNC_0 (struct sock*) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct tcp_sock*,int,int) ;
 scalar_t__ FUNC_3 (struct tcp_sock*) ;
 int FUNC_4 (struct sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*,int) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_5(VAR_0);
 struct tcpnv *VAR_4 = FUNC_0(VAR_0);
 u32 VAR_5;

 if (!FUNC_4(VAR_0))
  return;


 if (!VAR_4->nv_allow_cwnd_growth)
  return;

 if (FUNC_3(VAR_3)) {
  VAR_2 = FUNC_6(VAR_3, VAR_2);
  if (!VAR_2)
   return;
 }

 if (VAR_4->cwnd_growth_factor < 0) {
  VAR_5 = VAR_3->snd_cwnd << -VAR_4->cwnd_growth_factor;
  FUNC_2(VAR_3, VAR_5, VAR_2);
 } else {
  VAR_5 = FUNC_1(4U, VAR_3->snd_cwnd >> VAR_4->cwnd_growth_factor);
  FUNC_2(VAR_3, VAR_5, VAR_2);
 }
}
