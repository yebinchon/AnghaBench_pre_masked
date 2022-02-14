
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_priority; int sk_bound_dev_if; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int rsk_rcv_wnd; int ts_recent; } ;
struct TYPE_8__ {int rcv_wscale; } ;
struct TYPE_7__ {int saddr; } ;
struct TYPE_6__ {scalar_t__ ts_off; int rcv_nxt; scalar_t__ snt_isn; } ;
struct TYPE_5__ {scalar_t__ snd_nxt; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (struct request_sock*) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct request_sock*) ;
 TYPE_1__* FUNC_3 (struct sock const*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct sock const*,int *) ;
 int FUNC_6 (struct sock const*,struct sk_buff*,scalar_t__,int ,int,scalar_t__,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(const struct sock *VAR_1, struct sk_buff *VAR_2,
      struct request_sock *VAR_3)
{
 FUNC_6(VAR_1, VAR_2, (VAR_1->sk_state == VAR_0) ?
   FUNC_2(VAR_3)->snt_isn + 1 : FUNC_3(VAR_1)->snd_nxt,
   FUNC_2(VAR_3)->rcv_nxt,
   VAR_3->rsk_rcv_wnd >> FUNC_0(VAR_3)->rcv_wscale,
   FUNC_4() + FUNC_2(VAR_3)->ts_off,
   VAR_3->ts_recent, VAR_1->sk_bound_dev_if,
   FUNC_5(VAR_1, &FUNC_1(VAR_2)->saddr),
   0, 0, VAR_1->sk_priority);
}
