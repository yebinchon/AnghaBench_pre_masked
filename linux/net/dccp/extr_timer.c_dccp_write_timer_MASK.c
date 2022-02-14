
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct TYPE_2__ {struct sock sk; } ;
struct inet_connection_sock {int icsk_pending; scalar_t__ icsk_timeout; int icsk_retransmit_timer; TYPE_1__ icsk_inet; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct inet_connection_sock* FUNC_3 (int ,struct timer_list*,int ) ;
 struct inet_connection_sock* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_5)
{
 struct inet_connection_sock *VAR_6 =
   FUNC_3(VAR_6, VAR_5, VAR_3);
 struct sock *VAR_7 = &VAR_6->icsk_inet.sk;
 int VAR_8 = 0;

 FUNC_0(VAR_7);
 if (FUNC_5(VAR_7)) {

  FUNC_4(VAR_7, &VAR_6->icsk_retransmit_timer,
          VAR_4 + (VAR_1 / 20));
  goto out;
 }

 if (VAR_7->sk_state == VAR_0 || !VAR_6->icsk_pending)
  goto out;

 if (FUNC_7(VAR_6->icsk_timeout, VAR_4)) {
  FUNC_4(VAR_7, &VAR_6->icsk_retransmit_timer,
          VAR_6->icsk_timeout);
  goto out;
 }

 VAR_8 = VAR_6->icsk_pending;
 VAR_6->icsk_pending = 0;

 switch (VAR_8) {
 case 128:
  FUNC_2(VAR_7);
  break;
 }
out:
 FUNC_1(VAR_7);
 FUNC_6(VAR_7);
}
