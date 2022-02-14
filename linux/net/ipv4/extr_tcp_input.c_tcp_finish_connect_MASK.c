
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int snd_wscale; } ;
struct tcp_sock {scalar_t__ pred_flags; int snd_wnd; TYPE_2__ rx_opt; void* lsndtime; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {void* lrcvtime; } ;
struct inet_connection_sock {TYPE_1__* icsk_af_ops; TYPE_3__ icsk_ack; } ;
struct TYPE_4__ {int (* sk_rx_dst_set ) (struct sock*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tcp_sock*,int ) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct tcp_sock*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 int FUNC_8 (struct sock*,int ) ;
 void* VAR_3 ;
 int FUNC_9 (struct sock*,int ) ;
 struct tcp_sock* FUNC_10 (struct sock*) ;

void FUNC_11(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_10(VAR_4);
 struct inet_connection_sock *VAR_7 = FUNC_1(VAR_4);

 FUNC_9(VAR_4, VAR_2);
 VAR_7->icsk_ack.lrcvtime = VAR_3;

 if (VAR_5) {
  VAR_7->icsk_af_ops->sk_rx_dst_set(VAR_4, VAR_5);
  FUNC_4(VAR_4, VAR_5);
  FUNC_5(VAR_4, VAR_5);
 }

 FUNC_8(VAR_4, VAR_0);




 VAR_6->lsndtime = VAR_3;

 if (FUNC_6(VAR_4, VAR_1))
  FUNC_2(VAR_4, FUNC_3(VAR_6));

 if (!VAR_6->rx_opt.snd_wscale)
  FUNC_0(VAR_6, VAR_6->snd_wnd);
 else
  VAR_6->pred_flags = 0;
}
