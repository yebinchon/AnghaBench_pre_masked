
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_congestion_ops {int flags; int owner; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int tcp_congestion_control; } ;
struct net {TYPE_1__ ipv4; } ;
struct inet_connection_sock {int icsk_ca_priv; struct tcp_congestion_ops const* icsk_ca_ops; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_0 ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int ,int) ;
 struct tcp_congestion_ops* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct net* FUNC_7 (struct sock*) ;
 struct tcp_congestion_ops VAR_1 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct sock *VAR_2)
{
 struct net *VAR_3 = FUNC_7(VAR_2);
 struct inet_connection_sock *VAR_4 = FUNC_2(VAR_2);
 const struct tcp_congestion_ops *VAR_5;

 FUNC_5();
 VAR_5 = FUNC_4(VAR_3->ipv4.tcp_congestion_control);
 if (FUNC_9(!FUNC_8(VAR_5->owner)))
  VAR_5 = &VAR_1;
 VAR_4->icsk_ca_ops = VAR_5;
 FUNC_6();

 FUNC_3(VAR_4->icsk_ca_priv, 0, sizeof(VAR_4->icsk_ca_priv));
 if (VAR_5->flags & VAR_0)
  FUNC_1(VAR_2);
 else
  FUNC_0(VAR_2);
}
