
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int type; int * ops; } ;
struct sock {int dummy; } ;
struct net {int dummy; } ;
struct kcm_net {int mutex; int count; int mux_list; } ;
struct kcm_mux {int rx_hold_queue; int kcm_mux_list; struct kcm_net* knet; int psocks_avail; int psocks_ready; int psocks; int kcm_tx_waiters; int kcm_rx_waiters; int kcm_socks; int rx_lock; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_1 (int ,struct kcm_mux*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct sock*) ;
 struct kcm_mux* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct kcm_net* FUNC_7 (struct net*,int ) ;
 struct sock* FUNC_8 (struct net*,int ,int ,int *,int) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct socket*,struct sock*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct net *VAR_11, struct socket *VAR_12,
        int VAR_13, int VAR_14)
{
 struct kcm_net *VAR_15 = FUNC_7(VAR_11, VAR_8);
 struct sock *VAR_16;
 struct kcm_mux *VAR_17;

 switch (VAR_12->type) {
 case 129:
  VAR_12->ops = &VAR_6;
  break;
 case 128:
  VAR_12->ops = &VAR_10;
  break;
 default:
  return -VAR_2;
 }

 if (VAR_13 != VAR_4)
  return -VAR_1;

 VAR_16 = FUNC_8(VAR_11, VAR_5, VAR_3, &VAR_9, VAR_14);
 if (!VAR_16)
  return -VAR_0;


 VAR_17 = FUNC_3(VAR_7, VAR_3);
 if (!VAR_17) {
  FUNC_9(VAR_16);
  return -VAR_0;
 }

 FUNC_12(&VAR_17->lock);
 FUNC_12(&VAR_17->rx_lock);
 FUNC_0(&VAR_17->kcm_socks);
 FUNC_0(&VAR_17->kcm_rx_waiters);
 FUNC_0(&VAR_17->kcm_tx_waiters);

 FUNC_0(&VAR_17->psocks);
 FUNC_0(&VAR_17->psocks_ready);
 FUNC_0(&VAR_17->psocks_avail);

 VAR_17->knet = VAR_15;


 FUNC_5(&VAR_15->mutex);
 FUNC_4(&VAR_17->kcm_mux_list, &VAR_15->mux_list);
 VAR_15->count++;
 FUNC_6(&VAR_15->mutex);

 FUNC_10(&VAR_17->rx_hold_queue);


 FUNC_11(VAR_12, VAR_16);
 FUNC_1(FUNC_2(VAR_16), VAR_17);

 return 0;
}
