
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_sock {int map_list_lock; int map_list; int tx_completion_lock; int rx_lock; int mutex; int state; } ;
struct socket {scalar_t__ type; int * ops; int state; } ;
struct sock {int sk_destruct; int sk_family; } ;
struct TYPE_2__ {int lock; int list; } ;
struct net {TYPE_1__ xdp; int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sock*,int *) ;
 struct sock* FUNC_8 (struct net*,int ,int ,int *,int) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct socket*,struct sock*) ;
 int FUNC_11 (struct net*,int *,int) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (int *) ;
 struct xdp_sock* FUNC_14 (struct sock*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_15(struct net *VAR_14, struct socket *VAR_15, int VAR_16,
        int VAR_17)
{
 struct sock *VAR_18;
 struct xdp_sock *VAR_19;

 if (!FUNC_6(VAR_14->user_ns, VAR_0))
  return -VAR_2;
 if (VAR_15->type != VAR_7)
  return -VAR_4;

 if (VAR_16)
  return -VAR_3;

 VAR_15->state = VAR_9;

 VAR_18 = FUNC_8(VAR_14, VAR_6, VAR_5, &VAR_12, VAR_17);
 if (!VAR_18)
  return -VAR_1;

 VAR_15->ops = &VAR_13;

 FUNC_10(VAR_15, VAR_18);

 VAR_18->sk_family = VAR_6;

 VAR_18->sk_destruct = VAR_11;
 FUNC_9(VAR_18);

 FUNC_12(VAR_18, VAR_8);

 VAR_19 = FUNC_14(VAR_18);
 VAR_19->state = VAR_10;
 FUNC_3(&VAR_19->mutex);
 FUNC_13(&VAR_19->rx_lock);
 FUNC_13(&VAR_19->tx_completion_lock);

 FUNC_0(&VAR_19->map_list);
 FUNC_13(&VAR_19->map_list_lock);

 FUNC_4(&VAR_14->xdp.lock);
 FUNC_7(VAR_18, &VAR_14->xdp.list);
 FUNC_5(&VAR_14->xdp.lock);

 FUNC_1();
 FUNC_11(VAR_14, &VAR_12, 1);
 FUNC_2();

 return 0;
}
