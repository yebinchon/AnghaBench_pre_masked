
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_type; scalar_t__ sk_state; int sk_rx_dst; int sk_dst_cache; int sk_forward_alloc; int sk_wmem_queued; int sk_wmem_alloc; int sk_rmem_alloc; int sk_error_queue; int * sk_rx_skb_cache; int sk_receive_queue; } ;
struct inet_sock {int inet_opt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct inet_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,struct sock*,...) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int ) ;

void FUNC_13(struct sock *VAR_3)
{
 struct inet_sock *VAR_4 = FUNC_5(VAR_3);

 FUNC_2(&VAR_3->sk_receive_queue);
 if (VAR_3->sk_rx_skb_cache) {
  FUNC_1(VAR_3->sk_rx_skb_cache);
  VAR_3->sk_rx_skb_cache = ((void*)0);
 }
 FUNC_2(&VAR_3->sk_error_queue);

 FUNC_10(VAR_3);

 if (VAR_3->sk_type == VAR_1 && VAR_3->sk_state != VAR_2) {
  FUNC_7("Attempt to release TCP socket in state %d %p\n",
         VAR_3->sk_state, VAR_3);
  return;
 }
 if (!FUNC_12(VAR_3, VAR_0)) {
  FUNC_7("Attempt to release alive inet socket %p\n", VAR_3);
  return;
 }

 FUNC_0(FUNC_3(&VAR_3->sk_rmem_alloc));
 FUNC_0(FUNC_9(&VAR_3->sk_wmem_alloc));
 FUNC_0(VAR_3->sk_wmem_queued);
 FUNC_0(VAR_3->sk_forward_alloc);

 FUNC_6(FUNC_8(VAR_4->inet_opt, 1));
 FUNC_4(FUNC_8(VAR_3->sk_dst_cache, 1));
 FUNC_4(VAR_3->sk_rx_dst);
 FUNC_11(VAR_3);
}
