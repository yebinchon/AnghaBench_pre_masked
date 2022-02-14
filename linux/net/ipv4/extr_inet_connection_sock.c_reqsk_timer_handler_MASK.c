
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct timer_list {int dummy; } ;
struct sock {int sk_max_ack_backlog; } ;
struct request_sock_queue {int young; int rskq_defer_accept; } ;
struct request_sock {int num_timeout; int rsk_timer; TYPE_2__* rsk_ops; struct sock* rsk_listener; } ;
struct TYPE_4__ {int sysctl_tcp_synack_retries; } ;
struct net {TYPE_1__ ipv4; } ;
struct inet_connection_sock {scalar_t__ icsk_syn_retries; struct request_sock_queue icsk_accept_queue; } ;
struct TYPE_6__ {scalar_t__ acked; } ;
struct TYPE_5__ {int (* syn_ack_timeout ) (struct request_sock*) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct request_sock* FUNC_2 (int ,struct timer_list*,int ) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct request_sock*) ;
 TYPE_3__* FUNC_5 (struct request_sock*) ;
 int FUNC_6 (struct sock*,struct request_sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (unsigned int,int ) ;
 unsigned long FUNC_9 (int,int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 struct request_sock* VAR_4 ;
 int FUNC_11 (struct request_sock_queue*) ;
 int FUNC_12 (struct request_sock_queue*) ;
 int VAR_5 ;
 struct net* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct request_sock*) ;
 int FUNC_15 (struct request_sock*,int,int,int,int*,int*) ;

__attribute__((used)) static void FUNC_16(struct timer_list *VAR_6)
{
 struct request_sock *VAR_7 = FUNC_2(VAR_7, VAR_6, VAR_5);
 struct sock *VAR_8 = VAR_7->rsk_listener;
 struct net *VAR_9 = FUNC_13(VAR_8);
 struct inet_connection_sock *VAR_10 = FUNC_3(VAR_8);
 struct request_sock_queue *VAR_11 = &VAR_10->icsk_accept_queue;
 int VAR_12, VAR_13 = 0, VAR_14 = 0;
 int VAR_15, VAR_16;
 u8 VAR_17;

 if (FUNC_7(VAR_8) != VAR_0)
  goto drop;

 VAR_15 = VAR_10->icsk_syn_retries ? : VAR_9->ipv4.sysctl_tcp_synack_retries;
 VAR_16 = VAR_15;
 VAR_12 = FUNC_11(VAR_11);
 if ((VAR_12 << 1) > FUNC_8(8U, VAR_8->sk_max_ack_backlog)) {
  int VAR_18 = FUNC_12(VAR_11) << 1;

  while (VAR_16 > 2) {
   if (VAR_12 < VAR_18)
    break;
   VAR_16--;
   VAR_18 <<= 1;
  }
 }
 VAR_17 = FUNC_0(VAR_11->rskq_defer_accept);
 if (VAR_17)
  VAR_15 = VAR_17;
 FUNC_15(VAR_7, VAR_16, VAR_15, VAR_17,
         &VAR_13, &VAR_14);
 VAR_7->rsk_ops->syn_ack_timeout(VAR_7);
 if (!VAR_13 &&
     (!VAR_14 ||
      !FUNC_6(VAR_8, VAR_7) ||
      FUNC_5(VAR_7)->acked)) {
  unsigned long VAR_19;

  if (VAR_7->num_timeout++ == 0)
   FUNC_1(&VAR_11->young);
  VAR_19 = FUNC_9(VAR_2 << VAR_7->num_timeout, VAR_1);
  FUNC_10(&VAR_7->rsk_timer, VAR_3 + VAR_19);
  return;
 }
drop:
 FUNC_4(VAR_8, VAR_7);
}
