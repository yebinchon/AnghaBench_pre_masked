
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {TYPE_3__* sk_socket; int sk_callback_lock; int sk_state_change; int sk_write_space; int sk_data_ready; int * sk_user_data; } ;
struct kcm_psock {int done; int psock_list; int psock_avail_list; int tx_stopped; TYPE_2__* tx_kcm; int strp; int stats; int bpf_prog; int * ready_rx_msg; int psock_ready_list; int rx_kcm; int save_state_change; int save_write_space; int save_data_ready; struct kcm_mux* mux; struct sock* sk; } ;
struct TYPE_4__ {int psock_unattach_rsvd; int psock_unattach; int rx_ready_drops; } ;
struct kcm_mux {int lock; int psocks_cnt; TYPE_1__ stats; int aggregate_strp_stats; int aggregate_psock_stats; int rx_lock; } ;
struct TYPE_6__ {int file; } ;
struct TYPE_5__ {int tx_work; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct kcm_psock*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct kcm_psock*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static void FUNC_21(struct kcm_psock *VAR_3)
{
 struct sock *VAR_4 = VAR_3->sk;
 struct kcm_mux *VAR_5 = VAR_3->mux;

 FUNC_9(VAR_4);




 FUNC_19(&VAR_4->sk_callback_lock);
 VAR_4->sk_user_data = ((void*)0);
 VAR_4->sk_data_ready = VAR_3->save_data_ready;
 VAR_4->sk_write_space = VAR_3->save_write_space;
 VAR_4->sk_state_change = VAR_3->save_state_change;
 FUNC_18(&VAR_3->strp);

 if (FUNC_1(VAR_3->rx_kcm)) {
  FUNC_20(&VAR_4->sk_callback_lock);
  FUNC_11(VAR_4);
  return;
 }

 FUNC_15(&VAR_5->rx_lock);




 if (VAR_3->ready_rx_msg) {
  FUNC_8(&VAR_3->psock_ready_list);
  FUNC_6(VAR_3->ready_rx_msg);
  VAR_3->ready_rx_msg = ((void*)0);
  FUNC_0(VAR_5->stats.rx_ready_drops);
 }

 FUNC_16(&VAR_5->rx_lock);

 FUNC_20(&VAR_4->sk_callback_lock);


 FUNC_11(VAR_4);
 FUNC_17(&VAR_3->strp);
 FUNC_9(VAR_4);

 FUNC_3(VAR_3->bpf_prog);

 FUNC_15(&VAR_5->lock);

 FUNC_2(&VAR_3->stats, &VAR_5->aggregate_psock_stats);
 FUNC_12(&VAR_3->strp, &VAR_5->aggregate_strp_stats);

 FUNC_0(VAR_5->stats.psock_unattach);

 if (VAR_3->tx_kcm) {




  FUNC_0(VAR_5->stats.psock_unattach_rsvd);
  FUNC_16(&VAR_5->lock);





  FUNC_5(VAR_3, VAR_0, 0);

  FUNC_15(&VAR_5->lock);
  if (!VAR_3->tx_kcm) {

   goto no_reserved;
  }
  VAR_3->done = 1;


  FUNC_13();


  FUNC_10(VAR_2, &VAR_3->tx_kcm->tx_work);
  FUNC_16(&VAR_5->lock);
 } else {
no_reserved:
  if (!VAR_3->tx_stopped)
   FUNC_8(&VAR_3->psock_avail_list);
  FUNC_8(&VAR_3->psock_list);
  VAR_5->psocks_cnt--;
  FUNC_16(&VAR_5->lock);

  FUNC_14(VAR_4);
  FUNC_4(VAR_4->sk_socket->file);
  FUNC_7(VAR_1, VAR_3);
 }

 FUNC_11(VAR_4);
}
