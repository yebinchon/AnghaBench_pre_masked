
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct bictcp {int cnt; } ;


 int FUNC_0 (struct bictcp*,int ) ;
 struct bictcp* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct tcp_sock*,int ,int) ;
 scalar_t__ FUNC_3 (struct tcp_sock*) ;
 int FUNC_4 (struct sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*,int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_5(VAR_0);
 struct bictcp *VAR_4 = FUNC_1(VAR_0);

 if (!FUNC_4(VAR_0))
  return;

 if (FUNC_3(VAR_3))
  FUNC_6(VAR_3, VAR_2);
 else {
  FUNC_0(VAR_4, VAR_3->snd_cwnd);
  FUNC_2(VAR_3, VAR_4->cnt, 1);
 }
}
