
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;
struct bictcp {int cnt; int end_seq; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct bictcp*,int ,int ) ;
 scalar_t__ VAR_0 ;
 struct bictcp* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct tcp_sock*,int ,int ) ;
 scalar_t__ FUNC_5 (struct tcp_sock*) ;
 int FUNC_6 (struct sock*) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct tcp_sock*,int ) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_7(VAR_1);
 struct bictcp *VAR_5 = FUNC_3(VAR_1);

 if (!FUNC_6(VAR_1))
  return;

 if (FUNC_5(VAR_4)) {
  if (VAR_0 && FUNC_0(VAR_2, VAR_5->end_seq))
   FUNC_1(VAR_1);
  VAR_3 = FUNC_8(VAR_4, VAR_3);
  if (!VAR_3)
   return;
 }
 FUNC_2(VAR_5, VAR_4->snd_cwnd, VAR_3);
 FUNC_4(VAR_4, VAR_5->cnt, VAR_3);
}
