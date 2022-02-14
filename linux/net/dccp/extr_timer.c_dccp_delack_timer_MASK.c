
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct TYPE_4__ {int blocked; int pending; int ato; scalar_t__ timeout; } ;
struct TYPE_3__ {struct sock sk; } ;
struct inet_connection_sock {TYPE_2__ icsk_ack; int icsk_rto; int icsk_delack_timer; TYPE_1__ icsk_inet; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct inet_connection_sock* FUNC_4 (int ,struct timer_list*,int ) ;
 struct inet_connection_sock* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct sock*,int *,scalar_t__) ;
 int FUNC_10 (struct sock*) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct timer_list *VAR_9)
{
 struct inet_connection_sock *VAR_10 =
   FUNC_4(VAR_10, VAR_9, VAR_7);
 struct sock *VAR_11 = &VAR_10->icsk_inet.sk;

 FUNC_1(VAR_11);
 if (FUNC_11(VAR_11)) {

  VAR_10->icsk_ack.blocked = 1;
  FUNC_0(FUNC_10(VAR_11), VAR_2);
  FUNC_9(VAR_11, &VAR_10->icsk_delack_timer,
          VAR_8 + VAR_5);
  goto out;
 }

 if (VAR_11->sk_state == VAR_0 ||
     !(VAR_10->icsk_ack.pending & VAR_1))
  goto out;
 if (FUNC_13(VAR_10->icsk_ack.timeout, VAR_8)) {
  FUNC_9(VAR_11, &VAR_10->icsk_delack_timer,
          VAR_10->icsk_ack.timeout);
  goto out;
 }

 VAR_10->icsk_ack.pending &= ~VAR_1;

 if (FUNC_5(VAR_11)) {
  if (!FUNC_7(VAR_11)) {

   VAR_10->icsk_ack.ato = FUNC_8(VAR_10->icsk_ack.ato << 1,
       VAR_10->icsk_rto);
  } else {



   FUNC_6(VAR_11);
   VAR_10->icsk_ack.ato = VAR_4;
  }
  FUNC_3(VAR_11);
  FUNC_0(FUNC_10(VAR_11), VAR_3);
 }
out:
 FUNC_2(VAR_11);
 FUNC_12(VAR_11);
}
