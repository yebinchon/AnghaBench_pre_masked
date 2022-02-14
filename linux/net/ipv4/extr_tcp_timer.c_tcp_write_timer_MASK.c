
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sock {int sk_tsq_flags; } ;
struct TYPE_2__ {struct sock sk; } ;
struct inet_connection_sock {TYPE_1__ icsk_inet; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct inet_connection_sock* FUNC_2 (int ,struct timer_list*,int ) ;
 struct inet_connection_sock* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_3)
{
 struct inet_connection_sock *VAR_4 =
   FUNC_2(VAR_4, VAR_3, VAR_2);
 struct sock *VAR_5 = &VAR_4->icsk_inet.sk;

 FUNC_0(VAR_5);
 if (!FUNC_4(VAR_5)) {
  FUNC_6(VAR_5);
 } else {

  if (!FUNC_7(VAR_0, &VAR_5->sk_tsq_flags))
   FUNC_3(VAR_5);
 }
 FUNC_1(VAR_5);
 FUNC_5(VAR_5);
}
