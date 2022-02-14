
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_congestion_ops {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct inet_connection_sock {int icsk_ca_setsockopt; int icsk_ca_priv; struct tcp_congestion_ops const* icsk_ca_ops; } ;


 scalar_t__ VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1,
       const struct tcp_congestion_ops *VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_1);
 VAR_3->icsk_ca_ops = VAR_2;
 VAR_3->icsk_ca_setsockopt = 1;
 FUNC_1(VAR_3->icsk_ca_priv, 0, sizeof(VAR_3->icsk_ca_priv));

 if (VAR_1->sk_state != VAR_0)
  FUNC_3(VAR_1);
}
