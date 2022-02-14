
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yeah {int pkts_acked; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; } ;
struct ack_sample {int pkts_acked; } ;


 scalar_t__ VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct yeah* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct ack_sample const*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1,
    const struct ack_sample *VAR_2)
{
 const struct inet_connection_sock *VAR_3 = FUNC_0(VAR_1);
 struct yeah *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3->icsk_ca_state == VAR_0)
  VAR_4->pkts_acked = VAR_2->pkts_acked;

 FUNC_2(VAR_1, VAR_2);
}
