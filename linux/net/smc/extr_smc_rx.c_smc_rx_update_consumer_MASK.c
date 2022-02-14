
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union smc_host_cursor {int dummy; } smc_host_cursor ;
struct sock {int dummy; } ;
struct TYPE_4__ {int cons; } ;
struct smc_connection {scalar_t__ urg_state; int urg_rx_skip_pend; TYPE_2__ local_tx_ctrl; TYPE_1__* rmb_desc; int urg_curs; } ;
struct smc_sock {struct sock sk; struct smc_connection conn; } ;
struct TYPE_3__ {int len; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,union smc_host_cursor*,int) ;
 int FUNC_1 (int ,union smc_host_cursor*,int *) ;
 int FUNC_2 (int *,union smc_host_cursor*,struct smc_connection*) ;
 int FUNC_3 (struct smc_connection*,int) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct smc_sock *VAR_3,
      union smc_host_cursor VAR_4, size_t VAR_5)
{
 struct smc_connection *VAR_6 = &VAR_3->conn;
 struct sock *VAR_7 = &VAR_3->sk;
 bool VAR_8 = 0;
 int VAR_9, VAR_10 = 0;

 FUNC_0(VAR_6->rmb_desc->len, &VAR_4, VAR_5);


 if (VAR_6->urg_state == VAR_1 || VAR_6->urg_rx_skip_pend) {
  VAR_9 = FUNC_1(VAR_6->rmb_desc->len, &VAR_4,
         &VAR_6->urg_curs);
  if (FUNC_4(VAR_7, VAR_2)) {
   if (VAR_9 == 0) {
    VAR_8 = 1;
    VAR_10 = 1;
    VAR_6->urg_state = VAR_0;
   }
  } else {
   if (VAR_9 == 1) {

    VAR_8 = 1;
    FUNC_0(VAR_6->rmb_desc->len, &VAR_4, 1);
    VAR_6->urg_rx_skip_pend = 0;
   } else if (VAR_9 < -1)

    VAR_6->urg_state = VAR_0;
  }
 }

 FUNC_2(&VAR_6->local_tx_ctrl.cons, &VAR_4, VAR_6);



 FUNC_3(VAR_6, VAR_8);

 return VAR_10;
}
