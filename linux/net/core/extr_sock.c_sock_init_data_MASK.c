
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {struct sock* sk; int wq; int type; } ;
struct TYPE_4__ {scalar_t__ offset; int * page; } ;
struct sock {size_t sk_family; int sk_peek_off; int sk_rcvlowat; unsigned long sk_max_pacing_rate; unsigned long sk_pacing_rate; int sk_pacing_shift; int sk_incoming_cpu; int sk_drops; int sk_refcnt; int sk_ll_usec; scalar_t__ sk_napi_id; int sk_zckey; int sk_stamp_seq; int sk_stamp; void* sk_sndtimeo; void* sk_rcvtimeo; scalar_t__ sk_write_pending; int * sk_peer_cred; int * sk_peer_pid; TYPE_1__ sk_frag; int sk_destruct; int sk_error_report; int sk_write_space; int sk_data_ready; int sk_state_change; int sk_callback_lock; scalar_t__ sk_kern_sock; int sk_uid; int sk_wq; int sk_type; int sk_state; int sk_sndbuf; int sk_rcvbuf; int sk_allocation; int sk_timer; int * sk_send_head; } ;
struct TYPE_6__ {int i_uid; } ;
struct TYPE_5__ {int user_ns; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (struct socket*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct socket*) ;
 int FUNC_11 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (int *,int *,int ) ;

void FUNC_15(struct socket *VAR_17, struct sock *VAR_18)
{
 FUNC_8(VAR_18);
 VAR_18->sk_send_head = ((void*)0);

 FUNC_14(&VAR_18->sk_timer, ((void*)0), 0);

 VAR_18->sk_allocation = VAR_0;
 VAR_18->sk_rcvbuf = VAR_15;
 VAR_18->sk_sndbuf = VAR_16;
 VAR_18->sk_state = VAR_4;
 FUNC_10(VAR_18, VAR_17);

 FUNC_13(VAR_18, VAR_3);

 if (VAR_17) {
  VAR_18->sk_type = VAR_17->type;
  FUNC_0(VAR_18->sk_wq, &VAR_17->wq);
  VAR_17->sk = VAR_18;
  VAR_18->sk_uid = FUNC_1(VAR_17)->i_uid;
 } else {
  FUNC_0(VAR_18->sk_wq, ((void*)0));
  VAR_18->sk_uid = FUNC_4(FUNC_12(VAR_18)->user_ns, 0);
 }

 FUNC_6(&VAR_18->sk_callback_lock);
 if (VAR_18->sk_kern_sock)
  FUNC_3(
   &VAR_18->sk_callback_lock,
   VAR_8 + VAR_18->sk_family,
   VAR_7[VAR_18->sk_family]);
 else
  FUNC_3(
   &VAR_18->sk_callback_lock,
   VAR_5 + VAR_18->sk_family,
   VAR_6[VAR_18->sk_family]);

 VAR_18->sk_state_change = VAR_12;
 VAR_18->sk_data_ready = VAR_11;
 VAR_18->sk_write_space = VAR_13;
 VAR_18->sk_error_report = VAR_10;
 VAR_18->sk_destruct = VAR_9;

 VAR_18->sk_frag.page = ((void*)0);
 VAR_18->sk_frag.offset = 0;
 VAR_18->sk_peek_off = -1;

 VAR_18->sk_peer_pid = ((void*)0);
 VAR_18->sk_peer_cred = ((void*)0);
 VAR_18->sk_write_pending = 0;
 VAR_18->sk_rcvlowat = 1;
 VAR_18->sk_rcvtimeo = VAR_1;
 VAR_18->sk_sndtimeo = VAR_1;

 VAR_18->sk_stamp = VAR_2;



 FUNC_2(&VAR_18->sk_zckey, 0);






 VAR_18->sk_max_pacing_rate = ~0UL;
 VAR_18->sk_pacing_rate = ~0UL;
 VAR_18->sk_pacing_shift = 10;
 VAR_18->sk_incoming_cpu = -1;

 FUNC_9(VAR_18);




 FUNC_11();
 FUNC_5(&VAR_18->sk_refcnt, 1);
 FUNC_2(&VAR_18->sk_drops, 0);
}
