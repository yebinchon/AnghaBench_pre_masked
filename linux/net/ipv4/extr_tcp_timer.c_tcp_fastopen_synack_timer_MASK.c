
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_sock {scalar_t__ retrans_stamp; } ;
struct sock {int dummy; } ;
struct request_sock {int num_timeout; TYPE_2__* rsk_ops; } ;
struct inet_connection_sock {int icsk_retransmits; scalar_t__ icsk_syn_retries; } ;
struct TYPE_4__ {int sysctl_tcp_synack_retries; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;
struct TYPE_5__ {int (* syn_ack_timeout ) (struct request_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ,int,int ) ;
 int FUNC_2 (struct sock*,struct request_sock*) ;
 TYPE_3__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct request_sock*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct tcp_sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_3, struct request_sock *VAR_4)
{
 struct inet_connection_sock *VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = VAR_5->icsk_syn_retries ? :
     FUNC_3(VAR_3)->ipv4.sysctl_tcp_synack_retries + 1;
 struct tcp_sock *VAR_7 = FUNC_6(VAR_3);

 VAR_4->rsk_ops->syn_ack_timeout(VAR_4);

 if (VAR_4->num_timeout >= VAR_6) {
  FUNC_8(VAR_3);
  return;
 }

 if (VAR_5->icsk_retransmits == 1)
  FUNC_5(VAR_3);





 FUNC_2(VAR_3, VAR_4);
 VAR_4->num_timeout++;
 VAR_5->icsk_retransmits++;
 if (!VAR_7->retrans_stamp)
  VAR_7->retrans_stamp = FUNC_7(VAR_7);
 FUNC_1(VAR_3, VAR_0,
     VAR_2 << VAR_4->num_timeout, VAR_1);
}
