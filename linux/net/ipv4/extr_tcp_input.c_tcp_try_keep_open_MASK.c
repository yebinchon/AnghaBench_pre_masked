
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int snd_nxt; int high_seq; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int icsk_ca_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct tcp_sock*) ;
 int FUNC_3 (struct sock*,int) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = VAR_1;

 if (FUNC_2(VAR_3) || FUNC_1(VAR_2))
  VAR_4 = VAR_0;

 if (FUNC_0(VAR_2)->icsk_ca_state != VAR_4) {
  FUNC_3(VAR_2, VAR_4);
  VAR_3->high_seq = VAR_3->snd_nxt;
 }
}
