
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; } ;
struct bictcp {int delayed_ack; } ;
struct ack_sample {int pkts_acked; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct bictcp* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2, const struct ack_sample *VAR_3)
{
 const struct inet_connection_sock *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->icsk_ca_state == VAR_1) {
  struct bictcp *VAR_5 = FUNC_1(VAR_2);

  VAR_5->delayed_ack += VAR_3->pkts_acked -
   (VAR_5->delayed_ack >> VAR_0);
 }
}
