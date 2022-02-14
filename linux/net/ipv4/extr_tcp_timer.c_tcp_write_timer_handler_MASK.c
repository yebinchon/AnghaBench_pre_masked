
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;
struct inet_connection_sock {int icsk_pending; int icsk_timeout; int icsk_retransmit_timer; } ;






 int VAR_0 ;
 int VAR_1 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int VAR_2 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (int ,int ) ;

void FUNC_10(struct sock *VAR_3)
{
 struct inet_connection_sock *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 if (((1 << VAR_3->sk_state) & (VAR_0 | VAR_1)) ||
     !VAR_4->icsk_pending)
  goto out;

 if (FUNC_9(VAR_4->icsk_timeout, VAR_2)) {
  FUNC_2(VAR_3, &VAR_4->icsk_retransmit_timer, VAR_4->icsk_timeout);
  goto out;
 }

 FUNC_3(FUNC_8(VAR_3));
 VAR_5 = VAR_4->icsk_pending;

 switch (VAR_5) {
 case 129:
  FUNC_5(VAR_3);
  break;
 case 131:
  FUNC_7(VAR_3);
  break;
 case 128:
  VAR_4->icsk_pending = 0;
  FUNC_6(VAR_3);
  break;
 case 130:
  VAR_4->icsk_pending = 0;
  FUNC_4(VAR_3);
  break;
 }

out:
 FUNC_1(VAR_3);
}
