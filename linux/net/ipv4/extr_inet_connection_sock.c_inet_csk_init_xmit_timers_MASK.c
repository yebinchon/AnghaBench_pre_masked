
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_timer; } ;
struct TYPE_2__ {scalar_t__ pending; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; scalar_t__ icsk_pending; int icsk_delack_timer; int icsk_retransmit_timer; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,void (*) (struct timer_list*),int ) ;

void FUNC_2(struct sock *VAR_0,
          void (*VAR_1)(struct timer_list *VAR_2),
          void (*VAR_3)(struct timer_list *VAR_4),
          void (*VAR_5)(struct timer_list *VAR_6))
{
 struct inet_connection_sock *VAR_7 = FUNC_0(VAR_0);

 FUNC_1(&VAR_7->icsk_retransmit_timer, VAR_1, 0);
 FUNC_1(&VAR_7->icsk_delack_timer, VAR_3, 0);
 FUNC_1(&VAR_0->sk_timer, VAR_5, 0);
 VAR_7->icsk_pending = VAR_7->icsk_ack.pending = 0;
}
