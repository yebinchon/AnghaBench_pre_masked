
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ frto; int high_seq; int snd_nxt; } ;
struct sock {scalar_t__ sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sock*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_3, int VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_3(VAR_3);

 if (VAR_4 == VAR_0 || VAR_3->sk_state == VAR_2)
  return;

 if (FUNC_5(VAR_4 == 2)) {
  FUNC_0(VAR_3, FUNC_2(VAR_3),
       VAR_1);
  if (FUNC_1(VAR_5->snd_nxt, VAR_5->high_seq))
   return;
  VAR_5->frto = 0;
 }
 FUNC_4(VAR_3);
}
