
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sock {int sk_tsq_flags; } ;
struct TYPE_4__ {int blocked; } ;
struct TYPE_3__ {struct sock sk; } ;
struct inet_connection_sock {TYPE_2__ icsk_ack; TYPE_1__ icsk_inet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct inet_connection_sock* FUNC_3 (int ,struct timer_list*,int ) ;
 struct inet_connection_sock* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_4)
{
 struct inet_connection_sock *VAR_5 =
   FUNC_3(VAR_5, VAR_4, VAR_3);
 struct sock *VAR_6 = &VAR_5->icsk_inet.sk;

 FUNC_1(VAR_6);
 if (!FUNC_6(VAR_6)) {
  FUNC_8(VAR_6);
 } else {
  VAR_5->icsk_ack.blocked = 1;
  FUNC_0(FUNC_5(VAR_6), VAR_0);

  if (!FUNC_9(VAR_1, &VAR_6->sk_tsq_flags))
   FUNC_4(VAR_6);
 }
 FUNC_2(VAR_6);
 FUNC_7(VAR_6);
}
