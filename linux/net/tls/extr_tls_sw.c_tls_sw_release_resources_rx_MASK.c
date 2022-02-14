
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_sw_context_rx {scalar_t__ saved_data_ready; int strp; scalar_t__ aead_recv; int rx_list; int * recv_pkt; } ;
struct TYPE_2__ {int iv; int rec_seq; } ;
struct tls_context {TYPE_1__ rx; } ;
struct sock {int sk_callback_lock; scalar_t__ sk_data_ready; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tls_context* FUNC_5 (struct sock*) ;
 struct tls_sw_context_rx* FUNC_6 (struct tls_context*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct sock *VAR_0)
{
 struct tls_context *VAR_1 = FUNC_5(VAR_0);
 struct tls_sw_context_rx *VAR_2 = FUNC_6(VAR_1);

 FUNC_1(VAR_1->rx.rec_seq);
 FUNC_1(VAR_1->rx.iv);

 if (VAR_2->aead_recv) {
  FUNC_2(VAR_2->recv_pkt);
  VAR_2->recv_pkt = ((void*)0);
  FUNC_3(&VAR_2->rx_list);
  FUNC_0(VAR_2->aead_recv);
  FUNC_4(&VAR_2->strp);




  if (VAR_2->saved_data_ready) {
   FUNC_7(&VAR_0->sk_callback_lock);
   VAR_0->sk_data_ready = VAR_2->saved_data_ready;
   FUNC_8(&VAR_0->sk_callback_lock);
  }
 }
}
