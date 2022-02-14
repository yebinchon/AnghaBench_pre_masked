
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; scalar_t__ sk_ack_backlog; } ;
struct inet_sock {int inet_num; int inet_sport; } ;
struct inet_connection_sock {int icsk_accept_queue; } ;
struct TYPE_2__ {int (* hash ) (struct sock*) ;int (* get_port ) (struct sock*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*) ;

int FUNC_11(struct sock *VAR_3, int VAR_4)
{
 struct inet_connection_sock *VAR_5 = FUNC_1(VAR_3);
 struct inet_sock *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = -VAR_0;

 FUNC_7(&VAR_5->icsk_accept_queue);

 VAR_3->sk_ack_backlog = 0;
 FUNC_2(VAR_3);






 FUNC_5(VAR_3, VAR_2);
 if (!VAR_3->sk_prot->get_port(VAR_3, VAR_6->inet_num)) {
  VAR_6->inet_sport = FUNC_0(VAR_6->inet_num);

  FUNC_8(VAR_3);
  VAR_7 = VAR_3->sk_prot->hash(VAR_3);

  if (FUNC_6(!VAR_7))
   return 0;
 }

 FUNC_4(VAR_3, VAR_1);
 return VAR_7;
}
