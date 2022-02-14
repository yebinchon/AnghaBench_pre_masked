
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct kcm_sock {int done; int rx_disabled; int rx_wait; struct sock sk; int kcm_sock_list; int wait_rx_list; scalar_t__ rx_psock; struct kcm_mux* mux; } ;
struct kcm_mux {int kcm_socks_cnt; int lock; int rx_lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kcm_mux*) ;
 int FUNC_3 (struct kcm_mux*,int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct kcm_sock *VAR_0)
{
 struct kcm_mux *VAR_1 = VAR_0->mux;
 struct sock *VAR_2 = &VAR_0->sk;
 int VAR_3;

 FUNC_6(&VAR_1->rx_lock);
 if (VAR_0->rx_psock) {

  FUNC_0(VAR_0->done);
  VAR_0->rx_disabled = 1;
  VAR_0->done = 1;
  FUNC_7(&VAR_1->rx_lock);
  return;
 }

 if (VAR_0->rx_wait) {
  FUNC_1(&VAR_0->wait_rx_list);
  VAR_0->rx_wait = 0;
 }

 FUNC_3(VAR_1, &VAR_2->sk_receive_queue);

 FUNC_7(&VAR_1->rx_lock);

 if (FUNC_0(FUNC_4(VAR_2)))
  return;


 FUNC_6(&VAR_1->lock);

 FUNC_1(&VAR_0->kcm_sock_list);
 VAR_1->kcm_socks_cnt--;
 VAR_3 = VAR_1->kcm_socks_cnt;

 FUNC_7(&VAR_1->lock);

 if (!VAR_3) {

  FUNC_2(VAR_1);
 }

 FUNC_0(VAR_0->rx_wait);

 FUNC_5(&VAR_0->sk);
}
