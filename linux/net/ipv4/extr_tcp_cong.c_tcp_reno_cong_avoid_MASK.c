
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct tcp_sock*,int ,int ) ;
 scalar_t__ FUNC_1 (struct tcp_sock*) ;
 int FUNC_2 (struct sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct tcp_sock*,int ) ;

void FUNC_5(struct sock *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_3(VAR_0);

 if (!FUNC_2(VAR_0))
  return;


 if (FUNC_1(VAR_3)) {
  VAR_2 = FUNC_4(VAR_3, VAR_2);
  if (!VAR_2)
   return;
 }

 FUNC_0(VAR_3, VAR_3->snd_cwnd, VAR_2);
}
