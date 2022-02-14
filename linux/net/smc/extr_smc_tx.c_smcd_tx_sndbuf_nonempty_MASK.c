
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_cdc_producer_flags {scalar_t__ urg_data_present; scalar_t__ urg_data_pending; } ;
struct TYPE_2__ {struct smc_cdc_producer_flags prod_flags; } ;
struct smc_connection {int send_lock; TYPE_1__ local_tx_ctrl; } ;


 int FUNC_0 (struct smc_connection*,int *) ;
 int FUNC_1 (struct smc_connection*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct smc_connection *VAR_0)
{
 struct smc_cdc_producer_flags *VAR_1 = &VAR_0->local_tx_ctrl.prod_flags;
 int VAR_2 = 0;

 FUNC_2(&VAR_0->send_lock);
 if (!VAR_1->urg_data_present)
  VAR_2 = FUNC_0(VAR_0, ((void*)0));
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0);

 if (!VAR_2 && VAR_1->urg_data_present) {
  VAR_1->urg_data_pending = 0;
  VAR_1->urg_data_present = 0;
 }
 FUNC_3(&VAR_0->send_lock);
 return VAR_2;
}
