
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_backoff; } ;
struct TYPE_2__ {int end_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 unsigned long FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*,int ,unsigned long,int ,int *) ;
 struct sk_buff* FUNC_6 (struct sock*) ;
 struct tcp_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct tcp_sock const*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_2(VAR_2);
 struct sk_buff *VAR_4 = FUNC_6(VAR_2);
 const struct tcp_sock *VAR_5 = FUNC_7(VAR_2);


 if (!VAR_4)
  return;
 if (!FUNC_1(FUNC_0(VAR_4)->end_seq, FUNC_8(VAR_5))) {
  VAR_3->icsk_backoff = 0;
  FUNC_3(VAR_2, VAR_0);



 } else {
  unsigned long VAR_6 = FUNC_4(VAR_2, VAR_1);

  FUNC_5(VAR_2, VAR_0,
         VAR_6, VAR_1, ((void*)0));
 }
}
