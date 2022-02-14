
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {scalar_t__ rcv_nxt; scalar_t__ rcv_wup; int window_clamp; int copied_seq; } ;
struct sock {int sk_shutdown; int sk_rmem_alloc; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ rcv_mss; int pending; scalar_t__ blocked; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;
typedef int __u32 ;
struct TYPE_4__ {int end_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,char*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 struct inet_connection_sock* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (struct tcp_sock*) ;
 int FUNC_10 (struct sock*) ;
 struct tcp_sock* FUNC_11 (struct sock*) ;

__attribute__((used)) static void FUNC_12(struct sock *VAR_3, int VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_11(VAR_3);
 bool VAR_6 = 0;

 struct sk_buff *VAR_7 = FUNC_8(&VAR_3->sk_receive_queue);

 FUNC_1(VAR_7 && !FUNC_4(VAR_5->copied_seq, FUNC_0(VAR_7)->end_seq),
      "cleanup rbuf bug: copied %X seq %X rcvnxt %X\n",
      VAR_5->copied_seq, FUNC_0(VAR_7)->end_seq, VAR_5->rcv_nxt);

 if (FUNC_6(VAR_3)) {
  const struct inet_connection_sock *VAR_8 = FUNC_5(VAR_3);


  if (VAR_8->icsk_ack.blocked ||

      VAR_5->rcv_nxt - VAR_5->rcv_wup > VAR_8->icsk_ack.rcv_mss ||






      (VAR_4 > 0 &&
       ((VAR_8->icsk_ack.pending & VAR_1) ||
        ((VAR_8->icsk_ack.pending & VAR_0) &&
         !FUNC_7(VAR_3))) &&
        !FUNC_3(&VAR_3->sk_rmem_alloc)))
   VAR_6 = 1;
 }







 if (VAR_4 > 0 && !VAR_6 && !(VAR_3->sk_shutdown & VAR_2)) {
  __u32 VAR_9 = FUNC_9(VAR_5);


  if (2*VAR_9 <= VAR_5->window_clamp) {
   __u32 VAR_10 = FUNC_2(VAR_3);






   if (VAR_10 && VAR_10 >= 2 * VAR_9)
    VAR_6 = 1;
  }
 }
 if (VAR_6)
  FUNC_10(VAR_3);
}
