
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ rcv_nxt; int syn_data_acked; int bytes_received; scalar_t__ segs_in; } ;
struct sock {int sk_receive_queue; } ;
struct sk_buff {int len; int truesize; } ;
struct TYPE_2__ {scalar_t__ end_seq; int tcp_flags; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (struct sock*,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct tcp_sock*,struct sk_buff*) ;
 struct tcp_sock* FUNC_10 (struct sock*) ;

void FUNC_11(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_10(VAR_3);

 if (FUNC_0(VAR_4)->end_seq == VAR_5->rcv_nxt)
  return;

 VAR_4 = FUNC_4(VAR_4, VAR_0);
 if (!VAR_4)
  return;

 FUNC_5(VAR_4);






 VAR_5->segs_in = 0;
 FUNC_9(VAR_5, VAR_4);
 FUNC_1(VAR_4, FUNC_8(VAR_4));
 FUNC_3(VAR_3, VAR_4->truesize);
 FUNC_6(VAR_4, VAR_3);

 FUNC_0(VAR_4)->seq++;
 FUNC_0(VAR_4)->tcp_flags &= ~VAR_2;

 VAR_5->rcv_nxt = FUNC_0(VAR_4)->end_seq;
 FUNC_2(&VAR_3->sk_receive_queue, VAR_4);
 VAR_5->syn_data_acked = 1;




 VAR_5->bytes_received = VAR_4->len;

 if (FUNC_0(VAR_4)->tcp_flags & VAR_1)
  FUNC_7(VAR_3);
}
