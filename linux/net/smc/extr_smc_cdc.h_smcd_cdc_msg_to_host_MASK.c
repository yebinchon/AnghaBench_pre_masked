
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union smc_host_cursor {int count; int wrap; } ;
struct TYPE_4__ {int conn_state_flags; int prod_flags; int count; int wrap; } ;
struct TYPE_3__ {int count; int wrap; } ;
struct smcd_cdc_msg {TYPE_2__ cons; TYPE_1__ prod; } ;
struct smc_host_cdc_msg {int conn_state_flags; int prod_flags; int cons; int prod; } ;
struct smc_connection {int dummy; } ;


 int FUNC_0 (int *,union smc_host_cursor*,struct smc_connection*) ;

__attribute__((used)) static inline void FUNC_1(struct smc_host_cdc_msg *VAR_0,
     struct smcd_cdc_msg *VAR_1,
     struct smc_connection *VAR_2)
{
 union smc_host_cursor VAR_3;

 VAR_3.wrap = VAR_1->prod.wrap;
 VAR_3.count = VAR_1->prod.count;
 FUNC_0(&VAR_0->prod, &VAR_3, VAR_2);

 VAR_3.wrap = VAR_1->cons.wrap;
 VAR_3.count = VAR_1->cons.count;
 FUNC_0(&VAR_0->cons, &VAR_3, VAR_2);
 VAR_0->prod_flags = VAR_1->cons.prod_flags;
 VAR_0->conn_state_flags = VAR_1->cons.conn_state_flags;
}
