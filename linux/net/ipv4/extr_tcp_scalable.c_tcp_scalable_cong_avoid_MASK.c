
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tcp_sock*,int ,int) ;
 scalar_t__ FUNC_2 (struct tcp_sock*) ;
 int FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*,int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_4(VAR_1);

 if (!FUNC_3(VAR_1))
  return;

 if (FUNC_2(VAR_4))
  FUNC_5(VAR_4, VAR_3);
 else
  FUNC_1(VAR_4, FUNC_0(VAR_4->snd_cwnd, VAR_0),
      1);
}
