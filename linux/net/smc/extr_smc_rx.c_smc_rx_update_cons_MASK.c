
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union smc_host_cursor {int dummy; } smc_host_cursor ;
struct TYPE_2__ {int cons; } ;
struct smc_connection {TYPE_1__ local_tx_ctrl; } ;
struct smc_sock {struct smc_connection conn; } ;


 int FUNC_0 (union smc_host_cursor*,int *,struct smc_connection*) ;
 int FUNC_1 (struct smc_sock*,union smc_host_cursor,size_t) ;

__attribute__((used)) static void FUNC_2(struct smc_sock *VAR_0, size_t VAR_1)
{
 struct smc_connection *VAR_2 = &VAR_0->conn;
 union smc_host_cursor VAR_3;

 FUNC_0(&VAR_3, &VAR_2->local_tx_ctrl.cons, VAR_2);
 FUNC_1(VAR_0, VAR_3, VAR_1);
}
