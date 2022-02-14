
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct TYPE_2__ {int pending; int ato; int timeout; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; int icsk_rto; int icsk_delack_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int VAR_5 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int *,int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 scalar_t__ FUNC_13 (struct sock*) ;
 scalar_t__ FUNC_14 (int ,int ) ;

void FUNC_15(struct sock *VAR_6)
{
 struct inet_connection_sock *VAR_7 = FUNC_1(VAR_6);

 FUNC_7(VAR_6);

 if (((1 << VAR_6->sk_state) & (VAR_2 | VAR_3)) ||
     !(VAR_7->icsk_ack.pending & VAR_0))
  goto out;

 if (FUNC_14(VAR_7->icsk_ack.timeout, VAR_5)) {
  FUNC_8(VAR_6, &VAR_7->icsk_delack_timer, VAR_7->icsk_ack.timeout);
  goto out;
 }
 VAR_7->icsk_ack.pending &= ~VAR_0;

 if (FUNC_2(VAR_6)) {
  if (!FUNC_4(VAR_6)) {

   VAR_7->icsk_ack.ato = FUNC_5(VAR_7->icsk_ack.ato << 1, VAR_7->icsk_rto);
  } else {



   FUNC_3(VAR_6);
   VAR_7->icsk_ack.ato = VAR_4;
  }
  FUNC_10(FUNC_12(VAR_6));
  FUNC_11(VAR_6);
  FUNC_0(FUNC_9(VAR_6), VAR_1);
 }

out:
 if (FUNC_13(VAR_6))
  FUNC_6(VAR_6);
}
