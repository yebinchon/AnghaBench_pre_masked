
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcp_sock {scalar_t__ syn_fastopen_ch; int out_of_order_queue; int data_segs_in; int syn_fastopen; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {TYPE_1__* dev; } ;
struct TYPE_8__ {int tcp_flags; } ;
struct TYPE_6__ {int tfo_active_disable_times; } ;
struct TYPE_7__ {TYPE_2__ ipv4; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct dst_entry*) ;
 struct dst_entry* FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*) ;
 TYPE_3__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;

void FUNC_10(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_9(VAR_2);
 struct dst_entry *VAR_4;
 struct sk_buff *VAR_5;

 if (!VAR_3->syn_fastopen)
  return;

 if (!VAR_3->data_segs_in) {
  VAR_5 = FUNC_5(&VAR_3->out_of_order_queue);
  if (VAR_5 && !FUNC_6(VAR_5)) {
   if (FUNC_0(VAR_5)->tcp_flags & VAR_1) {
    FUNC_8(VAR_2);
    return;
   }
  }
 } else if (VAR_3->syn_fastopen_ch &&
     FUNC_1(&FUNC_7(VAR_2)->ipv4.tfo_active_disable_times)) {
  VAR_4 = FUNC_4(VAR_2);
  if (!(VAR_4 && VAR_4->dev && (VAR_4->dev->flags & VAR_0)))
   FUNC_2(&FUNC_7(VAR_2)->ipv4.tfo_active_disable_times, 0);
  FUNC_3(VAR_4);
 }
}
