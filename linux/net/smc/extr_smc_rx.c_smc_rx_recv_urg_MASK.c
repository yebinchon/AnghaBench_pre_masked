
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union smc_host_cursor {int dummy; } smc_host_cursor ;
struct sock {scalar_t__ sk_state; int sk_shutdown; } ;
struct TYPE_3__ {int cons; } ;
struct smc_connection {scalar_t__ urg_state; int urg_rx_skip_pend; int urg_curs; TYPE_2__* rmb_desc; TYPE_1__ local_tx_ctrl; int urg_rx_byte; } ;
struct smc_sock {struct smc_connection conn; struct sock sk; } ;
struct msghdr {int msg_flags; } ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct msghdr*,int *,int) ;
 int FUNC_1 (union smc_host_cursor*,int *,struct smc_connection*) ;
 int FUNC_2 (int ,union smc_host_cursor*,int *) ;
 int FUNC_3 (struct smc_sock*,union smc_host_cursor,int ) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct smc_sock *VAR_11, struct msghdr *VAR_12, int VAR_13,
      int VAR_14)
{
 struct smc_connection *VAR_15 = &VAR_11->conn;
 union smc_host_cursor VAR_16;
 struct sock *VAR_17 = &VAR_11->sk;
 int VAR_18 = 0;

 if (FUNC_4(VAR_17, VAR_10) ||
     !(VAR_15->urg_state == VAR_9) ||
     VAR_15->urg_state == VAR_8)
  return -VAR_2;

 if (VAR_15->urg_state == VAR_9) {
  if (!(VAR_14 & VAR_4))
   VAR_11->conn.urg_state = VAR_8;
  VAR_12->msg_flags |= VAR_3;
  if (VAR_13 > 0) {
   if (!(VAR_14 & VAR_5))
    VAR_18 = FUNC_0(VAR_12, &VAR_15->urg_rx_byte, 1);
   VAR_13 = 1;
   FUNC_1(&VAR_16, &VAR_15->local_tx_ctrl.cons, VAR_15);
   if (FUNC_2(VAR_15->rmb_desc->len, &VAR_16,
       &VAR_15->urg_curs) > 1)
    VAR_15->urg_rx_skip_pend = 1;



   if (!(VAR_14 & VAR_4))
    FUNC_3(VAR_11, VAR_16, 0);
  } else {
   VAR_12->msg_flags |= VAR_5;
  }

  return VAR_18 ? -VAR_1 : VAR_13;
 }

 if (VAR_17->sk_state == VAR_7 || VAR_17->sk_shutdown & VAR_6)
  return 0;

 return -VAR_0;
}
