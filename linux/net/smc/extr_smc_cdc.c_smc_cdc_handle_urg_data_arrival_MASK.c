
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; } ;
struct TYPE_4__ {int prod; } ;
struct smc_connection {int rx_off; char urg_rx_byte; TYPE_2__* rmb_desc; TYPE_3__ urg_curs; int urg_state; TYPE_1__ local_rx_ctrl; } ;
struct smc_sock {int sk; struct smc_connection conn; } ;
struct TYPE_5__ {int len; scalar_t__ cpu_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int *,struct smc_connection*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct smc_sock *VAR_2,
         int *VAR_3)
{
 struct smc_connection *VAR_4 = &VAR_2->conn;
 char *VAR_5;


 FUNC_1(&VAR_4->urg_curs, &VAR_4->local_rx_ctrl.prod, VAR_4);
 VAR_4->urg_state = VAR_0;
 if (!FUNC_2(&VAR_2->sk, VAR_1))

  (*VAR_3)--;
 VAR_5 = (char *)VAR_4->rmb_desc->cpu_addr + VAR_4->rx_off;
 if (VAR_4->urg_curs.count)
  VAR_4->urg_rx_byte = *(VAR_5 + VAR_4->urg_curs.count - 1);
 else
  VAR_4->urg_rx_byte = *(VAR_5 + VAR_4->rmb_desc->len - 1);
 FUNC_0(&VAR_2->sk);
}
